#include <Uno/Graphics/GLHelper.h>
#include <Uno/JNIHelper.h>
#include <uBase/Console.h>
#include <jni.h>
#include <Uno.Exception.h>

EGLDisplay GLHelper::_eglDisplay;

EGLConfig GLHelper::_eglPBufferConfig;
EGLContext GLHelper::_eglPBufferContext = EGL_NO_CONTEXT;
EGLSurface GLHelper::_eglPBufferSurface = EGL_NO_SURFACE;

EGLConfig GLHelper::_eglRenderConfig;
EGLContext GLHelper::_eglSurfaceContext = EGL_NO_CONTEXT;

EGLContext GLHelper::_eglWorkerThreadContext = EGL_NO_CONTEXT;

GLuint GLHelper::_dummyTexture;
jobject GLHelper::_dummyJavaSurface;
ANativeWindow* GLHelper::_dummyNativeWindow = NULL;
EGLSurface GLHelper::_eglDummySurface;

const EGLint GLHelper::_contextAttribs[] = { EGL_CONTEXT_CLIENT_VERSION, 2, EGL_NONE };

void GLHelper::DeInitGL()
{
    if (false) LOGD("----DEINITGL----");
    eglMakeCurrent(_eglDisplay, EGL_NO_SURFACE, EGL_NO_SURFACE, EGL_NO_CONTEXT);

    if (_eglWorkerThreadContext != EGL_NO_CONTEXT)
        eglDestroyContext(_eglDisplay, _eglWorkerThreadContext);

    if (_eglPBufferContext != EGL_NO_CONTEXT)
        eglDestroyContext(_eglDisplay, _eglPBufferContext);

    if (_eglPBufferSurface != EGL_NO_SURFACE)
        eglDestroySurface(_eglDisplay, _eglPBufferSurface);

    if (_eglDisplay != EGL_NO_DISPLAY)
        eglTerminate(_eglDisplay);

    GLHelper::_eglPBufferConfig = 0;
    GLHelper::_eglRenderConfig = 0;
    GLHelper::_eglDisplay = 0;
    GLHelper::_eglPBufferContext = EGL_NO_CONTEXT;
    GLHelper::_eglPBufferSurface = EGL_NO_SURFACE;
    if (false) LOGD("---~DEINITGL~---");
}

void GLHelper::InitGL()
{
    if (false) LOGD("----INITGL----");

    // Create display
    _eglDisplay = eglGetDisplay(EGL_DEFAULT_DISPLAY);
    eglInitialize(_eglDisplay, 0, 0);

    // Get suitable configs for this device
    SetEGLConfigs();

    // Create context
    _eglPBufferContext = eglCreateContext(_eglDisplay, _eglPBufferConfig, EGL_NO_CONTEXT, _contextAttribs);
    if (_eglPBufferContext == EGL_NO_CONTEXT) throw uBase::Exception("Unable to create EGL PBuffer Context");
    if (false) LOGD("pbufferContext=%d", _eglPBufferContext);

    // Create surface context: uses the config for rendering (so no buffer bit)
    _eglSurfaceContext = eglCreateContext(_eglDisplay, _eglRenderConfig, _eglPBufferContext, _contextAttribs);
    if (_eglSurfaceContext == EGL_NO_CONTEXT) throw uBase::Exception("Unable to create EGL Surface Context");
    if (false) LOGD("surfaceContext=%d", _eglSurfaceContext);

    // Create worker-thread context: uses the config for rendering (so no buffer bit)
    _eglWorkerThreadContext = eglCreateContext(_eglDisplay, _eglRenderConfig, _eglPBufferContext, _contextAttribs);
    if (_eglWorkerThreadContext == EGL_NO_CONTEXT) throw uBase::Exception("Unable to create EGL Surface Context");
    if (false) LOGD("workerThreadContext=%d", _eglWorkerThreadContext);

    // Create the surface
    CreatePBufferSurfaceAndMakeCurrent();

    // DummySurface is a hack, but for now we need it. Will be removed after cleanup
    GLHelper::CreateDummySurface();

    if (false) LOGD("---~INITGL~---");
}

EGLContext GLHelper::GetSurfaceContext()
{
    return _eglSurfaceContext;
}

void GLHelper::CreatePBufferSurfaceAndMakeCurrent()
{
    // create pbuffer surface, this allows us to upload resources and then switch to an
    // eglwindowsurface when the java Surface is ready
    EGLint pbufferAttribs[] = { EGL_WIDTH, 1, EGL_HEIGHT, 1, EGL_NONE };

    _eglPBufferSurface = eglCreatePbufferSurface(_eglDisplay, _eglPBufferConfig, pbufferAttribs);
    if (_eglPBufferSurface == EGL_FALSE)
    {
        uBase::Error->WriteLine((uBase::String)"Unable to make EGL pbuffer surface");
        throw uBase::Exception("Unable to make EGL pbuffer surface");
    }
    MakeCurrent(_eglPBufferContext, _eglPBufferSurface);
}

