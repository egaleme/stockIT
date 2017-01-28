#include <BootstrapperImpl_Android.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Types.Bridge.h>
#include <Android.com.fuse.ExperimentalHttp.HttpRequest.h>
void BootstrapperImpl() {
    ::g::Android::Base::Types::Bridge::RegisterUnoType("com.fuse.ExperimentalHttp.HttpRequest", 37, ::g::Android::com::fuse::ExperimentalHttp::HttpRequest_typeof());
}