void GLHelper::MakeCurrent(EGLContext context, EGLSurface surface)
{
    if (eglMakeCurrent(GLHelper::_eglDisplay, surface, surface, context) == EGL_FALSE)
    {
        uBase::Error->WriteLine((uBase::String)"GLHelper::MakeCurrent: Unable to make EGL context current:" + (uBase::String)eglGetError());
        throw uBase::Exception("Unable to make EGL context current");
    }
}

//
void GLHelper::CreateDummySurface()
{
    if (!_dummyNativeWindow)
    {
        GLHelper::MakeCurrent(GLHelper::_eglPBufferContext, GLHelper::_eglPBufferSurface);

        glGenTextures(1, &_dummyTexture);
        glBindTexture(GL_TEXTURE_2D, _dummyTexture);


        jclass activityClass = JniHelper::GetActivityClass();
        WITH_STATIC_JAVA_METHOD(createDummySurface, activityClass, "CreateDummySurface", "(I)Ljava/lang/Object;");
        jobject tmp = __jni->CallStaticObjectMethod(activityClass, createDummySurface, (jint)_dummyTexture);
        _dummyJavaSurface = __jni->NewGlobalRef(tmp);
        __jni->DeleteLocalRef(tmp);


        glBindTexture(GL_TEXTURE_2D, 0);

        _dummyNativeWindow = GLHelper::GetANativeWindowFromSurface(_dummyJavaSurface);
        CreateEGLSurfaceFromANativeWindow(_dummyNativeWindow, GLHelper::_eglRenderConfig, _eglDummySurface);
    }
}

void GLHelper::SwapBuffers(EGLSurface surface)
{
    eglSwapBuffers(_eglDisplay, surface);
}

void GLHelper::SwapBackToBackgroundSurface()
{
    // swap to dummysurface or pbuffer is dummy isnt ready yet
    if (!_dummyNativeWindow)
        SwapBackToPBufferSurface();
    else
        SwapToDummySurface();
}

void GLHelper::SwapBackToBackgroundSurface(EGLSurface surface)
{
    DestroyRenderSurface(surface);
    SwapBackToBackgroundSurface();
}

void GLHelper::SwapBackToPBufferSurface(EGLSurface surface)
{
    DestroyRenderSurface(surface);
    SwapBackToPBufferSurface();
}

void GLHelper::SwapBackToPBufferSurface()
{
    //if (false) LOGD("----SWAP BACK TO PBUFFER----");
    if (!_eglPBufferSurface) LOGD("PBuffer has somehow been destroyed (or was not created)");
    MakeCurrent(_eglPBufferContext, _eglPBufferSurface);
    //if (false) LOGD("---~SWAP BACK TO PBUFFER~---");
}

void GLHelper::SwapToDummySurface()
{
    //if (false) LOGD("----SWAP BACK TO PBUFFER----");
    if (!_eglDummySurface) LOGD("The DummySurface has somehow been destroyed (or was not created)");
    MakeCurrent(_eglSurfaceContext, _eglDummySurface);
    //if (false) LOGD("---~SWAP BACK TO PBUFFER~---");
}

void GLHelper::MakeWorkerThreadContextCurrent()
{
    //if (false) LOGD("----SWAP BACK TO PBUFFER----");
    if (!_eglPBufferSurface) LOGD("PBuffer has somehow been destroyed (or was not created)");
    MakeCurrent(_eglWorkerThreadContext, _eglPBufferSurface);
    //if (false) LOGD("---~SWAP BACK TO PBUFFER~---");
}

void GLHelper::DestroyRenderSurface(EGLSurface surface)
{
    if (false) LOGD("----RELEASE RENDER SURFACE AND CONTEXT----");
    eglDestroySurface(GLHelper::_eglDisplay, surface);
    if (false) LOGD("---~RELEASE RENDER SURFACE AND CONTEXT~---");
}

void GLHelper::CreateEGLSurfaceFromANativeWindow(ANativeWindow* nativeWindow, EGLConfig config, EGLSurface& newSurface)
{
    EGLint format;
    eglGetConfigAttrib(GLHelper::_eglDisplay, config, EGL_NATIVE_VISUAL_ID, &format);
    ANativeWindow_setBuffersGeometry(nativeWindow, 0, 0, format);
    newSurface = eglCreateWindowSurface(GLHelper::_eglDisplay, config, nativeWindow, NULL);
    if (newSurface == EGL_NO_SURFACE) throw uBase::Exception("Unable to create EGL Surface");
}

void GLHelper::CreateNewSurfaceAndMakeCurrent(ANativeWindow* nativeWindow, EGLSurface& newSurface)
{
    if (false) LOGD("----NEW SURFACE AND MAKE CURRENT----");

    // Create the new suface from the ANativeWindow we got from the Java Surface
    CreateEGLSurfaceFromANativeWindow(nativeWindow, GLHelper::_eglRenderConfig, newSurface);

    // Make the new setup current, we swap back to pbuffer when we suspend
    MakeCurrent(GLHelper::_eglSurfaceContext, newSurface);

    if (false) LOGD("---~NEW SURFACE AND MAKE CURRENT~---");
}

void GLHelper::_setEGLConfig(bool forPBuffer)
{
    // Find suitable attribs for this device
    EGLConfig configs[128];
    EGLint numConfigs;
    bool foundSuitableAttribs = false;

    EGLint _configAttribsPrimary[] = {
        EGL_SURFACE_TYPE, (forPBuffer ? EGL_PBUFFER_BIT : EGL_WINDOW_BIT),
        EGL_RED_SIZE, 5, EGL_GREEN_SIZE, 6, EGL_BLUE_SIZE, 5,
        EGL_ALPHA_SIZE, 0, EGL_DEPTH_SIZE, 16, EGL_STENCIL_SIZE, 0,
        EGL_RENDERABLE_TYPE, EGL_OPENGL_ES2_BIT, EGL_BIND_TO_TEXTURE_RGBA, EGL_TRUE,
        EGL_NONE
    };
    EGLint _configAttribsFallback[] = {
        EGL_SURFACE_TYPE, (forPBuffer ? EGL_PBUFFER_BIT : EGL_WINDOW_BIT),
        EGL_RED_SIZE, 5, EGL_GREEN_SIZE, 6, EGL_BLUE_SIZE, 5,
        EGL_ALPHA_SIZE, 0, EGL_DEPTH_SIZE, 16, EGL_STENCIL_SIZE, 0,
        EGL_RENDERABLE_TYPE, EGL_OPENGL_ES2_BIT, EGL_NONE
    };

    if (!eglChooseConfig(_eglDisplay, _configAttribsPrimary, configs, 128, &numConfigs) || (numConfigs == 0))
    {
        if (!eglChooseConfig(_eglDisplay, _configAttribsFallback, configs, 128, &numConfigs) || (numConfigs == 0))
            throw uBase::Exception("Unable to choose suitable EGL attribs for config");
    }

    EGLint cs = 0, cd = 0, cb = 0;
    int cc = 0;

    const uBase::Vector4i& colorBits = uBase::Vector4i(8, 8, 8, 8);
    int samples = 4;
    for (int i = 0; i < numConfigs; i++)
    {
        EGLint samples, depth, stencil, buffer, r, g, b, a, render;
        eglGetConfigAttrib(_eglDisplay, configs[i], EGL_RED_SIZE, &r);
        eglGetConfigAttrib(_eglDisplay, configs[i], EGL_GREEN_SIZE, &g);
        eglGetConfigAttrib(_eglDisplay, configs[i], EGL_BLUE_SIZE, &b);
        eglGetConfigAttrib(_eglDisplay, configs[i], EGL_ALPHA_SIZE, &a);
        eglGetConfigAttrib(_eglDisplay, configs[i], EGL_BUFFER_SIZE, &buffer);
        eglGetConfigAttrib(_eglDisplay, configs[i], EGL_DEPTH_SIZE, &depth);
        eglGetConfigAttrib(_eglDisplay, configs[i], EGL_STENCIL_SIZE, &stencil);
        eglGetConfigAttrib(_eglDisplay, configs[i], EGL_SAMPLES, &samples);

        if (false)
            uBase::Error->WriteLine(uBase::String::Format("DEBUG: EGLConfig[%d]:  M %d  D %d  S %d  B %d  R %d  G %d  B %d  A %d", i, samples, depth, stencil, buffer, r, g, b, a));

        if (samples >= cs && depth >= cd && buffer >= cb &&
            samples <= samples && r <= colorBits.R && g <= colorBits.G && b <= colorBits.B && a <= colorBits.A)
        {
            cs = samples;
            cd = depth;
            cb = buffer;
            cc = i;
        }
    }

    if (forPBuffer) {
        _eglPBufferConfig = configs[cc];
        if (false)
            uBase::Error->WriteLine((uBase::String)"DEBUG: Selected PBuffer EGLConfig[" + (int)cc + "]");
    } else {
        _eglRenderConfig = configs[cc];
        if (false)
            uBase::Error->WriteLine((uBase::String)"DEBUG: Selected Render EGLConfig[" + (int)cc + "]");
    }
}

ANativeWindow* GLHelper::GetANativeWindowFromSurface(jobject surface)
{
    JniHelper jni;
    return ANativeWindow_fromSurface(jni.GetEnv(), surface);
}

void GLHelper::AssertValidContext()
{
    EGLContext cntx = eglGetCurrentContext();
    if (cntx != GLHelper::_eglPBufferContext && cntx != GLHelper::_eglSurfaceContext)
    {
        U_THROW(::g::Uno::Exception::New2(uString::Utf8("GLHelper::AssertValidContext: Invalid GL context. Not our pbuffer context or surface context",92)));
    }
}
