// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JavaObjectHelper.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Drawing.ResampleMode.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.AlignmentHelpers.h>
#include <Fuse.Elements.StretchDirection.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Elements.StretchSizing.h>
#include <Fuse.Internal.AndroidSystemFont.Alias.h>
#include <Fuse.Internal.AndroidSystemFont.Family.h>
#include <Fuse.Internal.AndroidSystemFont.FontDescriptor.h>
#include <Fuse.Internal.AndroidSystemFont.h>
#include <Fuse.Internal.Blender-1.h>
#include <Fuse.Internal.BlenderMap.h>
#include <Fuse.Internal.DoubleBlender.h>
#include <Fuse.Internal.DrawManager.h>
#include <Fuse.Internal.Float2Blender.h>
#include <Fuse.Internal.Float3Blender.h>
#include <Fuse.Internal.Float4Blender.h>
#include <Fuse.Internal.FloatBlender.h>
#include <Fuse.Internal.FontFaceDescriptor.h>
#include <Fuse.Internal.FrustumMatrix.h>
#include <Fuse.Internal.IImageContainerOwner.h>
#include <Fuse.Internal.ImageContainer.h>
#include <Fuse.Internal.MiniList-1.Enumerator-1.h>
#include <Fuse.Internal.MiniList-1.h>
#include <Fuse.Internal.RectPacker.h>
#include <Fuse.Internal.ScalarBlender-1.h>
#include <Fuse.Internal.Size2Blender.h>
#include <Fuse.Internal.SizeBlender.h>
#include <Fuse.Internal.SizingContainer.h>
#include <Fuse.Internal.SkylineNode.h>
#include <Fuse.Internal.Statistics.h>
#include <Fuse.Internal.SystemFont.h>
#include <Fuse.Internal.VectorUtil.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.Resources.FileImageSource.h>
#include <Fuse.Resources.HttpImageSource.h>
#include <Fuse.Resources.ImageSource.h>
#include <Fuse.Resources.ImageSourceErrorArgs.h>
#include <Fuse.Resources.ImageSourceErrorHandler.h>
#include <Fuse.Resources.MemoryPolicy.h>
#include <Fuse.Resources.MultiDensityImageSource.h>
#include <Fuse.Resources.SystemFileSource.h>
#include <Fuse.SystemFont.Style.h>
#include <Fuse.SystemFont.Weight.h>
#include <jni.h>
#include <Uno.Action-1.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.ArgumentOutOfRangeException.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.HashSet-1.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.LinkedList-1.h>
#include <Uno.Collections.LinkedListNode-1.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.ObservableList-1.h>
#include <Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.IndexOutOfRangeException.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.IO.File.h>
#include <Uno.Math.h>
#include <Uno.Recti.h>
#include <Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Size2.h>
#include <Uno.UX.Unit.h>
#include <Uno.Vector.h>
#include <Uno/JNIHelper.h>
static uString* STRINGS[6];
static uType* TYPES[36];

namespace g{
namespace Fuse{
namespace Internal{

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\internal\$.uno
// ------------------------------------------------------------------------------------

// private struct AndroidSystemFont.Alias :47
// {
static void AndroidSystemFont__Alias_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Internal::AndroidSystemFont__Alias, To), 0,
        ::g::Fuse::SystemFont__Weight_typeof(), offsetof(::g::Fuse::Internal::AndroidSystemFont__Alias, Weight), 0);
}

uStructType* AndroidSystemFont__Alias_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(AndroidSystemFont__Alias);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Internal.AndroidSystemFont.Alias", options);
    type->fp_build_ = AndroidSystemFont__Alias_build;
    return type;
}

// public Alias(string to, Fuse.SystemFont.Weight weight) :52
void AndroidSystemFont__Alias__ctor__fn(AndroidSystemFont__Alias* __this, uString* to, int* weight)
{
    __this->ctor_(to, *weight);
}

// public Alias New(string to, Fuse.SystemFont.Weight weight) :52
void AndroidSystemFont__Alias__New1_fn(uString* to, int* weight, AndroidSystemFont__Alias* __retval)
{
    *__retval = AndroidSystemFont__Alias__New1(to, *weight);
}

// public Alias(string to, Fuse.SystemFont.Weight weight) [instance] :52
void AndroidSystemFont__Alias::ctor_(uString* to, int weight)
{
    To = to;
    Weight = weight;
}

// public Alias New(string to, Fuse.SystemFont.Weight weight) [static] :52
AndroidSystemFont__Alias AndroidSystemFont__Alias__New1(uString* to, int weight)
{
    AndroidSystemFont__Alias obj1;
    obj1.ctor_(to, weight);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\internal\$.uno
// ------------------------------------------------------------------------------------

// internal static extern class AndroidSystemFont :13
// {
static void AndroidSystemFont_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::String_typeof();
    ::TYPES[1] = ::g::Uno::Collections::List_typeof()->MakeType(AndroidSystemFont__Family_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::TYPES[0/*string*/], AndroidSystemFont__Alias_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::HashSet_typeof()->MakeType(::TYPES[0/*string*/], NULL);
    ::TYPES[4] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Internal::FontFaceDescriptor_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(AndroidSystemFont__Family_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[2/*Uno.Collections.Dictionary<string, Fuse.Internal.AndroidSystemFont.Alias>*/], (uintptr_t)&::g::Fuse::Internal::AndroidSystemFont::_aliases_, uFieldFlagsStatic,
        ::TYPES[4/*Uno.Collections.List<Fuse.Internal.FontFaceDescriptor>*/], (uintptr_t)&::g::Fuse::Internal::AndroidSystemFont::_default_, uFieldFlagsStatic,
        ::TYPES[1/*Uno.Collections.List<Fuse.Internal.AndroidSystemFont.Family>*/], (uintptr_t)&::g::Fuse::Internal::AndroidSystemFont::_families_, uFieldFlagsStatic,
        ::TYPES[3/*Uno.Collections.HashSet<string>*/], (uintptr_t)&::g::Fuse::Internal::AndroidSystemFont::_familyNames_, uFieldFlagsStatic);
}

uClassType* AndroidSystemFont_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Internal.AndroidSystemFont", options);
    type->fp_build_ = AndroidSystemFont_build;
    return type;
}

// private static void AddAlias(string name, string to, int weight) :229
void AndroidSystemFont__AddAlias_fn(uString* name, uString* to, int* weight)
{
    AndroidSystemFont::AddAlias(name, to, *weight);
}

// private static void AddFamily(string name, string language, string variant) :207
void AndroidSystemFont__AddFamily_fn(uString* name, uString* language, uString* variant)
{
    AndroidSystemFont::AddFamily(name, language, variant);
}

// private static void AddFont(string path, int index, int weight, bool isItalic) :217
void AndroidSystemFont__AddFont_fn(uString* path, int* index, int* weight, bool* isItalic)
{
    AndroidSystemFont::AddFont(path, *index, *weight, *isItalic);
}

// private static void AddFonts() :172
void AndroidSystemFont__AddFonts_fn()
{
    AndroidSystemFont::AddFonts();
}

// public static Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> get_Default() :68
void AndroidSystemFont__get_Default_fn(::g::Uno::Collections::List** __retval)
{
    *__retval = AndroidSystemFont::Default();
}

// private static void EnsureFontsAdded() :160
void AndroidSystemFont__EnsureFontsAdded_fn()
{
    AndroidSystemFont::EnsureFontsAdded();
}

// private static Fuse.Internal.FontFaceDescriptor Get(Fuse.Internal.AndroidSystemFont.Family family, Fuse.SystemFont.Style style, Fuse.SystemFont.Weight weight) :132
void AndroidSystemFont__Get_fn(AndroidSystemFont__Family* family, int* style, int* weight, ::g::Fuse::Internal::FontFaceDescriptor** __retval)
{
    *__retval = AndroidSystemFont::Get(*family, *style, *weight);
}

// public static Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> Get(string familyName, Fuse.SystemFont.Style style, Fuse.SystemFont.Weight weight) :97
void AndroidSystemFont__Get1_fn(uString* familyName, int* style, int* weight, ::g::Uno::Collections::List** __retval)
{
    *__retval = AndroidSystemFont::Get1(familyName, *style, *weight);
}

// private static void ThrowUno(string message) :202
void AndroidSystemFont__ThrowUno_fn(uString* message)
{
    AndroidSystemFont::ThrowUno(message);
}

// private static Fuse.SystemFont.Weight ToWeight(int w) :227
void AndroidSystemFont__ToWeight_fn(int* w, int* __retval)
{
    *__retval = AndroidSystemFont::ToWeight(*w);
}

uSStrong< ::g::Uno::Collections::Dictionary*> AndroidSystemFont::_aliases_;
uSStrong< ::g::Uno::Collections::List*> AndroidSystemFont::_default_;
uSStrong< ::g::Uno::Collections::List*> AndroidSystemFont::_families_;
uSStrong< ::g::Uno::Collections::HashSet*> AndroidSystemFont::_familyNames_;

// private static void AddAlias(string name, string to, int weight) [static] :229
void AndroidSystemFont::AddAlias(uString* name, uString* to, int weight)
{
    bool ret2;
    bool ret3;
    bool ret4;

    if (::g::Uno::String::op_Inequality(name, NULL) && !(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(AndroidSystemFont::_aliases_), name, &ret2), ret2))
    {
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(AndroidSystemFont::_aliases_), name, uCRef(AndroidSystemFont__Alias__New1(to, AndroidSystemFont::ToWeight(weight))));

        if (!(::g::Uno::Collections::HashSet__Contains_fn(uPtr(AndroidSystemFont::_familyNames_), name, &ret3), ret3))
            ::g::Uno::Collections::HashSet__Add_fn(uPtr(AndroidSystemFont::_familyNames_), name, &ret4);
    }
}

// private static void AddFamily(string name, string language, string variant) [static] :207
void AndroidSystemFont::AddFamily(uString* name, uString* language, uString* variant)
{
    bool ret5;
    bool ret6;
    uString* lowerName = ::g::Uno::String::op_Equality(name, NULL) ? uCast<uString*>(NULL, ::TYPES[0/*string*/]) : (uString*)::g::Uno::String::ToLower(uPtr(name));
    ::g::Uno::Collections::List__Add_fn(uPtr(AndroidSystemFont::_families_), uCRef(AndroidSystemFont__Family__New1(lowerName, language, variant)));

    if (::g::Uno::String::op_Inequality(lowerName, NULL) && !(::g::Uno::Collections::HashSet__Contains_fn(uPtr(AndroidSystemFont::_familyNames_), lowerName, &ret5), ret5))
        ::g::Uno::Collections::HashSet__Add_fn(uPtr(AndroidSystemFont::_familyNames_), lowerName, &ret6);
}

// private static void AddFont(string path, int index, int weight, bool isItalic) [static] :217
void AndroidSystemFont::AddFont(uString* path, int index, int weight, bool isItalic)
{
    AndroidSystemFont__Family ret7;
    ::g::Uno::Collections::List__Add_fn(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(AndroidSystemFont::_families_), uCRef<int>(uPtr(AndroidSystemFont::_families_)->Count() - 1), &ret7), ret7).Fonts), uCRef(AndroidSystemFont__FontDescriptor__New1(path, index, isItalic ? 1 : 0, AndroidSystemFont::ToWeight(weight))));
}

// private static void AddFonts() [static] :172
void AndroidSystemFont::AddFonts()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddFonts52", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void EnsureFontsAdded() [static] :160
void AndroidSystemFont::EnsureFontsAdded()
{
    if (AndroidSystemFont::_families_ == NULL)
    {
        AndroidSystemFont::_families_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[1/*Uno.Collections.List<Fuse.Internal.AndroidSystemFont.Family>*/]));
        AndroidSystemFont::_aliases_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[2/*Uno.Collections.Dictionary<string, Fuse.Internal.AndroidSystemFont.Alias>*/]));
        AndroidSystemFont::_familyNames_ = ((::g::Uno::Collections::HashSet*)::g::Uno::Collections::HashSet::New1(::TYPES[3/*Uno.Collections.HashSet<string>*/]));
        AndroidSystemFont::AddFonts();
    }
}

// private static Fuse.Internal.FontFaceDescriptor Get(Fuse.Internal.AndroidSystemFont.Family family, Fuse.SystemFont.Style style, Fuse.SystemFont.Weight weight) [static] :132
::g::Fuse::Internal::FontFaceDescriptor* AndroidSystemFont::Get(AndroidSystemFont__Family family, int style, int weight)
{
    AndroidSystemFont__FontDescriptor ret8;
    AndroidSystemFont__FontDescriptor ret9;
    int lowestDiff = 2147483647;
    int lowestIndex = -1;

    for (int i = 0; i < uPtr(family.Fonts)->Count(); ++i)
    {
        AndroidSystemFont__FontDescriptor font = (::g::Uno::Collections::List__get_Item_fn(uPtr(family.Fonts), uCRef<int>(i), &ret8), ret8);

        if (::g::Uno::IO::File::Exists(font.FilePath))
        {
            int diff = (100 * ::g::Uno::Math::Abs5(style - font.Style)) + ::g::Uno::Math::Abs5(weight - font.Weight);

            if (diff < lowestDiff)
            {
                lowestDiff = diff;
                lowestIndex = i;

                if (diff == 0)
                    break;
            }
        }
    }

    if (lowestIndex >= 0)
    {
        AndroidSystemFont__FontDescriptor font1 = (::g::Uno::Collections::List__get_Item_fn(uPtr(family.Fonts), uCRef<int>(lowestIndex), &ret9), ret9);
        return ::g::Fuse::Internal::FontFaceDescriptor::New1(::g::Fuse::Resources::SystemFileSource::New1(font1.FilePath), font1.Index);
    }

    return NULL;
}

// public static Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> Get(string familyName, Fuse.SystemFont.Style style, Fuse.SystemFont.Weight weight) [static] :97
::g::Uno::Collections::List* AndroidSystemFont::Get1(uString* familyName, int style, int weight)
{
    bool ret10;
    ::g::Uno::Collections::List__Enumerator<AndroidSystemFont__Family> ret11;
    AndroidSystemFont::EnsureFontsAdded();

    if (::g::Uno::String::op_Inequality(familyName, NULL))
    {
        AndroidSystemFont__Alias alias;

        if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(AndroidSystemFont::_aliases_), familyName, &alias, &ret10), ret10))
            return AndroidSystemFont::Get1(alias.To, style, weight);
    }

    ::g::Uno::Collections::List* result = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[4/*Uno.Collections.List<Fuse.Internal.FontFaceDescriptor>*/]);
    bool realMatch = false;

    for (::g::Uno::Collections::List__Enumerator<AndroidSystemFont__Family> enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(AndroidSystemFont::_families_), &ret11), ret11); enum1.MoveNext(::TYPES[5/*Uno.Collections.List<Fuse.Internal.AndroidSystemFont.Family>.Enumerator*/]); )
    {
        AndroidSystemFont__Family family = enum1.Current(::TYPES[5/*Uno.Collections.List<Fuse.Internal.AndroidSystemFont.Family>.Enumerator*/]);

        if ((::g::Uno::String::op_Equality(familyName, NULL) || ::g::Uno::String::op_Equality(family.Name, NULL)) || ::g::Uno::String::op_Equality(familyName, family.Name))
        {
            realMatch = realMatch || ::g::Uno::String::op_Equality(familyName, family.Name);
            ::g::Fuse::Internal::FontFaceDescriptor* descriptor = AndroidSystemFont::Get(family, style, weight);

            if (descriptor != NULL)
                ::g::Uno::Collections::List__Add_fn(uPtr(result), descriptor);
        }
    }

    if ((realMatch || (style != 0)) || (weight != 3))
        return result;
    else
        return AndroidSystemFont::Default();
}

// private static void ThrowUno(string message) [static] :202
void AndroidSystemFont::ThrowUno(uString* message)
{
    U_THROW(::g::Uno::Exception::New2(message));
}

// private static Fuse.SystemFont.Weight ToWeight(int w) [static] :227
int AndroidSystemFont::ToWeight(int w)
{
    return (w / 100) - 1;
}

// public static Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> get_Default() [static] :68
::g::Uno::Collections::List* AndroidSystemFont::Default()
{
    AndroidSystemFont__Family ret12;

    if (AndroidSystemFont::_default_ == NULL)
    {
        AndroidSystemFont::EnsureFontsAdded();

        if (uPtr(AndroidSystemFont::_families_)->Count() >= 1)
            AndroidSystemFont::_default_ = AndroidSystemFont::Get1((::g::Uno::Collections::List__get_Item_fn(uPtr(AndroidSystemFont::_families_), uCRef<int>(0), &ret12), ret12).Name, 0, 3);
    }

    return AndroidSystemFont::_default_;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\internal\$.uno
// ------------------------------------------------------------------------------------

// internal abstract class Blender<T> :305
// {
static void Blender_build(uType* type)
{
    type->SetPrecalc(
        type->T(0));
}

Blender_type* Blender_typeof()
{
    static uSStrong<Blender_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(Blender);
    options.TypeSize = sizeof(Blender_type);
    type = (Blender_type*)uClassType::New("Fuse.Internal.Blender`1", options);
    type->fp_build_ = Blender_build;
    return type;
}

// protected generated Blender() :305
void Blender__ctor__fn(Blender* __this)
{
    __this->ctor_();
}

// public double Distance(T a, T b) :322
void Blender__Distance_fn(Blender* __this, void* a, void* b, double* __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(Blender_typeof())->Precalced(0/*T*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    double ret1;
    return *__retval = (__this->Length_ex((__this->Sub_ex(a, b, &ret2), ret2), &ret1), ret1), void();
}

// public T ScalarMult(T v, double s) :328
void Blender__ScalarMult_fn(Blender* __this, void* v, double* s, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(Blender_typeof())->Precalced(0/*T*/),
    };
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    double s_ = *s;
    return __retval.Store((__this->Weight_ex(v, uCRef(s_), &ret3), ret3)), void();
}

// public T UnitWeight(T v, double w) :316
void Blender__UnitWeight_fn(Blender* __this, void* v, double* w, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(Blender_typeof())->Precalced(0/*T*/),
    };
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT unit(__types[0], U_ALLOCA(__types[0]->ValueSize));
    double w_ = *w;
    double l;
    unit = (__this->ToUnit_ex(v, &l, &ret4), ret4);
    return __retval.Store((__this->Weight_ex(unit, uCRef(w_), &ret5), ret5)), void();
}

// protected generated Blender() [instance] :305
void Blender::ctor_()
{
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\internal\$.uno
// ------------------------------------------------------------------------------------

// internal sealed class BlenderMap :252
// {
// static BlenderMap() :252
static void BlenderMap__cctor__fn(uType* __type)
{
    BlenderMap::_blenders_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[6/*Uno.Collections.Dictionary<Uno.Type, object>*/]));
    BlenderMap::_scalarBlenders_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[6/*Uno.Collections.Dictionary<Uno.Type, object>*/]));
}

static void BlenderMap_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Unsupported blender type: ");
    ::TYPES[6] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Type_typeof(), uObject_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Type_typeof();
    ::TYPES[8] = ::g::Fuse::Internal::Blender_typeof();
    ::TYPES[9] = ::g::Fuse::Internal::ScalarBlender_typeof();
    type->MethodTypes[0]->SetPrecalc(
        ::TYPES[8/*Fuse.Internal.Blender`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL));
    type->MethodTypes[1]->SetPrecalc(
        ::TYPES[9/*Fuse.Internal.ScalarBlender`1*/]->MakeType(type->MethodTypes[1]->U(0), NULL));
    type->SetFields(0,
        ::TYPES[6/*Uno.Collections.Dictionary<Uno.Type, object>*/], (uintptr_t)&::g::Fuse::Internal::BlenderMap::_blenders_, uFieldFlagsStatic,
        ::TYPES[6/*Uno.Collections.Dictionary<Uno.Type, object>*/], (uintptr_t)&::g::Fuse::Internal::BlenderMap::_scalarBlenders_, uFieldFlagsStatic);
}

uType* BlenderMap_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.MethodTypeCount = 2;
    options.ObjectSize = sizeof(BlenderMap);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Internal.BlenderMap", options);
    type->MethodTypes[0] = type->NewMethodType(1, 1);
    type->MethodTypes[1] = type->NewMethodType(1, 1);
    type->fp_build_ = BlenderMap_build;
    type->fp_cctor_ = BlenderMap__cctor__fn;
    return type;
}

// public static Fuse.Internal.Blender<T> Get<T>() :256
void BlenderMap__Get_fn(uType* __type, ::g::Fuse::Internal::Blender** __retval)
{
    *__retval = BlenderMap::Get(__type);
}

// public static Fuse.Internal.ScalarBlender<T> GetScalar<T>() :286
void BlenderMap__GetScalar_fn(uType* __type, ::g::Fuse::Internal::ScalarBlender** __retval)
{
    *__retval = BlenderMap::GetScalar(__type);
}

uSStrong< ::g::Uno::Collections::Dictionary*> BlenderMap::_blenders_;
uSStrong< ::g::Uno::Collections::Dictionary*> BlenderMap::_scalarBlenders_;

// public static Fuse.Internal.Blender<T> Get<T>() [static] :256
::g::Fuse::Internal::Blender* BlenderMap::Get(uType* __type)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Internal.Blender<T>*/),
    };
    __type->Base->Init();
    bool ret2;
    uObject* blender;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(BlenderMap::_blenders()), __type->U(0), (void**)(&blender), &ret2), ret2))
    {
        if (::g::Uno::Type::op_Equality(__type->U(0), ::g::Uno::Float_typeof()))
            blender = ::g::Fuse::Internal::FloatBlender::New1();
        else if (::g::Uno::Type::op_Equality(__type->U(0), ::g::Uno::Float2_typeof()))
            blender = ::g::Fuse::Internal::Float2Blender::New1();
        else if (::g::Uno::Type::op_Equality(__type->U(0), ::g::Uno::Float3_typeof()))
            blender = ::g::Fuse::Internal::Float3Blender::New1();
        else if (::g::Uno::Type::op_Equality(__type->U(0), ::g::Uno::Float4_typeof()))
            blender = ::g::Fuse::Internal::Float4Blender::New1();
        else if (::g::Uno::Type::op_Equality(__type->U(0), ::g::Uno::Double_typeof()))
            blender = ::g::Fuse::Internal::DoubleBlender::New1();
        else if (::g::Uno::Type::op_Equality(__type->U(0), ::g::Uno::UX::Size_typeof()))
            blender = ::g::Fuse::Internal::SizeBlender::New1();
        else if (::g::Uno::Type::op_Equality(__type->U(0), ::g::Uno::UX::Size2_typeof()))
            blender = ::g::Fuse::Internal::Size2Blender::New1();
        else
            U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[0/*"Unsupported...*/], __type->U(0))));

        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(BlenderMap::_blenders()), __type->U(0), blender);
    }

    return uCast< ::g::Fuse::Internal::Blender*>(blender, __types[0]);
}

// public static Fuse.Internal.ScalarBlender<T> GetScalar<T>() [static] :286
::g::Fuse::Internal::ScalarBlender* BlenderMap::GetScalar(uType* __type)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Internal.ScalarBlender<T>*/),
    };
    __type->Base->Init();
    bool ret3;
    uObject* blender;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(BlenderMap::_scalarBlenders()), __type->U(0), (void**)(&blender), &ret3), ret3))
    {
        if (::g::Uno::Type::op_Equality(__type->U(0), ::g::Uno::Float_typeof()))
            blender = ::g::Fuse::Internal::FloatBlender::New1();
        else if (::g::Uno::Type::op_Equality(__type->U(0), ::g::Uno::Double_typeof()))
            blender = ::g::Fuse::Internal::DoubleBlender::New1();
        else
            U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[0/*"Unsupported...*/], __type->U(0))));

        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(BlenderMap::_scalarBlenders()), __type->U(0), blender);
    }

    return uCast< ::g::Fuse::Internal::ScalarBlender*>(blender, __types[0]);
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\internal\$.uno
// ------------------------------------------------------------------------------------

// internal sealed class DoubleBlender :390
// {
static void DoubleBlender_build(uType* type)
{
    type->SetBase(::g::Fuse::Internal::ScalarBlender_typeof()->MakeType(::g::Uno::Double_typeof(), NULL));
}

::g::Fuse::Internal::ScalarBlender_type* DoubleBlender_typeof()
{
    static uSStrong< ::g::Fuse::Internal::ScalarBlender_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Internal::ScalarBlender_typeof();
    options.ObjectSize = sizeof(DoubleBlender);
    options.TypeSize = sizeof(::g::Fuse::Internal::ScalarBlender_type);
    type = (::g::Fuse::Internal::ScalarBlender_type*)uClassType::New("Fuse.Internal.DoubleBlender", options);
    type->fp_build_ = DoubleBlender_build;
    type->fp_ctor_ = (void*)DoubleBlender__New1_fn;
    type->fp_Add = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))DoubleBlender__Add_fn;
    type->fp_FromDouble = (void(*)(::g::Fuse::Internal::ScalarBlender*, double*, uTRef))DoubleBlender__FromDouble_fn;
    type->fp_Length = (void(*)(::g::Fuse::Internal::Blender*, void*, double*))DoubleBlender__Length_fn;
    type->fp_Lerp = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, double*, uTRef))DoubleBlender__Lerp_fn;
    type->fp_Sub = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))DoubleBlender__Sub_fn;
    type->fp_ToDouble = (void(*)(::g::Fuse::Internal::ScalarBlender*, void*, double*))DoubleBlender__ToDouble_fn;
    type->fp_ToUnit = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))DoubleBlender__ToUnit_fn;
    type->fp_Weight = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))DoubleBlender__Weight_fn;
    type->fp_get_Zero = (void(*)(::g::Fuse::Internal::Blender*, uTRef))DoubleBlender__get_Zero_fn;
    return type;
}

// public generated DoubleBlender() :390
void DoubleBlender__ctor_2_fn(DoubleBlender* __this)
{
    __this->ctor_2();
}

// public override sealed double Add(double a, double b) :393
void DoubleBlender__Add_fn(DoubleBlender* __this, double* a, double* b, double* __retval)
{
    double a_ = *a;
    double b_ = *b;
    return *__retval = a_ + b_, void();
}

// public override sealed double FromDouble(double a) :405
void DoubleBlender__FromDouble_fn(DoubleBlender* __this, double* a, double* __retval)
{
    double a_ = *a;
    return *__retval = a_, void();
}

// public override sealed double Length(double a) :403
void DoubleBlender__Length_fn(DoubleBlender* __this, double* a, double* __retval)
{
    double a_ = *a;
    return *__retval = ::g::Uno::Math::Abs(a_), void();
}

// public override sealed double Lerp(double a, double b, double d) :395
void DoubleBlender__Lerp_fn(DoubleBlender* __this, double* a, double* b, double* d, double* __retval)
{
    double a_ = *a;
    double b_ = *b;
    double d_ = *d;
    return *__retval = a_ + ((b_ - a_) * d_), void();
}

// public generated DoubleBlender New() :390
void DoubleBlender__New1_fn(DoubleBlender** __retval)
{
    *__retval = DoubleBlender::New1();
}

// public override sealed double Sub(double a, double b) :394
void DoubleBlender__Sub_fn(DoubleBlender* __this, double* a, double* b, double* __retval)
{
    double a_ = *a;
    double b_ = *b;
    return *__retval = a_ - b_, void();
}

// public override sealed double ToDouble(double a) :404
void DoubleBlender__ToDouble_fn(DoubleBlender* __this, double* a, double* __retval)
{
    double a_ = *a;
    return *__retval = a_, void();
}

// public override sealed double ToUnit(double a, double& length) :398
void DoubleBlender__ToUnit_fn(DoubleBlender* __this, double* a, double* length, double* __retval)
{
    double a_ = *a;
    *length = ::g::Uno::Math::Abs(a_);
    return *__retval = (double)((a_ < 0.0) ? -1 : 1), void();
}

// public override sealed double Weight(double v, double w) :392
void DoubleBlender__Weight_fn(DoubleBlender* __this, double* v, double* w, double* __retval)
{
    double v_ = *v;
    double w_ = *w;
    return *__retval = v_ * w_, void();
}

// public override sealed double get_Zero() :396
void DoubleBlender__get_Zero_fn(DoubleBlender* __this, double* __retval)
{
    return *__retval = 0.0, void();
}

// public generated DoubleBlender() [instance] :390
void DoubleBlender::ctor_2()
{
    ctor_1();
}

// public generated DoubleBlender New() [static] :390
DoubleBlender* DoubleBlender::New1()
{
    DoubleBlender* obj1 = (DoubleBlender*)uNew(DoubleBlender_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\$.uno
// ---------------------------------------------------------------------------

// internal static class DrawManager :1226
// {
static void DrawManager_build(uType* type)
{
    ::TYPES[10] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::DrawContext_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[10/*Uno.Action<Fuse.DrawContext>*/], (uintptr_t)&::g::Fuse::Internal::DrawManager::Prepared1_, uFieldFlagsStatic);
}

uClassType* DrawManager_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Internal.DrawManager", options);
    type->fp_build_ = DrawManager_build;
    return type;
}

// public static void EndDraw(Fuse.DrawContext dc) :1239
void DrawManager__EndDraw_fn(::g::Fuse::DrawContext* dc)
{
    DrawManager::EndDraw(dc);
}

// public static generated void add_Prepared(Uno.Action<Fuse.DrawContext> value) :1228
void DrawManager__add_Prepared_fn(uDelegate* value)
{
    DrawManager::add_Prepared(value);
}

// public static generated void remove_Prepared(Uno.Action<Fuse.DrawContext> value) :1228
void DrawManager__remove_Prepared_fn(uDelegate* value)
{
    DrawManager::remove_Prepared(value);
}

// public static void PrepareDraw(Fuse.DrawContext dc) :1230
void DrawManager__PrepareDraw_fn(::g::Fuse::DrawContext* dc)
{
    DrawManager::PrepareDraw(dc);
}

uSStrong<uDelegate*> DrawManager::Prepared1_;

// public static void EndDraw(Fuse.DrawContext dc) [static] :1239
void DrawManager::EndDraw(::g::Fuse::DrawContext* dc)
{
    uPtr(dc)->ReleaseRootbuffer();
}

// public static void PrepareDraw(Fuse.DrawContext dc) [static] :1230
void DrawManager::PrepareDraw(::g::Fuse::DrawContext* dc)
{
    uPtr(dc)->CaptureRootbuffer();
    uDelegate* p = DrawManager::Prepared1_;

    if (::g::Uno::Delegate::op_Inequality(p, NULL))
        uPtr(p)->InvokeVoid(dc);
}

// public static generated void add_Prepared(Uno.Action<Fuse.DrawContext> value) [static] :1228
void DrawManager::add_Prepared(uDelegate* value)
{
    DrawManager::Prepared1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(DrawManager::Prepared1_, value), ::TYPES[10/*Uno.Action<Fuse.DrawContext>*/]);
}

// public static generated void remove_Prepared(Uno.Action<Fuse.DrawContext> value) [static] :1228
void DrawManager::remove_Prepared(uDelegate* value)
{
    DrawManager::Prepared1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(DrawManager::Prepared1_, value), ::TYPES[10/*Uno.Action<Fuse.DrawContext>*/]);
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\internal\$.uno
// ------------------------------------------------------------------------------------

// private struct MiniList<T>.Enumerator<T> :1259
// {
// public T get_Current() [adapter] :1275
static void MiniList__Enumerator__get_Current_ex(uObject* __this, uObject** __retval)
{
    MiniList__Enumerator__get_Current_fn((MiniList__Enumerator*)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

// public void Dispose() [adapter] :1282
static void MiniList__Enumerator__Dispose_ex(uObject* __this)
{
    MiniList__Enumerator__Dispose_fn((MiniList__Enumerator*)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public void Reset() [adapter] :1277
static void MiniList__Enumerator__Reset_ex(uObject* __this)
{
    MiniList__Enumerator__Reset_fn((MiniList__Enumerator*)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public bool MoveNext() [adapter] :1270
static void MiniList__Enumerator__MoveNext_ex(uObject* __this, bool* __retval)
{
    MiniList__Enumerator__MoveNext_fn((MiniList__Enumerator*)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

static void MiniList__Enumerator_build(uType* type)
{
    ::TYPES[11] = ::g::Fuse::Internal::MiniList_typeof();
    type->SetPrecalc(
        ::g::Fuse::Internal::MiniList_typeof()->MakeType(type->T(1), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(1), NULL), offsetof(MiniList__Enumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(MiniList__Enumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(MiniList__Enumerator_type, interface2));
    type->SetFields(0,
        ::TYPES[11/*Fuse.Internal.MiniList`1*/]->MakeType(type->T(1), NULL), offsetof(::g::Fuse::Internal::MiniList__Enumerator, _source), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Internal::MiniList__Enumerator, _index), 0);
}

MiniList__Enumerator_type* MiniList__Enumerator_typeof()
{
    static uSStrong<MiniList__Enumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.InterfaceCount = 3;
    options.PrecalcCount = 1;
    options.ValueSize = sizeof(MiniList__Enumerator);
    options.TypeSize = sizeof(MiniList__Enumerator_type);
    type = (MiniList__Enumerator_type*)uStructType::New("Fuse.Internal.MiniList`1.Enumerator`1", options);
    type->fp_build_ = MiniList__Enumerator_build;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))MiniList__Enumerator__get_Current_ex;
    type->interface1.fp_Dispose = MiniList__Enumerator__Dispose_ex;
    type->interface2.fp_Reset = MiniList__Enumerator__Reset_ex;
    type->interface2.fp_MoveNext = MiniList__Enumerator__MoveNext_ex;
    return type;
}

// public Enumerator(Fuse.Internal.MiniList<T> source) :1264
void MiniList__Enumerator__ctor__fn(MiniList__Enumerator* __this, uType* __type, ::g::Fuse::Internal::MiniList* source)
{
    __this->ctor_(__type, *source);
}

// public T get_Current() :1275
void MiniList__Enumerator__get_Current_fn(MiniList__Enumerator* __this, uType* __type, uObject** __retval)
{
    *__retval = __this->Current(__type);
}

// public void Dispose() :1282
void MiniList__Enumerator__Dispose_fn(MiniList__Enumerator* __this, uType* __type)
{
    __this->Dispose(__type);
}

// public bool MoveNext() :1270
void MiniList__Enumerator__MoveNext_fn(MiniList__Enumerator* __this, uType* __type, bool* __retval)
{
    *__retval = __this->MoveNext(__type);
}

// public Enumerator New(Fuse.Internal.MiniList<T> source) :1264
void MiniList__Enumerator__New1_fn(uType* __type, ::g::Fuse::Internal::MiniList* source, MiniList__Enumerator* __retval)
{
    *__retval = MiniList__Enumerator__New1(__type, *source);
}

// public void Reset() :1277
void MiniList__Enumerator__Reset_fn(MiniList__Enumerator* __this, uType* __type)
{
    __this->Reset(__type);
}

// public Enumerator(Fuse.Internal.MiniList<T> source) [instance] :1264
void MiniList__Enumerator::ctor_(uType* __type, ::g::Fuse::Internal::MiniList source)
{
    _source = source;
    _index = -1;
}

// public T get_Current() [instance] :1275
uObject* MiniList__Enumerator::Current(uType* __type)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Internal.MiniList<T>*/),
    };
    return (uObject*)_source.Item(__types[0], _index);
}

// public void Dispose() [instance] :1282
void MiniList__Enumerator::Dispose(uType* __type)
{
}

// public bool MoveNext() [instance] :1270
bool MiniList__Enumerator::MoveNext(uType* __type)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Internal.MiniList<T>*/),
    };
    return (++_index) < _source.Count(__types[0]);
}

// public void Reset() [instance] :1277
void MiniList__Enumerator::Reset(uType* __type)
{
    _index = -1;
}

// public Enumerator New(Fuse.Internal.MiniList<T> source) [static] :1264
MiniList__Enumerator MiniList__Enumerator__New1(uType* __type, ::g::Fuse::Internal::MiniList source)
{
    MiniList__Enumerator obj1;
    obj1.ctor_(__type, source);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\internal\$.uno
// ------------------------------------------------------------------------------------

// private struct AndroidSystemFont.Family :15
// {
static void AndroidSystemFont__Family_build(uType* type)
{
    ::TYPES[12] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Internal::AndroidSystemFont__FontDescriptor_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Internal::AndroidSystemFont__Family, Name), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Internal::AndroidSystemFont__Family, Language), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Internal::AndroidSystemFont__Family, Variant), 0,
        ::TYPES[12/*Uno.Collections.List<Fuse.Internal.AndroidSystemFont.FontDescriptor>*/], offsetof(::g::Fuse::Internal::AndroidSystemFont__Family, Fonts), 0);
}

uStructType* AndroidSystemFont__Family_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ValueSize = sizeof(AndroidSystemFont__Family);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Internal.AndroidSystemFont.Family", options);
    type->fp_build_ = AndroidSystemFont__Family_build;
    return type;
}

// public Family(string name, string language, string variant) :22
void AndroidSystemFont__Family__ctor__fn(AndroidSystemFont__Family* __this, uString* name, uString* language, uString* variant)
{
    __this->ctor_(name, language, variant);
}

// public Family New(string name, string language, string variant) :22
void AndroidSystemFont__Family__New1_fn(uString* name, uString* language, uString* variant, AndroidSystemFont__Family* __retval)
{
    *__retval = AndroidSystemFont__Family__New1(name, language, variant);
}

// public Family(string name, string language, string variant) [instance] :22
void AndroidSystemFont__Family::ctor_(uString* name, uString* language, uString* variant)
{
    Name = name;
    Language = language;
    Variant = variant;
    Fonts = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[12/*Uno.Collections.List<Fuse.Internal.AndroidSystemFont.FontDescriptor>*/]));
}

// public Family New(string name, string language, string variant) [static] :22
AndroidSystemFont__Family AndroidSystemFont__Family__New1(uString* name, uString* language, uString* variant)
{
    AndroidSystemFont__Family obj1;
    obj1.ctor_(name, language, variant);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\internal\$.uno
// ------------------------------------------------------------------------------------

// internal sealed class Float2Blender :408
// {
static void Float2Blender_build(uType* type)
{
    type->SetBase(::g::Fuse::Internal::Blender_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL));
}

::g::Fuse::Internal::Blender_type* Float2Blender_typeof()
{
    static uSStrong< ::g::Fuse::Internal::Blender_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Internal::Blender_typeof();
    options.ObjectSize = sizeof(Float2Blender);
    options.TypeSize = sizeof(::g::Fuse::Internal::Blender_type);
    type = (::g::Fuse::Internal::Blender_type*)uClassType::New("Fuse.Internal.Float2Blender", options);
    type->fp_build_ = Float2Blender_build;
    type->fp_ctor_ = (void*)Float2Blender__New1_fn;
    type->fp_Add = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))Float2Blender__Add_fn;
    type->fp_Length = (void(*)(::g::Fuse::Internal::Blender*, void*, double*))Float2Blender__Length_fn;
    type->fp_Lerp = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, double*, uTRef))Float2Blender__Lerp_fn;
    type->fp_Sub = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))Float2Blender__Sub_fn;
    type->fp_ToUnit = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))Float2Blender__ToUnit_fn;
    type->fp_Weight = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))Float2Blender__Weight_fn;
    type->fp_get_Zero = (void(*)(::g::Fuse::Internal::Blender*, uTRef))Float2Blender__get_Zero_fn;
    return type;
}

// public generated Float2Blender() :408
void Float2Blender__ctor_1_fn(Float2Blender* __this)
{
    __this->ctor_1();
}

// public override sealed float2 Add(float2 a, float2 b) :411
void Float2Blender__Add_fn(Float2Blender* __this, ::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 a_ = *a;
    ::g::Uno::Float2 b_ = *b;
    return *__retval = ::g::Uno::Float2__op_Addition2(a_, b_), void();
}

// public override sealed double Length(float2 a) :421
void Float2Blender__Length_fn(Float2Blender* __this, ::g::Uno::Float2* a, double* __retval)
{
    ::g::Uno::Float2 a_ = *a;
    return *__retval = (double)::g::Uno::Vector::Length(a_), void();
}

// public override sealed float2 Lerp(float2 a, float2 b, double d) :413
void Float2Blender__Lerp_fn(Float2Blender* __this, ::g::Uno::Float2* a, ::g::Uno::Float2* b, double* d, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 a_ = *a;
    ::g::Uno::Float2 b_ = *b;
    double d_ = *d;
    return *__retval = ::g::Uno::Math::Lerp2(a_, b_, (float)d_), void();
}

// public generated Float2Blender New() :408
void Float2Blender__New1_fn(Float2Blender** __retval)
{
    *__retval = Float2Blender::New1();
}

// public override sealed float2 Sub(float2 a, float2 b) :412
void Float2Blender__Sub_fn(Float2Blender* __this, ::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 a_ = *a;
    ::g::Uno::Float2 b_ = *b;
    return *__retval = ::g::Uno::Float2__op_Subtraction2(a_, b_), void();
}

// public override sealed float2 ToUnit(float2 a, double& length) :416
void Float2Blender__ToUnit_fn(Float2Blender* __this, ::g::Uno::Float2* a, double* length, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 a_ = *a;
    *length = (double)::g::Uno::Vector::Length(a_);
    return *__retval = ::g::Uno::Vector::Normalize(a_), void();
}

// public override sealed float2 Weight(float2 v, double w) :410
void Float2Blender__Weight_fn(Float2Blender* __this, ::g::Uno::Float2* v, double* w, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 v_ = *v;
    double w_ = *w;
    return *__retval = ::g::Uno::Float2__op_Multiply1(v_, (float)w_), void();
}

// public override sealed float2 get_Zero() :414
void Float2Blender__get_Zero_fn(Float2Blender* __this, ::g::Uno::Float2* __retval)
{
    return *__retval = ::g::Uno::Float2__New1(0.0f), void();
}

// public generated Float2Blender() [instance] :408
void Float2Blender::ctor_1()
{
    ctor_();
}

// public generated Float2Blender New() [static] :408
Float2Blender* Float2Blender::New1()
{
    Float2Blender* obj1 = (Float2Blender*)uNew(Float2Blender_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\internal\$.uno
// ------------------------------------------------------------------------------------

// internal sealed class Float3Blender :424
// {
static void Float3Blender_build(uType* type)
{
    type->SetBase(::g::Fuse::Internal::Blender_typeof()->MakeType(::g::Uno::Float3_typeof(), NULL));
}

::g::Fuse::Internal::Blender_type* Float3Blender_typeof()
{
    static uSStrong< ::g::Fuse::Internal::Blender_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Internal::Blender_typeof();
    options.ObjectSize = sizeof(Float3Blender);
    options.TypeSize = sizeof(::g::Fuse::Internal::Blender_type);
    type = (::g::Fuse::Internal::Blender_type*)uClassType::New("Fuse.Internal.Float3Blender", options);
    type->fp_build_ = Float3Blender_build;
    type->fp_ctor_ = (void*)Float3Blender__New1_fn;
    type->fp_Add = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))Float3Blender__Add_fn;
    type->fp_Length = (void(*)(::g::Fuse::Internal::Blender*, void*, double*))Float3Blender__Length_fn;
    type->fp_Lerp = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, double*, uTRef))Float3Blender__Lerp_fn;
    type->fp_Sub = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))Float3Blender__Sub_fn;
    type->fp_ToUnit = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))Float3Blender__ToUnit_fn;
    type->fp_Weight = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))Float3Blender__Weight_fn;
    type->fp_get_Zero = (void(*)(::g::Fuse::Internal::Blender*, uTRef))Float3Blender__get_Zero_fn;
    return type;
}

// public generated Float3Blender() :424
void Float3Blender__ctor_1_fn(Float3Blender* __this)
{
    __this->ctor_1();
}

// public override sealed float3 Add(float3 a, float3 b) :427
void Float3Blender__Add_fn(Float3Blender* __this, ::g::Uno::Float3* a, ::g::Uno::Float3* b, ::g::Uno::Float3* __retval)
{
    ::g::Uno::Float3 a_ = *a;
    ::g::Uno::Float3 b_ = *b;
    return *__retval = ::g::Uno::Float3__op_Addition2(a_, b_), void();
}

// public override sealed double Length(float3 a) :437
void Float3Blender__Length_fn(Float3Blender* __this, ::g::Uno::Float3* a, double* __retval)
{
    ::g::Uno::Float3 a_ = *a;
    return *__retval = (double)::g::Uno::Vector::Length1(a_), void();
}

// public override sealed float3 Lerp(float3 a, float3 b, double d) :429
void Float3Blender__Lerp_fn(Float3Blender* __this, ::g::Uno::Float3* a, ::g::Uno::Float3* b, double* d, ::g::Uno::Float3* __retval)
{
    ::g::Uno::Float3 a_ = *a;
    ::g::Uno::Float3 b_ = *b;
    double d_ = *d;
    return *__retval = ::g::Uno::Math::Lerp4(a_, b_, (float)d_), void();
}

// public generated Float3Blender New() :424
void Float3Blender__New1_fn(Float3Blender** __retval)
{
    *__retval = Float3Blender::New1();
}

// public override sealed float3 Sub(float3 a, float3 b) :428
void Float3Blender__Sub_fn(Float3Blender* __this, ::g::Uno::Float3* a, ::g::Uno::Float3* b, ::g::Uno::Float3* __retval)
{
    ::g::Uno::Float3 a_ = *a;
    ::g::Uno::Float3 b_ = *b;
    return *__retval = ::g::Uno::Float3__op_Subtraction2(a_, b_), void();
}

// public override sealed float3 ToUnit(float3 a, double& length) :432
void Float3Blender__ToUnit_fn(Float3Blender* __this, ::g::Uno::Float3* a, double* length, ::g::Uno::Float3* __retval)
{
    ::g::Uno::Float3 a_ = *a;
    *length = (double)::g::Uno::Vector::Length1(a_);
    return *__retval = ::g::Uno::Vector::Normalize1(a_), void();
}

// public override sealed float3 Weight(float3 v, double w) :426
void Float3Blender__Weight_fn(Float3Blender* __this, ::g::Uno::Float3* v, double* w, ::g::Uno::Float3* __retval)
{
    ::g::Uno::Float3 v_ = *v;
    double w_ = *w;
    return *__retval = ::g::Uno::Float3__op_Multiply1(v_, (float)w_), void();
}

// public override sealed float3 get_Zero() :430
void Float3Blender__get_Zero_fn(Float3Blender* __this, ::g::Uno::Float3* __retval)
{
    return *__retval = ::g::Uno::Float3__New1(0.0f), void();
}

// public generated Float3Blender() [instance] :424
void Float3Blender::ctor_1()
{
    ctor_();
}

// public generated Float3Blender New() [static] :424
Float3Blender* Float3Blender::New1()
{
    Float3Blender* obj1 = (Float3Blender*)uNew(Float3Blender_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\internal\$.uno
// ------------------------------------------------------------------------------------

// internal sealed class Float4Blender :440
// {
static void Float4Blender_build(uType* type)
{
    type->SetBase(::g::Fuse::Internal::Blender_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
}

::g::Fuse::Internal::Blender_type* Float4Blender_typeof()
{
    static uSStrong< ::g::Fuse::Internal::Blender_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Internal::Blender_typeof();
    options.ObjectSize = sizeof(Float4Blender);
    options.TypeSize = sizeof(::g::Fuse::Internal::Blender_type);
    type = (::g::Fuse::Internal::Blender_type*)uClassType::New("Fuse.Internal.Float4Blender", options);
    type->fp_build_ = Float4Blender_build;
    type->fp_ctor_ = (void*)Float4Blender__New1_fn;
    type->fp_Add = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))Float4Blender__Add_fn;
    type->fp_Length = (void(*)(::g::Fuse::Internal::Blender*, void*, double*))Float4Blender__Length_fn;
    type->fp_Lerp = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, double*, uTRef))Float4Blender__Lerp_fn;
    type->fp_Sub = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))Float4Blender__Sub_fn;
    type->fp_ToUnit = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))Float4Blender__ToUnit_fn;
    type->fp_Weight = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))Float4Blender__Weight_fn;
    type->fp_get_Zero = (void(*)(::g::Fuse::Internal::Blender*, uTRef))Float4Blender__get_Zero_fn;
    return type;
}

// public generated Float4Blender() :440
void Float4Blender__ctor_1_fn(Float4Blender* __this)
{
    __this->ctor_1();
}

// public override sealed float4 Add(float4 a, float4 b) :443
void Float4Blender__Add_fn(Float4Blender* __this, ::g::Uno::Float4* a, ::g::Uno::Float4* b, ::g::Uno::Float4* __retval)
{
    ::g::Uno::Float4 a_ = *a;
    ::g::Uno::Float4 b_ = *b;
    return *__retval = ::g::Uno::Float4__op_Addition2(a_, b_), void();
}

// public override sealed double Length(float4 a) :453
void Float4Blender__Length_fn(Float4Blender* __this, ::g::Uno::Float4* a, double* __retval)
{
    ::g::Uno::Float4 a_ = *a;
    return *__retval = (double)::g::Uno::Vector::Length2(a_), void();
}

// public override sealed float4 Lerp(float4 a, float4 b, double d) :445
void Float4Blender__Lerp_fn(Float4Blender* __this, ::g::Uno::Float4* a, ::g::Uno::Float4* b, double* d, ::g::Uno::Float4* __retval)
{
    ::g::Uno::Float4 a_ = *a;
    ::g::Uno::Float4 b_ = *b;
    double d_ = *d;
    return *__retval = ::g::Uno::Math::Lerp6(a_, b_, (float)d_), void();
}

// public generated Float4Blender New() :440
void Float4Blender__New1_fn(Float4Blender** __retval)
{
    *__retval = Float4Blender::New1();
}

// public override sealed float4 Sub(float4 a, float4 b) :444
void Float4Blender__Sub_fn(Float4Blender* __this, ::g::Uno::Float4* a, ::g::Uno::Float4* b, ::g::Uno::Float4* __retval)
{
    ::g::Uno::Float4 a_ = *a;
    ::g::Uno::Float4 b_ = *b;
    return *__retval = ::g::Uno::Float4__op_Subtraction2(a_, b_), void();
}

// public override sealed float4 ToUnit(float4 a, double& length) :448
void Float4Blender__ToUnit_fn(Float4Blender* __this, ::g::Uno::Float4* a, double* length, ::g::Uno::Float4* __retval)
{
    ::g::Uno::Float4 a_ = *a;
    *length = (double)::g::Uno::Vector::Length2(a_);
    return *__retval = ::g::Uno::Vector::Normalize2(a_), void();
}

// public override sealed float4 Weight(float4 v, double w) :442
void Float4Blender__Weight_fn(Float4Blender* __this, ::g::Uno::Float4* v, double* w, ::g::Uno::Float4* __retval)
{
    ::g::Uno::Float4 v_ = *v;
    double w_ = *w;
    return *__retval = ::g::Uno::Float4__op_Multiply1(v_, (float)w_), void();
}

// public override sealed float4 get_Zero() :446
void Float4Blender__get_Zero_fn(Float4Blender* __this, ::g::Uno::Float4* __retval)
{
    return *__retval = ::g::Uno::Float4__New1(0.0f), void();
}

// public generated Float4Blender() [instance] :440
void Float4Blender::ctor_1()
{
    ctor_();
}

// public generated Float4Blender New() [static] :440
Float4Blender* Float4Blender::New1()
{
    Float4Blender* obj1 = (Float4Blender*)uNew(Float4Blender_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\internal\$.uno
// ------------------------------------------------------------------------------------

// internal sealed class FloatBlender :372
// {
static void FloatBlender_build(uType* type)
{
    type->SetBase(::g::Fuse::Internal::ScalarBlender_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
}

::g::Fuse::Internal::ScalarBlender_type* FloatBlender_typeof()
{
    static uSStrong< ::g::Fuse::Internal::ScalarBlender_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Internal::ScalarBlender_typeof();
    options.ObjectSize = sizeof(FloatBlender);
    options.TypeSize = sizeof(::g::Fuse::Internal::ScalarBlender_type);
    type = (::g::Fuse::Internal::ScalarBlender_type*)uClassType::New("Fuse.Internal.FloatBlender", options);
    type->fp_build_ = FloatBlender_build;
    type->fp_ctor_ = (void*)FloatBlender__New1_fn;
    type->fp_Add = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))FloatBlender__Add_fn;
    type->fp_FromDouble = (void(*)(::g::Fuse::Internal::ScalarBlender*, double*, uTRef))FloatBlender__FromDouble_fn;
    type->fp_Length = (void(*)(::g::Fuse::Internal::Blender*, void*, double*))FloatBlender__Length_fn;
    type->fp_Lerp = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, double*, uTRef))FloatBlender__Lerp_fn;
    type->fp_Sub = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))FloatBlender__Sub_fn;
    type->fp_ToDouble = (void(*)(::g::Fuse::Internal::ScalarBlender*, void*, double*))FloatBlender__ToDouble_fn;
    type->fp_ToUnit = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))FloatBlender__ToUnit_fn;
    type->fp_Weight = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))FloatBlender__Weight_fn;
    type->fp_get_Zero = (void(*)(::g::Fuse::Internal::Blender*, uTRef))FloatBlender__get_Zero_fn;
    return type;
}

// public generated FloatBlender() :372
void FloatBlender__ctor_2_fn(FloatBlender* __this)
{
    __this->ctor_2();
}

// public override sealed float Add(float a, float b) :375
void FloatBlender__Add_fn(FloatBlender* __this, float* a, float* b, float* __retval)
{
    float a_ = *a;
    float b_ = *b;
    return *__retval = a_ + b_, void();
}

// public override sealed float FromDouble(double a) :387
void FloatBlender__FromDouble_fn(FloatBlender* __this, double* a, float* __retval)
{
    double a_ = *a;
    return *__retval = (float)a_, void();
}

// public override sealed double Length(float a) :385
void FloatBlender__Length_fn(FloatBlender* __this, float* a, double* __retval)
{
    float a_ = *a;
    return *__retval = (double)::g::Uno::Math::Abs1(a_), void();
}

// public override sealed float Lerp(float a, float b, double d) :377
void FloatBlender__Lerp_fn(FloatBlender* __this, float* a, float* b, double* d, float* __retval)
{
    float a_ = *a;
    float b_ = *b;
    double d_ = *d;
    return *__retval = a_ + ((b_ - a_) * (float)d_), void();
}

// public generated FloatBlender New() :372
void FloatBlender__New1_fn(FloatBlender** __retval)
{
    *__retval = FloatBlender::New1();
}

// public override sealed float Sub(float a, float b) :376
void FloatBlender__Sub_fn(FloatBlender* __this, float* a, float* b, float* __retval)
{
    float a_ = *a;
    float b_ = *b;
    return *__retval = a_ - b_, void();
}

// public override sealed double ToDouble(float a) :386
void FloatBlender__ToDouble_fn(FloatBlender* __this, float* a, double* __retval)
{
    float a_ = *a;
    return *__retval = (double)a_, void();
}

// public override sealed float ToUnit(float a, double& length) :380
void FloatBlender__ToUnit_fn(FloatBlender* __this, float* a, double* length, float* __retval)
{
    float a_ = *a;
    *length = (double)::g::Uno::Math::Abs1(a_);
    return *__retval = (float)((a_ < 0.0f) ? -1 : 1), void();
}

// public override sealed float Weight(float v, double w) :374
void FloatBlender__Weight_fn(FloatBlender* __this, float* v, double* w, float* __retval)
{
    float v_ = *v;
    double w_ = *w;
    return *__retval = v_ * (float)w_, void();
}

// public override sealed float get_Zero() :378
void FloatBlender__get_Zero_fn(FloatBlender* __this, float* __retval)
{
    return *__retval = 0.0f, void();
}

// public generated FloatBlender() [instance] :372
void FloatBlender::ctor_2()
{
    ctor_1();
}

// public generated FloatBlender New() [static] :372
FloatBlender* FloatBlender::New1()
{
    FloatBlender* obj1 = (FloatBlender*)uNew(FloatBlender_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\internal\$.uno
// ------------------------------------------------------------------------------------

// private struct AndroidSystemFont.FontDescriptor :31
// {
static void AndroidSystemFont__FontDescriptor_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Internal::AndroidSystemFont__FontDescriptor, FilePath), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Internal::AndroidSystemFont__FontDescriptor, Index), 0,
        ::g::Fuse::SystemFont__Style_typeof(), offsetof(::g::Fuse::Internal::AndroidSystemFont__FontDescriptor, Style), 0,
        ::g::Fuse::SystemFont__Weight_typeof(), offsetof(::g::Fuse::Internal::AndroidSystemFont__FontDescriptor, Weight), 0);
}

uStructType* AndroidSystemFont__FontDescriptor_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ValueSize = sizeof(AndroidSystemFont__FontDescriptor);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Internal.AndroidSystemFont.FontDescriptor", options);
    type->fp_build_ = AndroidSystemFont__FontDescriptor_build;
    return type;
}

// public FontDescriptor(string filePath, int index, Fuse.SystemFont.Style style, Fuse.SystemFont.Weight weight) :38
void AndroidSystemFont__FontDescriptor__ctor__fn(AndroidSystemFont__FontDescriptor* __this, uString* filePath, int* index, int* style, int* weight)
{
    __this->ctor_(filePath, *index, *style, *weight);
}

// public FontDescriptor New(string filePath, int index, Fuse.SystemFont.Style style, Fuse.SystemFont.Weight weight) :38
void AndroidSystemFont__FontDescriptor__New1_fn(uString* filePath, int* index, int* style, int* weight, AndroidSystemFont__FontDescriptor* __retval)
{
    *__retval = AndroidSystemFont__FontDescriptor__New1(filePath, *index, *style, *weight);
}

// public FontDescriptor(string filePath, int index, Fuse.SystemFont.Style style, Fuse.SystemFont.Weight weight) [instance] :38
void AndroidSystemFont__FontDescriptor::ctor_(uString* filePath, int index, int style, int weight)
{
    FilePath = filePath;
    Index = index;
    Style = style;
    Weight = weight;
}

// public FontDescriptor New(string filePath, int index, Fuse.SystemFont.Style style, Fuse.SystemFont.Weight weight) [static] :38
AndroidSystemFont__FontDescriptor AndroidSystemFont__FontDescriptor__New1(uString* filePath, int index, int style, int weight)
{
    AndroidSystemFont__FontDescriptor obj1;
    obj1.ctor_(filePath, index, style, weight);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\internal\$.uno
// ------------------------------------------------------------------------------------

// internal sealed class FontFaceDescriptor :1572
// {
static void FontFaceDescriptor_build(uType* type)
{
    ::TYPES[13] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[14] = ::g::Uno::String_typeof()->Array();
    ::TYPES[15] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(6/*SequenceEqual<string>*/, ::g::Uno::String_typeof(), NULL);
    ::TYPES[16] = ::g::Uno::Int_typeof();
    ::TYPES[17] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[18] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[19] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::UX::FileSource_typeof(), offsetof(::g::Fuse::Internal::FontFaceDescriptor, FileSource), 0,
        ::TYPES[16/*int*/], offsetof(::g::Fuse::Internal::FontFaceDescriptor, Index), 0,
        ::TYPES[17/*Uno.Collections.IEnumerable<string>*/], offsetof(::g::Fuse::Internal::FontFaceDescriptor, Styles), 0);
}

uType* FontFaceDescriptor_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FontFaceDescriptor);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Internal.FontFaceDescriptor", options);
    type->fp_build_ = FontFaceDescriptor_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))FontFaceDescriptor__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))FontFaceDescriptor__GetHashCode_fn;
    return type;
}

// public FontFaceDescriptor(Uno.UX.FileSource fileSource, int index) :1587
void FontFaceDescriptor__ctor__fn(FontFaceDescriptor* __this, ::g::Uno::UX::FileSource* fileSource, int* index)
{
    __this->ctor_(fileSource, *index);
}

// public override sealed bool Equals(object o) :1599
void FontFaceDescriptor__Equals_fn(FontFaceDescriptor* __this, uObject* o, bool* __retval)
{
    FontFaceDescriptor* f = uAs<FontFaceDescriptor*>(o, __this->__type);
    return *__retval = (((f != NULL) && ::g::Uno::String::op_Equality(uPtr(__this->FileSource)->Name, uPtr(uPtr(f)->FileSource)->Name)) && (__this->Index == uPtr(f)->Index)) && ::g::Uno::Collections::EnumerableExtensions::SequenceEqual(::TYPES[15/*Uno.Collections.EnumerableExtensions.SequenceEqual<string>*/], __this->Styles, uPtr(f)->Styles), void();
}

// public override sealed int GetHashCode() :1608
void FontFaceDescriptor__GetHashCode_fn(FontFaceDescriptor* __this, int* __retval)
{
    int ind1;
    uString* ret5;
    int hash = 17;
    hash = (hash * 23) + uPtr(uPtr(__this->FileSource)->Name)->GetHashCode();
    hash = (hash * 23) + ::g::Uno::Int::GetHashCode((ind1 = __this->Index, ind1), ::TYPES[16/*int*/]);

    for (uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(__this->Styles), ::TYPES[17/*Uno.Collections.IEnumerable<string>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::TYPES[18/*Uno.Collections.IEnumerator*/])); )
    {
        uString* s = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[19/*Uno.Collections.IEnumerator<string>*/]), &ret5), ret5);
        hash = (hash * 23) + uPtr(s)->GetHashCode();
    }

    return *__retval = hash, void();
}

// public FontFaceDescriptor New(Uno.UX.FileSource fileSource, int index) :1587
void FontFaceDescriptor__New1_fn(::g::Uno::UX::FileSource* fileSource, int* index, FontFaceDescriptor** __retval)
{
    *__retval = FontFaceDescriptor::New1(fileSource, *index);
}

// public FontFaceDescriptor(Uno.UX.FileSource fileSource, int index) [instance] :1587
void FontFaceDescriptor::ctor_(::g::Uno::UX::FileSource* fileSource, int index)
{
    FileSource = fileSource;
    Index = index;
    Styles = (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[13/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<string>*/], uArray::New(::TYPES[14/*string[]*/], 0)));
}

// public FontFaceDescriptor New(Uno.UX.FileSource fileSource, int index) [static] :1587
FontFaceDescriptor* FontFaceDescriptor::New1(::g::Uno::UX::FileSource* fileSource, int index)
{
    FontFaceDescriptor* obj4 = (FontFaceDescriptor*)uNew(FontFaceDescriptor_typeof());
    obj4->ctor_(fileSource, index);
    return obj4;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\internal\$.uno
// ------------------------------------------------------------------------------------

// internal static class FrustumMatrix :956
// {
static void FrustumMatrix_build(uType* type)
{
}

uClassType* FrustumMatrix_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Internal.FrustumMatrix", options);
    type->fp_build_ = FrustumMatrix_build;
    return type;
}

// public static float4x4 OrthoLH(float width, float height, float near, float far) :958
void FrustumMatrix__OrthoLH_fn(float* width, float* height, float* near, float* far, ::g::Uno::Float4x4* __retval)
{
    *__retval = FrustumMatrix::OrthoLH(*width, *height, *near, *far);
}

// public static float4x4 OrthoLHInverse(float width, float height, float near, float far) :986
void FrustumMatrix__OrthoLHInverse_fn(float* width, float* height, float* near, float* far, ::g::Uno::Float4x4* __retval)
{
    *__retval = FrustumMatrix::OrthoLHInverse(*width, *height, *near, *far);
}

// public static float4x4 OrthoRH(float width, float height, float zNear, float zFar) :979
void FrustumMatrix__OrthoRH_fn(float* width, float* height, float* zNear, float* zFar, ::g::Uno::Float4x4* __retval)
{
    *__retval = FrustumMatrix::OrthoRH(*width, *height, *zNear, *zFar);
}

// public static float4x4 OrthoRHInverse(float width, float height, float zNear, float zFar) :1008
void FrustumMatrix__OrthoRHInverse_fn(float* width, float* height, float* zNear, float* zFar, ::g::Uno::Float4x4* __retval)
{
    *__retval = FrustumMatrix::OrthoRHInverse(*width, *height, *zNear, *zFar);
}

// public static float4x4 OrthoLH(float width, float height, float near, float far) [static] :958
::g::Uno::Float4x4 FrustumMatrix::OrthoLH(float width, float height, float near, float far)
{
    float halfWidth = width * 0.5f;
    float halfHeight = height * 0.5f;
    float left = -halfWidth;
    float right = halfWidth;
    float bottom = -halfHeight;
    float top = halfHeight;
    ::g::Uno::Float4x4 result = ::g::Uno::Float4x4__Identity();
    result.M11 = (2.0f / (right - left));
    result.M22 = (2.0f / (top - bottom));
    result.M33 = (-2.0f / (far - near));
    result.M41 = (-(right + left) / (right - left));
    result.M42 = (-(top + bottom) / (top - bottom));
    result.M43 = ((far + near) / (far - near));
    return result;
}

// public static float4x4 OrthoLHInverse(float width, float height, float near, float far) [static] :986
::g::Uno::Float4x4 FrustumMatrix::OrthoLHInverse(float width, float height, float near, float far)
{
    float halfWidth = width * 0.5f;
    float halfHeight = height * 0.5f;
    ::g::Uno::Float4x4 result = ::g::Uno::Float4x4__Identity();
    result.M11 = halfWidth;
    result.M22 = halfHeight;
    result.M33 = (-(far - near) / 2.0f);
    result.M43 = ((near + far) / 2.0f);
    return result;
}

// public static float4x4 OrthoRH(float width, float height, float zNear, float zFar) [static] :979
::g::Uno::Float4x4 FrustumMatrix::OrthoRH(float width, float height, float zNear, float zFar)
{
    ::g::Uno::Float4x4 result = FrustumMatrix::OrthoLH(width, height, zNear, zFar);
    result.M33 = (result.M33 * -1.0f);
    return result;
}

// public static float4x4 OrthoRHInverse(float width, float height, float zNear, float zFar) [static] :1008
::g::Uno::Float4x4 FrustumMatrix::OrthoRHInverse(float width, float height, float zNear, float zFar)
{
    ::g::Uno::Float4x4 result = FrustumMatrix::OrthoLHInverse(width, height, zNear, zFar);
    result.M33 = (result.M33 * -1.0f);
    result.M43 = (result.M43 * -1.0f);
    return result;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Elements\0.43.11\internal\$.uno
// -----------------------------------------------------------------------------------------

// internal abstract interface IImageContainerOwner :14
// {
uInterfaceType* IImageContainerOwner_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Internal.IImageContainerOwner", 0, 0);
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Elements\0.43.11\internal\$.uno
// -----------------------------------------------------------------------------------------

// internal sealed class ImageContainer :21
// {
static void ImageContainer_build(uType* type)
{
    ::STRINGS[1] = uString::Const("ResampleMode.Mipmap has been deprecated. Use ResampleMode.Linear instead.");
    ::STRINGS[2] = uString::Const("C:\\Users\\Emenike pc\\AppData\\Local\\Fusetools\\Packages\\Fuse.Elements\\0.43.11\\internal\\$.uno");
    ::STRINGS[3] = uString::Const("set_ResampleMode");
    ::TYPES[18] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[20] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL);
    ::TYPES[21] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof(), NULL);
    ::TYPES[22] = ::g::Fuse::Internal::IImageContainerOwner_typeof();
    ::TYPES[23] = ::g::Fuse::Resources::FileImageSource_typeof();
    ::TYPES[24] = ::g::Fuse::Resources::HttpImageSource_typeof();
    ::TYPES[25] = ::g::Fuse::Resources::MultiDensityImageSource_typeof();
    ::TYPES[26] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof(), NULL);
    ::TYPES[27] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof(), NULL);
    ::TYPES[28] = ::g::Uno::EventHandler_typeof();
    ::TYPES[29] = ::g::Fuse::Resources::ImageSourceErrorHandler_typeof();
    ::TYPES[30] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL);
    ::TYPES[31] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL);
    ::TYPES[32] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Internal::ImageContainer, _density), 0,
        ::TYPES[31/*Uno.Collections.ObservableList<Uno.UX.FileSource>*/], offsetof(::g::Fuse::Internal::ImageContainer, _files), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Internal::ImageContainer, _isRooted), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Internal::ImageContainer, _isVisible), 0,
        ::g::Fuse::Resources::MemoryPolicy_typeof(), offsetof(::g::Fuse::Internal::ImageContainer, _memoryPolicy), 0,
        ::TYPES[22/*Fuse.Internal.IImageContainerOwner*/], offsetof(::g::Fuse::Internal::ImageContainer, _owner), uFieldFlagsWeak,
        ::g::Fuse::Drawing::ResampleMode_typeof(), offsetof(::g::Fuse::Internal::ImageContainer, _resampleMode), 0,
        ::g::Fuse::Resources::ImageSource_typeof(), offsetof(::g::Fuse::Internal::ImageContainer, _source), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Internal::ImageContainer, _sourcePinned), 0,
        ::g::Fuse::Internal::SizingContainer_typeof(), offsetof(::g::Fuse::Internal::ImageContainer, Sizing), 0,
        ::TYPES[28/*Uno.EventHandler*/], offsetof(::g::Fuse::Internal::ImageContainer, ParamChanged1), 0,
        ::TYPES[28/*Uno.EventHandler*/], offsetof(::g::Fuse::Internal::ImageContainer, SourceChanged1), 0,
        ::TYPES[29/*Fuse.Resources.ImageSourceErrorHandler*/], offsetof(::g::Fuse::Internal::ImageContainer, SourceError1), 0);
}

uType* ImageContainer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 13;
    options.ObjectSize = sizeof(ImageContainer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Internal.ImageContainer", options);
    type->fp_build_ = ImageContainer_build;
    return type;
}

// public ImageContainer([Fuse.Internal.IImageContainerOwner owner]) :26
void ImageContainer__ctor__fn(ImageContainer* __this, uObject* owner)
{
    __this->ctor_(owner);
}

// private void CheckPinning() :227
void ImageContainer__CheckPinning_fn(ImageContainer* __this)
{
    __this->CheckPinning();
}

// private void CreateMultiDensitySource() :149
void ImageContainer__CreateMultiDensitySource_fn(ImageContainer* __this)
{
    __this->CreateMultiDensitySource();
}

// public float get_Density() :68
void ImageContainer__get_Density_fn(ImageContainer* __this, float* __retval)
{
    *__retval = __this->Density();
}

// public void set_Density(float value) :69
void ImageContainer__set_Density_fn(ImageContainer* __this, float* value)
{
    __this->Density(*value);
}

// public Uno.UX.FileSource get_File() :35
void ImageContainer__get_File_fn(ImageContainer* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public void set_File(Uno.UX.FileSource value) :40
void ImageContainer__set_File_fn(ImageContainer* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// public Uno.Collections.IList<Uno.UX.FileSource> get_Files() :114
void ImageContainer__get_Files_fn(ImageContainer* __this, uObject** __retval)
{
    *__retval = __this->Files();
}

// public texture2D GetTexture() :318
void ImageContainer__GetTexture_fn(ImageContainer* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    *__retval = __this->GetTexture();
}

// public bool get_IsRooted() :215
void ImageContainer__get_IsRooted_fn(ImageContainer* __this, bool* __retval)
{
    *__retval = __this->IsRooted();
}

// public void set_IsRooted(bool value) :216
void ImageContainer__set_IsRooted_fn(ImageContainer* __this, bool* value)
{
    __this->IsRooted(*value);
}

// public bool get_IsVisible() :328
void ImageContainer__get_IsVisible_fn(ImageContainer* __this, bool* __retval)
{
    *__retval = __this->IsVisible();
}

// public void set_IsVisible(bool value) :329
void ImageContainer__set_IsVisible_fn(ImageContainer* __this, bool* value)
{
    __this->IsVisible(*value);
}

// public Fuse.Resources.MemoryPolicy get_MemoryPolicy() :84
void ImageContainer__get_MemoryPolicy_fn(ImageContainer* __this, ::g::Fuse::Resources::MemoryPolicy** __retval)
{
    *__retval = __this->MemoryPolicy();
}

// public void set_MemoryPolicy(Fuse.Resources.MemoryPolicy value) :85
void ImageContainer__set_MemoryPolicy_fn(ImageContainer* __this, ::g::Fuse::Resources::MemoryPolicy* value)
{
    __this->MemoryPolicy(value);
}

// public ImageContainer New([Fuse.Internal.IImageContainerOwner owner]) :26
void ImageContainer__New1_fn(uObject* owner, ImageContainer** __retval)
{
    *__retval = ImageContainer::New1(owner);
}

// private void OnFileAdded(Uno.UX.FileSource file) :121
void ImageContainer__OnFileAdded_fn(ImageContainer* __this, ::g::Uno::UX::FileSource* file)
{
    __this->OnFileAdded(file);
}

// private void OnFileRemoved(Uno.UX.FileSource file) :133
void ImageContainer__OnFileRemoved_fn(ImageContainer* __this, ::g::Uno::UX::FileSource* file)
{
    __this->OnFileRemoved(file);
}

// private void OnParamChanged() :263
void ImageContainer__OnParamChanged_fn(ImageContainer* __this)
{
    __this->OnParamChanged();
}

// private void OnSizingChanged() :281
void ImageContainer__OnSizingChanged_fn(ImageContainer* __this)
{
    __this->OnSizingChanged();
}

// private void OnSourceChanged(object s, object a) :181
void ImageContainer__OnSourceChanged_fn(ImageContainer* __this, uObject* s, uObject* a)
{
    __this->OnSourceChanged(s, a);
}

// private void OnSourceError(object s, Fuse.Resources.ImageSourceErrorArgs args) :191
void ImageContainer__OnSourceError_fn(ImageContainer* __this, uObject* s, ::g::Fuse::Resources::ImageSourceErrorArgs* args)
{
    __this->OnSourceError(s, args);
}

// public generated void add_ParamChanged(Uno.EventHandler value) :262
void ImageContainer__add_ParamChanged_fn(ImageContainer* __this, uDelegate* value)
{
    __this->add_ParamChanged(value);
}

// public generated void remove_ParamChanged(Uno.EventHandler value) :262
void ImageContainer__remove_ParamChanged_fn(ImageContainer* __this, uDelegate* value)
{
    __this->remove_ParamChanged(value);
}

// private void ReapplyOptions(Fuse.Resources.ImageSource src) :93
void ImageContainer__ReapplyOptions_fn(ImageContainer* __this, ::g::Fuse::Resources::ImageSource* src)
{
    __this->ReapplyOptions(src);
}

// private void ReleaseSource() :197
void ImageContainer__ReleaseSource_fn(ImageContainer* __this)
{
    __this->ReleaseSource();
}

// public Fuse.Drawing.ResampleMode get_ResampleMode() :249
void ImageContainer__get_ResampleMode_fn(ImageContainer* __this, int* __retval)
{
    *__retval = __this->ResampleMode();
}

// public void set_ResampleMode(Fuse.Drawing.ResampleMode value) :250
void ImageContainer__set_ResampleMode_fn(ImageContainer* __this, int* value)
{
    __this->ResampleMode(*value);
}

// public Fuse.Resources.ImageSource get_Source() :163
void ImageContainer__get_Source_fn(ImageContainer* __this, ::g::Fuse::Resources::ImageSource** __retval)
{
    *__retval = __this->Source();
}

// public void set_Source(Fuse.Resources.ImageSource value) :164
void ImageContainer__set_Source_fn(ImageContainer* __this, ::g::Fuse::Resources::ImageSource* value)
{
    __this->Source(value);
}

// public generated void add_SourceChanged(Uno.EventHandler value) :180
void ImageContainer__add_SourceChanged_fn(ImageContainer* __this, uDelegate* value)
{
    __this->add_SourceChanged(value);
}

// public generated void remove_SourceChanged(Uno.EventHandler value) :180
void ImageContainer__remove_SourceChanged_fn(ImageContainer* __this, uDelegate* value)
{
    __this->remove_SourceChanged(value);
}

// public generated void add_SourceError(Fuse.Resources.ImageSourceErrorHandler value) :190
void ImageContainer__add_SourceError_fn(ImageContainer* __this, uDelegate* value)
{
    __this->add_SourceError(value);
}

// public generated void remove_SourceError(Fuse.Resources.ImageSourceErrorHandler value) :190
void ImageContainer__remove_SourceError_fn(ImageContainer* __this, uDelegate* value)
{
    __this->remove_SourceError(value);
}

// public Fuse.Elements.StretchMode get_StretchMode() :273
void ImageContainer__get_StretchMode_fn(ImageContainer* __this, int* __retval)
{
    *__retval = __this->StretchMode();
}

// public void set_StretchMode(Fuse.Elements.StretchMode value) :274
void ImageContainer__set_StretchMode_fn(ImageContainer* __this, int* value)
{
    __this->StretchMode(*value);
}

// public ImageContainer([Fuse.Internal.IImageContainerOwner owner]) [instance] :26
void ImageContainer::ctor_(uObject* owner)
{
    Sizing = ::g::Fuse::Internal::SizingContainer::New1();
    _density = 1.0f;
    _memoryPolicy = ::g::Fuse::Resources::MemoryPolicy::PreloadRetain();
    _resampleMode = 1;
    _isVisible = true;
    _owner = owner;
}

// private void CheckPinning() [instance] :227
void ImageContainer::CheckPinning()
{
    if (_source == NULL)
        return;

    bool on = _isRooted;

    if (uPtr(MemoryPolicy())->UnpinInvisible() && !_isVisible)
        on = false;

    if (on != _sourcePinned)
    {
        if (on)
            uPtr(_source)->Pin();
        else
            uPtr(_source)->Unpin();

        _sourcePinned = on;
    }
}

// private void CreateMultiDensitySource() [instance] :149
void ImageContainer::CreateMultiDensitySource()
{
    ::g::Fuse::Resources::FileImageSource* collection6;
    float ind11;
    ::g::Fuse::Resources::MemoryPolicy* ind12;
    ::g::Uno::UX::FileSource* ret16;
    ::g::Fuse::Resources::MultiDensityImageSource* s = ::g::Fuse::Resources::MultiDensityImageSource::New2();

    for (uObject* enum5 = (uObject*)uPtr(_files)->GetEnumerator(); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum5), ::TYPES[18/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Uno::UX::FileSource* f = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum5), ::TYPES[20/*Uno.Collections.IEnumerator<Uno.UX.FileSource>*/]), &ret16), ret16);
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(s)->Sources()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Resources.ImageSource>*/]), (collection6 = ::g::Fuse::Resources::FileImageSource::New3(f), ind11 = Density(), uPtr(collection6)->Density(ind11), ind11, ind12 = MemoryPolicy(), uPtr(collection6)->DefaultPolicy(ind12), ind12, collection6));
    }

    Source(s);
}

// public float get_Density() [instance] :68
float ImageContainer::Density()
{
    return _density;
}

// public void set_Density(float value) [instance] :69
void ImageContainer::Density(float value)
{
    if (_density != value)
    {
        _density = value;
        OnParamChanged();
    }
}

// public Uno.UX.FileSource get_File() [instance] :35
::g::Uno::UX::FileSource* ImageContainer::File()
{
    ::g::Uno::UX::FileSource* ret18;

    if (_files == NULL)
        return NULL;
    else
        return (::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(_files), uCRef<int>(0), &ret18), ret18);
}

// public void set_File(Uno.UX.FileSource value) [instance] :40
void ImageContainer::File(::g::Uno::UX::FileSource* value)
{
    ::g::Uno::UX::FileSource* ret19;

    if ((((_files == NULL) || (uPtr(_files)->Count() == 0)) || (uPtr(_files)->Count() > 1)) || ((::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(_files), uCRef<int>(0), &ret19), ret19) != value))
    {
        _files = NULL;
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Files()), ::TYPES[30/*Uno.Collections.ICollection<Uno.UX.FileSource>*/]), value);
    }
}

// public Uno.Collections.IList<Uno.UX.FileSource> get_Files() [instance] :114
uObject* ImageContainer::Files()
{
    if (_files == NULL)
        _files = ((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[31/*Uno.Collections.ObservableList<Uno.UX.FileSource>*/], uDelegate::New(::TYPES[32/*Uno.Action<Uno.UX.FileSource>*/], (void*)ImageContainer__OnFileAdded_fn, this), uDelegate::New(::TYPES[32/*Uno.Action<Uno.UX.FileSource>*/], (void*)ImageContainer__OnFileRemoved_fn, this)));

    return (uObject*)_files;
}

// public texture2D GetTexture() [instance] :318
::g::Uno::Graphics::Texture2D* ImageContainer::GetTexture()
{
    if (Source() != NULL)
        return uPtr(Source())->GetTexture();

    return NULL;
}

// public bool get_IsRooted() [instance] :215
bool ImageContainer::IsRooted()
{
    return _isRooted;
}

// public void set_IsRooted(bool value) [instance] :216
void ImageContainer::IsRooted(bool value)
{
    _isRooted = value;
    CheckPinning();
}

// public bool get_IsVisible() [instance] :328
bool ImageContainer::IsVisible()
{
    return _isVisible;
}

// public void set_IsVisible(bool value) [instance] :329
void ImageContainer::IsVisible(bool value)
{
    if (_isVisible != value)
    {
        _isVisible = value;
        CheckPinning();
    }
}

// public Fuse.Resources.MemoryPolicy get_MemoryPolicy() [instance] :84
::g::Fuse::Resources::MemoryPolicy* ImageContainer::MemoryPolicy()
{
    return _memoryPolicy;
}

// public void set_MemoryPolicy(Fuse.Resources.MemoryPolicy value) [instance] :85
void ImageContainer::MemoryPolicy(::g::Fuse::Resources::MemoryPolicy* value)
{
    _memoryPolicy = value;
    ReapplyOptions(Source());
    CheckPinning();
}

// private void OnFileAdded(Uno.UX.FileSource file) [instance] :121
void ImageContainer::OnFileAdded(::g::Uno::UX::FileSource* file)
{
    ::g::Fuse::Resources::FileImageSource* collection3;
    float ind7;
    ::g::Fuse::Resources::MemoryPolicy* ind8;

    if (uPtr(_files)->Count() == 1)
        Source((collection3 = ::g::Fuse::Resources::FileImageSource::New2(), ind7 = Density(), uPtr(collection3)->Density(ind7), ind7, uPtr(collection3)->File(file), file, ind8 = MemoryPolicy(), uPtr(collection3)->DefaultPolicy(ind8), ind8, collection3));
    else
        CreateMultiDensitySource();
}

// private void OnFileRemoved(Uno.UX.FileSource file) [instance] :133
void ImageContainer::OnFileRemoved(::g::Uno::UX::FileSource* file)
{
    ::g::Fuse::Resources::FileImageSource* collection4;
    float ind9;
    ::g::Fuse::Resources::MemoryPolicy* ind10;

    if (uPtr(_files)->Count() == 0)
        Source(NULL);
    else if (uPtr(_files)->Count() == 1)
        Source((collection4 = ::g::Fuse::Resources::FileImageSource::New2(), ind9 = Density(), uPtr(collection4)->Density(ind9), ind9, uPtr(collection4)->File(file), file, ind10 = MemoryPolicy(), uPtr(collection4)->DefaultPolicy(ind10), ind10, collection4));
    else
        CreateMultiDensitySource();
}

// private void OnParamChanged() [instance] :263
void ImageContainer::OnParamChanged()
{
    if (::g::Uno::Delegate::op_Inequality(ParamChanged1, NULL))
        uPtr(ParamChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());

    if (_owner != NULL)
        ::g::Fuse::Internal::IImageContainerOwner::OnParamChanged(uInterface(uPtr(_owner), ::TYPES[22/*Fuse.Internal.IImageContainerOwner*/]));
}

// private void OnSizingChanged() [instance] :281
void ImageContainer::OnSizingChanged()
{
    OnParamChanged();

    if (_owner != NULL)
        ::g::Fuse::Internal::IImageContainerOwner::OnSizingChanged(uInterface(uPtr(_owner), ::TYPES[22/*Fuse.Internal.IImageContainerOwner*/]));
}

// private void OnSourceChanged(object s, object a) [instance] :181
void ImageContainer::OnSourceChanged(uObject* s, uObject* a)
{
    CheckPinning();

    if (::g::Uno::Delegate::op_Inequality(SourceChanged1, NULL))
        uPtr(SourceChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());

    if (_owner != NULL)
        ::g::Fuse::Internal::IImageContainerOwner::OnSourceChanged(uInterface(uPtr(_owner), ::TYPES[22/*Fuse.Internal.IImageContainerOwner*/]));
}

// private void OnSourceError(object s, Fuse.Resources.ImageSourceErrorArgs args) [instance] :191
void ImageContainer::OnSourceError(uObject* s, ::g::Fuse::Resources::ImageSourceErrorArgs* args)
{
    if (::g::Uno::Delegate::op_Inequality(SourceError1, NULL))
        uPtr(SourceError1)->Invoke(2, this, args);
}

// public generated void add_ParamChanged(Uno.EventHandler value) [instance] :262
void ImageContainer::add_ParamChanged(uDelegate* value)
{
    ParamChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ParamChanged1, value), ::TYPES[28/*Uno.EventHandler*/]);
}

// public generated void remove_ParamChanged(Uno.EventHandler value) [instance] :262
void ImageContainer::remove_ParamChanged(uDelegate* value)
{
    ParamChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ParamChanged1, value), ::TYPES[28/*Uno.EventHandler*/]);
}

// private void ReapplyOptions(Fuse.Resources.ImageSource src) [instance] :93
void ImageContainer::ReapplyOptions(::g::Fuse::Resources::ImageSource* src)
{
    ::g::Fuse::Resources::ImageSource* ret17;
    ::g::Fuse::Resources::FileImageSource* f = uAs< ::g::Fuse::Resources::FileImageSource*>(src, ::TYPES[23/*Fuse.Resources.FileImageSource*/]);

    if ((f != NULL) && (MemoryPolicy() != NULL))
        uPtr(f)->DefaultPolicy(MemoryPolicy());

    ::g::Fuse::Resources::HttpImageSource* hf = uAs< ::g::Fuse::Resources::HttpImageSource*>(src, ::TYPES[24/*Fuse.Resources.HttpImageSource*/]);

    if ((hf != NULL) && (MemoryPolicy() != NULL))
        uPtr(hf)->DefaultPolicy(MemoryPolicy());

    ::g::Fuse::Resources::MultiDensityImageSource* mf = uAs< ::g::Fuse::Resources::MultiDensityImageSource*>(Source(), ::TYPES[25/*Fuse.Resources.MultiDensityImageSource*/]);

    if (mf != NULL)

        for (uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(mf)->Sources()), ::TYPES[26/*Uno.Collections.IEnumerable<Fuse.Resources.ImageSource>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::TYPES[18/*Uno.Collections.IEnumerator*/])); )
        {
            ::g::Fuse::Resources::ImageSource* s = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[27/*Uno.Collections.IEnumerator<Fuse.Resources.ImageSource>*/]), &ret17), ret17);
            ReapplyOptions(s);
        }
}

// private void ReleaseSource() [instance] :197
void ImageContainer::ReleaseSource()
{
    if (_source == NULL)
        return;

    uPtr(_source)->remove_Changed(uDelegate::New(::TYPES[28/*Uno.EventHandler*/], (void*)ImageContainer__OnSourceChanged_fn, this));
    uPtr(_source)->remove_Error(uDelegate::New(::TYPES[29/*Fuse.Resources.ImageSourceErrorHandler*/], (void*)ImageContainer__OnSourceError_fn, this));

    if (_sourcePinned)
    {
        uPtr(_source)->Unpin();
        _sourcePinned = false;
    }

    _source = NULL;
}

// public Fuse.Drawing.ResampleMode get_ResampleMode() [instance] :249
int ImageContainer::ResampleMode()
{
    return _resampleMode;
}

// public void set_ResampleMode(Fuse.Drawing.ResampleMode value) [instance] :250
void ImageContainer::ResampleMode(int value)
{
    if (_resampleMode != value)
    {
        if (value == 2)
            ::g::Fuse::Diagnostics::Deprecated(::STRINGS[1/*"ResampleMod...*/], this, ::STRINGS[2/*"C:\\Users\\...*/], 255, ::STRINGS[3/*"set_Resampl...*/]);

        _resampleMode = value;
        OnParamChanged();
    }
}

// public Fuse.Resources.ImageSource get_Source() [instance] :163
::g::Fuse::Resources::ImageSource* ImageContainer::Source()
{
    return _source;
}

// public void set_Source(Fuse.Resources.ImageSource value) [instance] :164
void ImageContainer::Source(::g::Fuse::Resources::ImageSource* value)
{
    if (_source != value)
    {
        ReleaseSource();
        _source = value;

        if (_source != NULL)
        {
            uPtr(_source)->add_Changed(uDelegate::New(::TYPES[28/*Uno.EventHandler*/], (void*)ImageContainer__OnSourceChanged_fn, this));
            uPtr(_source)->add_Error(uDelegate::New(::TYPES[29/*Fuse.Resources.ImageSourceErrorHandler*/], (void*)ImageContainer__OnSourceError_fn, this));
        }

        OnSourceChanged(NULL, NULL);
    }
}

// public generated void add_SourceChanged(Uno.EventHandler value) [instance] :180
void ImageContainer::add_SourceChanged(uDelegate* value)
{
    SourceChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(SourceChanged1, value), ::TYPES[28/*Uno.EventHandler*/]);
}

// public generated void remove_SourceChanged(Uno.EventHandler value) [instance] :180
void ImageContainer::remove_SourceChanged(uDelegate* value)
{
    SourceChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(SourceChanged1, value), ::TYPES[28/*Uno.EventHandler*/]);
}

// public generated void add_SourceError(Fuse.Resources.ImageSourceErrorHandler value) [instance] :190
void ImageContainer::add_SourceError(uDelegate* value)
{
    SourceError1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(SourceError1, value), ::TYPES[29/*Fuse.Resources.ImageSourceErrorHandler*/]);
}

// public generated void remove_SourceError(Fuse.Resources.ImageSourceErrorHandler value) [instance] :190
void ImageContainer::remove_SourceError(uDelegate* value)
{
    SourceError1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(SourceError1, value), ::TYPES[29/*Fuse.Resources.ImageSourceErrorHandler*/]);
}

// public Fuse.Elements.StretchMode get_StretchMode() [instance] :273
int ImageContainer::StretchMode()
{
    return uPtr(Sizing)->stretchMode;
}

// public void set_StretchMode(Fuse.Elements.StretchMode value) [instance] :274
void ImageContainer::StretchMode(int value)
{
    if (uPtr(Sizing)->SetStretchMode(value))
        OnSizingChanged();
}

// public ImageContainer New([Fuse.Internal.IImageContainerOwner owner]) [static] :26
ImageContainer* ImageContainer::New1(uObject* owner)
{
    ImageContainer* obj15 = (ImageContainer*)uNew(ImageContainer_typeof());
    obj15->ctor_(owner);
    return obj15;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\internal\$.uno
// ------------------------------------------------------------------------------------

// internal struct MiniList<T> :1151
// {
// public void Insert(int index, T value) [adapter] :1172
static void MiniList__Insert_ex(uObject* __this, int* index, uObject* value)
{
    MiniList__Insert_fn((MiniList*)((uint8_t*)__this + sizeof(uObject)), __this->__type, index, value);
}

// public void RemoveAt(int index) [adapter] :1206
static void MiniList__RemoveAt_ex(uObject* __this, int* index)
{
    MiniList__RemoveAt_fn((MiniList*)((uint8_t*)__this + sizeof(uObject)), __this->__type, index);
}

// public T get_Item(int index) [adapter] :1241
static void MiniList__get_Item_ex(uObject* __this, int* index, uObject** __retval)
{
    MiniList__get_Item_fn((MiniList*)((uint8_t*)__this + sizeof(uObject)), __this->__type, index, __retval);
}

// public void Clear() [adapter] :1221
static void MiniList__Clear_ex(uObject* __this)
{
    MiniList__Clear_fn((MiniList*)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public void Add(T value) [adapter] :1167
static void MiniList__Add_ex(uObject* __this, uObject* value)
{
    MiniList__Add_fn((MiniList*)((uint8_t*)__this + sizeof(uObject)), __this->__type, value);
}

// public bool Remove(T value) [adapter] :1191
static void MiniList__Remove_ex(uObject* __this, uObject* value, bool* __retval)
{
    MiniList__Remove_fn((MiniList*)((uint8_t*)__this + sizeof(uObject)), __this->__type, value, __retval);
}

// public bool Contains(T value) [adapter] :1230
static void MiniList__Contains_ex(uObject* __this, uObject* value, bool* __retval)
{
    MiniList__Contains_fn((MiniList*)((uint8_t*)__this + sizeof(uObject)), __this->__type, value, __retval);
}

// public int get_Count() [adapter] :1157
static void MiniList__get_Count_ex(uObject* __this, int* __retval)
{
    MiniList__get_Count_fn((MiniList*)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() [adapter] :1254
static void MiniList__GetEnumerator_ex(uObject* __this, uObject** __retval)
{
    MiniList__GetEnumerator_fn((MiniList*)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

static void MiniList_build(uType* type)
{
    ::STRINGS[4] = uString::Const("value");
    ::STRINGS[5] = uString::Const("index");
    ::TYPES[33] = ::g::Uno::Collections::List_typeof();
    ::TYPES[34] = MiniList__Enumerator_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::List_typeof()->MakeType(type->T(0), NULL),
        MiniList__Enumerator_typeof()->MakeType(type->T(0), type->T(0), NULL),
        type->T(0));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(type->T(0), NULL), offsetof(MiniList_type, interface0),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(type->T(0), NULL), offsetof(MiniList_type, interface1),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0), NULL), offsetof(MiniList_type, interface2));
    type->SetFields(0,
        uObject_typeof(), offsetof(::g::Fuse::Internal::MiniList, _list), 0);
}

MiniList_type* MiniList_typeof()
{
    static uSStrong<MiniList_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 3;
    options.ValueSize = sizeof(MiniList);
    options.TypeSize = sizeof(MiniList_type);
    type = (MiniList_type*)uStructType::New("Fuse.Internal.MiniList`1", options);
    type->fp_build_ = MiniList_build;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))MiniList__Insert_ex;
    type->interface0.fp_RemoveAt = MiniList__RemoveAt_ex;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))MiniList__get_Item_ex;
    type->interface1.fp_Clear = MiniList__Clear_ex;
    type->interface1.fp_Add = (void(*)(uObject*, void*))MiniList__Add_ex;
    type->interface1.fp_Remove = (void(*)(uObject*, void*, bool*))MiniList__Remove_ex;
    type->interface1.fp_Contains = (void(*)(uObject*, void*, bool*))MiniList__Contains_ex;
    type->interface1.fp_get_Count = MiniList__get_Count_ex;
    type->interface2.fp_GetEnumerator = (void(*)(uObject*, uObject**))MiniList__GetEnumerator_ex;
    return type;
}

// public void Add(T value) :1167
void MiniList__Add_fn(MiniList* __this, uType* __type, uObject* value)
{
    __this->Add(__type, value);
}

// public void Clear() :1221
void MiniList__Clear_fn(MiniList* __this, uType* __type)
{
    __this->Clear(__type);
}

// public bool Contains(T value) :1230
void MiniList__Contains_fn(MiniList* __this, uType* __type, uObject* value, bool* __retval)
{
    *__retval = __this->Contains(__type, value);
}

// public int get_Count() :1157
void MiniList__get_Count_fn(MiniList* __this, uType* __type, int* __retval)
{
    *__retval = __this->Count(__type);
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() :1254
void MiniList__GetEnumerator_fn(MiniList* __this, uType* __type, uObject** __retval)
{
    *__retval = __this->GetEnumerator(__type);
}

// public void Insert(int index, T value) :1172
void MiniList__Insert_fn(MiniList* __this, uType* __type, int* index, uObject* value)
{
    __this->Insert(__type, *index, value);
}

// public T get_Item(int index) :1241
void MiniList__get_Item_fn(MiniList* __this, uType* __type, int* index, uObject** __retval)
{
    *__retval = __this->Item(__type, *index);
}

// public bool Remove(T value) :1191
void MiniList__Remove_fn(MiniList* __this, uType* __type, uObject* value, bool* __retval)
{
    *__retval = __this->Remove(__type, value);
}

// public void RemoveAt(int index) :1206
void MiniList__RemoveAt_fn(MiniList* __this, uType* __type, int* index)
{
    __this->RemoveAt(__type, *index);
}

// public void Add(T value) [instance] :1167
void MiniList::Add(uType* __type, uObject* value)
{
    Insert(__type, Count(__type), value);
}

// public void Clear() [instance] :1221
void MiniList::Clear(uType* __type)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.List<T>*/),
    };
    ::g::Uno::Collections::List* list = uAs< ::g::Uno::Collections::List*>(_list, __types[0]);

    if (list != NULL)
        uPtr(list)->Clear();
    else
        _list = NULL;
}

// public bool Contains(T value) [instance] :1230
bool MiniList::Contains(uType* __type, uObject* value)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.List<T>*/),
    };
    bool ret1;
    ::g::Uno::Collections::List* list = uAs< ::g::Uno::Collections::List*>(_list, __types[0]);

    if (list != NULL)
        return (::g::Uno::Collections::List__Contains_fn(uPtr(list), value, &ret1), ret1);

    return (_list != NULL) && ::g::Uno::Object::Equals1(_list, value);
}

// public int get_Count() [instance] :1157
int MiniList::Count(uType* __type)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.List<T>*/),
    };
    ::g::Uno::Collections::List* list = uAs< ::g::Uno::Collections::List*>(_list, __types[0]);

    if (list != NULL)
        return uPtr(list)->Count();

    return (_list == NULL) ? 0 : 1;
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() [instance] :1254
uObject* MiniList::GetEnumerator(uType* __type)
{
    uType* __types[] = {
        __type->Precalced(1/*Fuse.Internal.MiniList<T>.Enumerator<T>*/),
    };
    return uBox(__types[0], MiniList__Enumerator__New1(__types[0], *this));
}

// public void Insert(int index, T value) [instance] :1172
void MiniList::Insert(uType* __type, int index, uObject* value)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.List<T>*/),
        __type->Precalced(2/*T*/),
    };

    if (value == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[4/*"value"*/]));

    ::g::Uno::Collections::List* list = uAs< ::g::Uno::Collections::List*>(_list, __types[0]);

    if (list == NULL)
    {
        if ((_list == NULL) && (index != 0))
            U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[5/*"index"*/]));

        list = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(__types[0]);

        if (_list != NULL)
            ::g::Uno::Collections::List__Add_fn(uPtr(list), uAs<uObject*>(_list, __types[1]));

        _list = list;
    }

    ::g::Uno::Collections::List__Insert_fn(uPtr(list), uCRef<int>(index), value);
}

// public T get_Item(int index) [instance] :1241
uObject* MiniList::Item(uType* __type, int index)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.List<T>*/),
        __type->Precalced(2/*T*/),
    };
    uObject* ret3;
    ::g::Uno::Collections::List* list = uAs< ::g::Uno::Collections::List*>(_list, __types[0]);

    if (list != NULL)
        return (::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(index), &ret3), ret3);

    if (index != 0)
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());

    return uAs<uObject*>(_list, __types[1]);
}

// public bool Remove(T value) [instance] :1191
bool MiniList::Remove(uType* __type, uObject* value)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.List<T>*/),
    };
    bool ret2;

    if ((_list != NULL) && ::g::Uno::Object::Equals1(_list, value))
    {
        _list = NULL;
        return true;
    }

    ::g::Uno::Collections::List* list = uAs< ::g::Uno::Collections::List*>(_list, __types[0]);

    if (list == NULL)
        return false;

    return (::g::Uno::Collections::List__Remove_fn(uPtr(list), value, &ret2), ret2);
}

// public void RemoveAt(int index) [instance] :1206
void MiniList::RemoveAt(uType* __type, int index)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.List<T>*/),
    };
    ::g::Uno::Collections::List* list = uAs< ::g::Uno::Collections::List*>(_list, __types[0]);

    if (list != NULL)
    {
        uPtr(list)->RemoveAt(index);
        return;
    }

    if (index != 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[5/*"index"*/]));

    _list = NULL;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\internal\$.uno
// ------------------------------------------------------------------------------------

// internal sealed class RectPacker :1416
// {
static void RectPacker_build(uType* type)
{
    ::TYPES[35] = ::g::Uno::Collections::LinkedList_typeof()->MakeType(::g::Fuse::Internal::SkylineNode_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[35/*Uno.Collections.LinkedList<Fuse.Internal.SkylineNode>*/], offsetof(::g::Fuse::Internal::RectPacker, _skyline), 0,
        ::g::Uno::Int2_typeof(), offsetof(::g::Fuse::Internal::RectPacker, _Size), 0);
}

uType* RectPacker_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(RectPacker);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Internal.RectPacker", options);
    type->fp_build_ = RectPacker_build;
    return type;
}

// public RectPacker(int2 size) :1421
void RectPacker__ctor__fn(RectPacker* __this, ::g::Uno::Int2* size)
{
    __this->ctor_(*size);
}

// private void MergeNeighbours(Uno.Collections.LinkedListNode<Fuse.Internal.SkylineNode> node) :1507
void RectPacker__MergeNeighbours_fn(RectPacker* __this, ::g::Uno::Collections::LinkedListNode* node)
{
    __this->MergeNeighbours(node);
}

// public RectPacker New(int2 size) :1421
void RectPacker__New1_fn(::g::Uno::Int2* size, RectPacker** __retval)
{
    *__retval = RectPacker::New1(*size);
}

// private void ReplaceNodes(Uno.Collections.LinkedListNode<Fuse.Internal.SkylineNode> node, Fuse.Internal.SkylineNode newSkyline) :1481
void RectPacker__ReplaceNodes_fn(RectPacker* __this, ::g::Uno::Collections::LinkedListNode* node, ::g::Fuse::Internal::SkylineNode* newSkyline)
{
    __this->ReplaceNodes(node, *newSkyline);
}

// public generated int2 get_Size() :1418
void RectPacker__get_Size_fn(RectPacker* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->Size();
}

// private generated void set_Size(int2 value) :1418
void RectPacker__set_Size_fn(RectPacker* __this, ::g::Uno::Int2* value)
{
    __this->Size(*value);
}

// public bool TryAdd(int2 size, Uno.Recti& rect) :1428
void RectPacker__TryAdd_fn(RectPacker* __this, ::g::Uno::Int2* size, ::g::Uno::Recti* rect, bool* __retval)
{
    *__retval = __this->TryAdd(*size, rect);
}

// private bool TryFit(Uno.Collections.LinkedListNode<Fuse.Internal.SkylineNode> node, int2 size, int& height) :1464
void RectPacker__TryFit_fn(RectPacker* __this, ::g::Uno::Collections::LinkedListNode* node, ::g::Uno::Int2* size, int* height, bool* __retval)
{
    *__retval = __this->TryFit(node, *size, height);
}

// public RectPacker(int2 size) [instance] :1421
void RectPacker::ctor_(::g::Uno::Int2 size)
{
    ::g::Uno::Collections::LinkedListNode* ret2;
    Size(size);
    _skyline = ((::g::Uno::Collections::LinkedList*)::g::Uno::Collections::LinkedList::New1(::TYPES[35/*Uno.Collections.LinkedList<Fuse.Internal.SkylineNode>*/]));
    ::g::Uno::Collections::LinkedList__AddFirst_fn(uPtr(_skyline), uCRef(::g::Fuse::Internal::SkylineNode__New1(::g::Uno::Int2__New1(0), Size().X)), &ret2);
}

// private void MergeNeighbours(Uno.Collections.LinkedListNode<Fuse.Internal.SkylineNode> node) [instance] :1507
void RectPacker::MergeNeighbours(::g::Uno::Collections::LinkedListNode* node)
{
    ::g::Fuse::Internal::SkylineNode ret3;
    ::g::Fuse::Internal::SkylineNode ret4;
    ::g::Uno::Collections::LinkedListNode* ret5;
    ::g::Fuse::Internal::SkylineNode ret6;
    ::g::Fuse::Internal::SkylineNode ret7;
    ::g::Uno::Collections::LinkedListNode* ret8;

    if (((::g::Uno::Collections::LinkedListNode*)uPtr(node)->Next()) != NULL)
    {
        ::g::Fuse::Internal::SkylineNode l = (::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(node), &ret3), ret3);
        ::g::Fuse::Internal::SkylineNode r = (::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr((::g::Uno::Collections::LinkedListNode*)node->Next()), &ret4), ret4);

        if (l.Position.Y == r.Position.Y)
        {
            ::g::Uno::Collections::LinkedListNode* newNode = (::g::Uno::Collections::LinkedList__AddBefore_fn(uPtr(_skyline), node, uCRef(::g::Fuse::Internal::SkylineNode__New1(l.Position, l.Width + r.Width)), &ret5), ret5);
            uPtr(_skyline)->Remove1((::g::Uno::Collections::LinkedListNode*)uPtr(node)->Next());
            uPtr(_skyline)->Remove1(node);
            node = newNode;
        }
    }

    if (((::g::Uno::Collections::LinkedListNode*)uPtr(node)->Previous()) != NULL)
    {
        ::g::Fuse::Internal::SkylineNode l1 = (::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr((::g::Uno::Collections::LinkedListNode*)uPtr(node)->Previous()), &ret6), ret6);
        ::g::Fuse::Internal::SkylineNode r1 = (::g::Uno::Collections::LinkedListNode__get_Value_fn(node, &ret7), ret7);

        if (l1.Position.Y == r1.Position.Y)
        {
            ::g::Uno::Collections::LinkedList__AddBefore_fn(uPtr(_skyline), (::g::Uno::Collections::LinkedListNode*)uPtr(node)->Previous(), uCRef(::g::Fuse::Internal::SkylineNode__New1(l1.Position, l1.Width + r1.Width)), &ret8);
            uPtr(_skyline)->Remove1((::g::Uno::Collections::LinkedListNode*)node->Previous());
            uPtr(_skyline)->Remove1(node);
        }
    }
}

// private void ReplaceNodes(Uno.Collections.LinkedListNode<Fuse.Internal.SkylineNode> node, Fuse.Internal.SkylineNode newSkyline) [instance] :1481
void RectPacker::ReplaceNodes(::g::Uno::Collections::LinkedListNode* node, ::g::Fuse::Internal::SkylineNode newSkyline)
{
    ::g::Uno::Collections::LinkedListNode* ret9;
    ::g::Fuse::Internal::SkylineNode ret10;
    ::g::Fuse::Internal::SkylineNode ret11;
    ::g::Fuse::Internal::SkylineNode ret12;
    ::g::Uno::Collections::LinkedListNode* ret13;
    ::g::Uno::Collections::LinkedListNode* newNode = (::g::Uno::Collections::LinkedList__AddBefore_fn(uPtr(_skyline), node, uCRef(newSkyline), &ret9), ret9);
    int remainingWidth = newSkyline.Width;

    while ((node != NULL) && ((::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(node), &ret10), ret10).Width <= remainingWidth))
    {
        remainingWidth = remainingWidth - (::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(node), &ret11), ret11).Width;
        ::g::Uno::Collections::LinkedListNode* next = (::g::Uno::Collections::LinkedListNode*)node->Next();
        uPtr(_skyline)->Remove1(node);
        node = next;
    }

    if (remainingWidth > 0)
    {
        ::g::Fuse::Internal::SkylineNode value = (::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(node), &ret12), ret12);
        uPtr(_skyline)->Remove1(node);
        ::g::Uno::Collections::LinkedList__AddAfter_fn(uPtr(_skyline), newNode, uCRef(::g::Fuse::Internal::SkylineNode__New1(::g::Uno::Int2__New2(value.Position.X + remainingWidth, value.Position.Y), value.Width - remainingWidth)), &ret13);
    }

    MergeNeighbours(newNode);
}

// public generated int2 get_Size() [instance] :1418
::g::Uno::Int2 RectPacker::Size()
{
    return _Size;
}

// private generated void set_Size(int2 value) [instance] :1418
void RectPacker::Size(::g::Uno::Int2 value)
{
    _Size = value;
}

// public bool TryAdd(int2 size, Uno.Recti& rect) [instance] :1428
bool RectPacker::TryAdd(::g::Uno::Int2 size, ::g::Uno::Recti* rect)
{
    ::g::Fuse::Internal::SkylineNode ret14;
    ::g::Uno::Collections::LinkedListNode* lowestNode = NULL;
    int lowest = 2147483647;
    ::g::Uno::Collections::LinkedListNode* node = (::g::Uno::Collections::LinkedListNode*)uPtr(_skyline)->First();

    while (node != NULL)
    {
        int height;

        if (TryFit(node, size, &height))
        {
            if (height < lowest)
            {
                lowestNode = node;
                lowest = height;
            }
        }

        node = (::g::Uno::Collections::LinkedListNode*)uPtr(node)->Next();
    }

    if (lowestNode == NULL)
    {
        *rect = ::g::Uno::Recti__New1(0, 0, 0, 0);
        return false;
    }
    else
    {
        int x = (::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(lowestNode), &ret14), ret14).Position.X;
        *rect = ::g::Uno::Recti__New2(::g::Uno::Int2__New2(x, lowest), size);
        ReplaceNodes(lowestNode, ::g::Fuse::Internal::SkylineNode__New1(::g::Uno::Int2__New2(x, lowest + size.Y), size.X));
        return true;
    }
}

// private bool TryFit(Uno.Collections.LinkedListNode<Fuse.Internal.SkylineNode> node, int2 size, int& height) [instance] :1464
bool RectPacker::TryFit(::g::Uno::Collections::LinkedListNode* node, ::g::Uno::Int2 size, int* height)
{
    ::g::Fuse::Internal::SkylineNode ret15;
    ::g::Fuse::Internal::SkylineNode ret16;
    int remainingWidth = size.X;
    *height = 0;

    while (node != NULL)
    {
        *height = ::g::Uno::Math::Max8(*height, (::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(node), &ret15), ret15).Position.Y);

        if ((*height + size.Y) > Size().Y)
            return false;

        remainingWidth = remainingWidth - (::g::Uno::Collections::LinkedListNode__get_Value_fn(node, &ret16), ret16).Width;

        if (remainingWidth <= 0)
            return true;

        node = (::g::Uno::Collections::LinkedListNode*)uPtr(node)->Next();
    }

    return false;
}

// public RectPacker New(int2 size) [static] :1421
RectPacker* RectPacker::New1(::g::Uno::Int2 size)
{
    RectPacker* obj1 = (RectPacker*)uNew(RectPacker_typeof());
    obj1->ctor_(size);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\internal\$.uno
// ------------------------------------------------------------------------------------

// internal abstract class ScalarBlender<T> :366
// {
static void ScalarBlender_build(uType* type)
{
    type->SetBase(::g::Fuse::Internal::Blender_typeof()->MakeType(type->T(0), NULL));
}

ScalarBlender_type* ScalarBlender_typeof()
{
    static uSStrong<ScalarBlender_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Internal::Blender_typeof();
    options.GenericCount = 1;
    options.ObjectSize = sizeof(ScalarBlender);
    options.TypeSize = sizeof(ScalarBlender_type);
    type = (ScalarBlender_type*)uClassType::New("Fuse.Internal.ScalarBlender`1", options);
    type->fp_build_ = ScalarBlender_build;
    return type;
}

// protected generated ScalarBlender() :366
void ScalarBlender__ctor_1_fn(ScalarBlender* __this)
{
    __this->ctor_1();
}

// protected generated ScalarBlender() [instance] :366
void ScalarBlender::ctor_1()
{
    ctor_();
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\internal\$.uno
// ------------------------------------------------------------------------------------

// internal sealed class Size2Blender :347
// {
static void Size2Blender_build(uType* type)
{
    type->SetBase(::g::Fuse::Internal::Blender_typeof()->MakeType(::g::Uno::UX::Size2_typeof(), NULL));
}

::g::Fuse::Internal::Blender_type* Size2Blender_typeof()
{
    static uSStrong< ::g::Fuse::Internal::Blender_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Internal::Blender_typeof();
    options.ObjectSize = sizeof(Size2Blender);
    options.TypeSize = sizeof(::g::Fuse::Internal::Blender_type);
    type = (::g::Fuse::Internal::Blender_type*)uClassType::New("Fuse.Internal.Size2Blender", options);
    type->fp_build_ = Size2Blender_build;
    type->fp_ctor_ = (void*)Size2Blender__New1_fn;
    type->fp_Add = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))Size2Blender__Add_fn;
    type->fp_Length = (void(*)(::g::Fuse::Internal::Blender*, void*, double*))Size2Blender__Length_fn;
    type->fp_Lerp = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, double*, uTRef))Size2Blender__Lerp_fn;
    type->fp_Sub = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))Size2Blender__Sub_fn;
    type->fp_ToUnit = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))Size2Blender__ToUnit_fn;
    type->fp_Weight = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))Size2Blender__Weight_fn;
    type->fp_get_Zero = (void(*)(::g::Fuse::Internal::Blender*, uTRef))Size2Blender__get_Zero_fn;
    return type;
}

// public generated Size2Blender() :347
void Size2Blender__ctor_1_fn(Size2Blender* __this)
{
    __this->ctor_1();
}

// public override sealed Uno.UX.Size2 Add(Uno.UX.Size2 a, Uno.UX.Size2 b) :350
void Size2Blender__Add_fn(Size2Blender* __this, ::g::Uno::UX::Size2* a, ::g::Uno::UX::Size2* b, ::g::Uno::UX::Size2* __retval)
{
    ::g::Uno::UX::Size2 a_ = *a;
    ::g::Uno::UX::Size2 b_ = *b;
    return *__retval = ::g::Uno::UX::Size2__op_Addition(a_, b_), void();
}

// public override sealed double Length(Uno.UX.Size2 a) :363
void Size2Blender__Length_fn(Size2Blender* __this, ::g::Uno::UX::Size2* a, double* __retval)
{
    ::g::Uno::UX::Size2 a_ = *a;
    return *__retval = (double)::g::Uno::Vector::Length(::g::Uno::UX::Size2__op_Explicit(a_)), void();
}

// public override sealed Uno.UX.Size2 Lerp(Uno.UX.Size2 a, Uno.UX.Size2 b, double d) :352
void Size2Blender__Lerp_fn(Size2Blender* __this, ::g::Uno::UX::Size2* a, ::g::Uno::UX::Size2* b, double* d, ::g::Uno::UX::Size2* __retval)
{
    ::g::Uno::UX::Size2 a_ = *a;
    ::g::Uno::UX::Size2 b_ = *b;
    double d_ = *d;
    return *__retval = ::g::Uno::UX::Size2__op_Addition(a_, ::g::Uno::UX::Size2__op_Multiply(::g::Uno::UX::Size2__op_Subtraction(b_, a_), (float)d_)), void();
}

// public generated Size2Blender New() :347
void Size2Blender__New1_fn(Size2Blender** __retval)
{
    *__retval = Size2Blender::New1();
}

// public override sealed Uno.UX.Size2 Sub(Uno.UX.Size2 a, Uno.UX.Size2 b) :351
void Size2Blender__Sub_fn(Size2Blender* __this, ::g::Uno::UX::Size2* a, ::g::Uno::UX::Size2* b, ::g::Uno::UX::Size2* __retval)
{
    ::g::Uno::UX::Size2 a_ = *a;
    ::g::Uno::UX::Size2 b_ = *b;
    return *__retval = ::g::Uno::UX::Size2__op_Subtraction(a_, b_), void();
}

// public override sealed Uno.UX.Size2 ToUnit(Uno.UX.Size2 a, double& length) :355
void Size2Blender__ToUnit_fn(Size2Blender* __this, ::g::Uno::UX::Size2* a, double* length, ::g::Uno::UX::Size2* __retval)
{
    ::g::Uno::UX::Size2 a_ = *a;
    *length = (double)::g::Uno::Vector::Length(::g::Uno::UX::Size2__op_Explicit(a_));
    ::g::Uno::Float2 v = ::g::Uno::Vector::Normalize(::g::Uno::UX::Size2__op_Explicit(a_));
    ::g::Uno::UX::Size x = a_.X;
    ::g::Uno::UX::Size y = a_.Y;
    return *__retval = ::g::Uno::UX::Size2__New1(::g::Uno::UX::Size__New1(v.X, x.Unit), ::g::Uno::UX::Size__New1(v.Y, y.Unit)), void();
}

// public override sealed Uno.UX.Size2 Weight(Uno.UX.Size2 v, double w) :349
void Size2Blender__Weight_fn(Size2Blender* __this, ::g::Uno::UX::Size2* v, double* w, ::g::Uno::UX::Size2* __retval)
{
    ::g::Uno::UX::Size2 v_ = *v;
    double w_ = *w;
    return *__retval = ::g::Uno::UX::Size2__op_Multiply(v_, (float)w_), void();
}

// public override sealed Uno.UX.Size2 get_Zero() :353
void Size2Blender__get_Zero_fn(Size2Blender* __this, ::g::Uno::UX::Size2* __retval)
{
    return *__retval = ::g::Uno::UX::Size2__op_Implicit1(::g::Uno::Float2__New2(0.0f, 0.0f)), void();
}

// public generated Size2Blender() [instance] :347
void Size2Blender::ctor_1()
{
    ctor_();
}

// public generated Size2Blender New() [static] :347
Size2Blender* Size2Blender::New1()
{
    Size2Blender* obj1 = (Size2Blender*)uNew(Size2Blender_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\internal\$.uno
// ------------------------------------------------------------------------------------

// internal sealed class SizeBlender :331
// {
static void SizeBlender_build(uType* type)
{
    type->SetBase(::g::Fuse::Internal::Blender_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL));
}

::g::Fuse::Internal::Blender_type* SizeBlender_typeof()
{
    static uSStrong< ::g::Fuse::Internal::Blender_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Internal::Blender_typeof();
    options.ObjectSize = sizeof(SizeBlender);
    options.TypeSize = sizeof(::g::Fuse::Internal::Blender_type);
    type = (::g::Fuse::Internal::Blender_type*)uClassType::New("Fuse.Internal.SizeBlender", options);
    type->fp_build_ = SizeBlender_build;
    type->fp_ctor_ = (void*)SizeBlender__New1_fn;
    type->fp_Add = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))SizeBlender__Add_fn;
    type->fp_Length = (void(*)(::g::Fuse::Internal::Blender*, void*, double*))SizeBlender__Length_fn;
    type->fp_Lerp = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, double*, uTRef))SizeBlender__Lerp_fn;
    type->fp_Sub = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))SizeBlender__Sub_fn;
    type->fp_ToUnit = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))SizeBlender__ToUnit_fn;
    type->fp_Weight = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))SizeBlender__Weight_fn;
    type->fp_get_Zero = (void(*)(::g::Fuse::Internal::Blender*, uTRef))SizeBlender__get_Zero_fn;
    return type;
}

// public generated SizeBlender() :331
void SizeBlender__ctor_1_fn(SizeBlender* __this)
{
    __this->ctor_1();
}

// public override sealed Uno.UX.Size Add(Uno.UX.Size a, Uno.UX.Size b) :334
void SizeBlender__Add_fn(SizeBlender* __this, ::g::Uno::UX::Size* a, ::g::Uno::UX::Size* b, ::g::Uno::UX::Size* __retval)
{
    ::g::Uno::UX::Size a_ = *a;
    ::g::Uno::UX::Size b_ = *b;
    return *__retval = ::g::Uno::UX::Size__op_Addition(a_, b_), void();
}

// public override sealed double Length(Uno.UX.Size a) :344
void SizeBlender__Length_fn(SizeBlender* __this, ::g::Uno::UX::Size* a, double* __retval)
{
    ::g::Uno::UX::Size a_ = *a;
    return *__retval = (double)::g::Uno::Math::Abs1(a_.Value), void();
}

// public override sealed Uno.UX.Size Lerp(Uno.UX.Size a, Uno.UX.Size b, double d) :336
void SizeBlender__Lerp_fn(SizeBlender* __this, ::g::Uno::UX::Size* a, ::g::Uno::UX::Size* b, double* d, ::g::Uno::UX::Size* __retval)
{
    ::g::Uno::UX::Size a_ = *a;
    ::g::Uno::UX::Size b_ = *b;
    double d_ = *d;
    return *__retval = ::g::Uno::UX::Size__op_Addition(a_, ::g::Uno::UX::Size__op_Multiply(::g::Uno::UX::Size__op_Subtraction(b_, a_), (float)d_)), void();
}

// public generated SizeBlender New() :331
void SizeBlender__New1_fn(SizeBlender** __retval)
{
    *__retval = SizeBlender::New1();
}

// public override sealed Uno.UX.Size Sub(Uno.UX.Size a, Uno.UX.Size b) :335
void SizeBlender__Sub_fn(SizeBlender* __this, ::g::Uno::UX::Size* a, ::g::Uno::UX::Size* b, ::g::Uno::UX::Size* __retval)
{
    ::g::Uno::UX::Size a_ = *a;
    ::g::Uno::UX::Size b_ = *b;
    return *__retval = ::g::Uno::UX::Size__op_Subtraction(a_, b_), void();
}

// public override sealed Uno.UX.Size ToUnit(Uno.UX.Size a, double& length) :339
void SizeBlender__ToUnit_fn(SizeBlender* __this, ::g::Uno::UX::Size* a, double* length, ::g::Uno::UX::Size* __retval)
{
    ::g::Uno::UX::Size a_ = *a;
    *length = (double)a_.Value;
    return *__retval = (a_.Value < 0.0f) ? ::g::Uno::UX::Size__New1(-1.0f, a_.Unit) : ::g::Uno::UX::Size__New1(1.0f, a_.Unit), void();
}

// public override sealed Uno.UX.Size Weight(Uno.UX.Size v, double w) :333
void SizeBlender__Weight_fn(SizeBlender* __this, ::g::Uno::UX::Size* v, double* w, ::g::Uno::UX::Size* __retval)
{
    ::g::Uno::UX::Size v_ = *v;
    double w_ = *w;
    return *__retval = ::g::Uno::UX::Size__op_Multiply(v_, (float)w_), void();
}

// public override sealed Uno.UX.Size get_Zero() :337
void SizeBlender__get_Zero_fn(SizeBlender* __this, ::g::Uno::UX::Size* __retval)
{
    return *__retval = ::g::Uno::UX::Size__op_Implicit1(0), void();
}

// public generated SizeBlender() [instance] :331
void SizeBlender::ctor_1()
{
    ctor_();
}

// public generated SizeBlender New() [static] :331
SizeBlender* SizeBlender::New1()
{
    SizeBlender* obj1 = (SizeBlender*)uNew(SizeBlender_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Elements\0.43.11\internal\$.uno
// -----------------------------------------------------------------------------------------

// internal sealed class SizingContainer :351
// {
static void SizingContainer_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Internal::SizingContainer, absoluteZoom), 0,
        ::g::Fuse::Elements::Alignment_typeof(), offsetof(::g::Fuse::Internal::SizingContainer, align), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Internal::SizingContainer, padding), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Internal::SizingContainer, snapToPixels), 0,
        ::g::Fuse::Elements::StretchDirection_typeof(), offsetof(::g::Fuse::Internal::SizingContainer, stretchDirection), 0,
        ::g::Fuse::Elements::StretchMode_typeof(), offsetof(::g::Fuse::Internal::SizingContainer, stretchMode), 0,
        ::g::Fuse::Elements::StretchSizing_typeof(), offsetof(::g::Fuse::Internal::SizingContainer, stretchSizing), 0);
}

uType* SizingContainer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(SizingContainer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Internal.SizingContainer", options);
    type->fp_build_ = SizingContainer_build;
    type->fp_ctor_ = (void*)SizingContainer__New1_fn;
    return type;
}

// public generated SizingContainer() :351
void SizingContainer__ctor__fn(SizingContainer* __this)
{
    __this->ctor_();
}

// public float4 CalcClip(float2 availableSize, float2& origin, float2& contentActualSize) :575
void SizingContainer__CalcClip_fn(SizingContainer* __this, ::g::Uno::Float2* availableSize, ::g::Uno::Float2* origin, ::g::Uno::Float2* contentActualSize, ::g::Uno::Float4* __retval)
{
    *__retval = __this->CalcClip(*availableSize, origin, contentActualSize);
}

// public float2 CalcContentSize(float2 size, int2 pixelSize) :403
void SizingContainer__CalcContentSize_fn(SizingContainer* __this, ::g::Uno::Float2* size, ::g::Uno::Int2* pixelSize, ::g::Uno::Float2* __retval)
{
    *__retval = __this->CalcContentSize(*size, *pixelSize);
}

// public float2 CalcOrigin(float2 availableSize, float2 contentActualSize) :533
void SizingContainer__CalcOrigin_fn(SizingContainer* __this, ::g::Uno::Float2* availableSize, ::g::Uno::Float2* contentActualSize, ::g::Uno::Float2* __retval)
{
    *__retval = __this->CalcOrigin(*availableSize, *contentActualSize);
}

// public float2 CalcScale(float2 availableSize, float2 desiredSize) :398
void SizingContainer__CalcScale_fn(SizingContainer* __this, ::g::Uno::Float2* availableSize, ::g::Uno::Float2* desiredSize, ::g::Uno::Float2* __retval)
{
    *__retval = __this->CalcScale(*availableSize, *desiredSize);
}

// private float2 CalcScale(float2 availableSize, float2 desiredSize, bool autoWidth, bool autoHeight) :449
void SizingContainer__CalcScale1_fn(SizingContainer* __this, ::g::Uno::Float2* availableSize, ::g::Uno::Float2* desiredSize, bool* autoWidth, bool* autoHeight, ::g::Uno::Float2* __retval)
{
    *__retval = __this->CalcScale1(*availableSize, *desiredSize, *autoWidth, *autoHeight);
}

// public float2 ExpandFillSize(float2 size, Fuse.LayoutParams lp) :620
void SizingContainer__ExpandFillSize_fn(SizingContainer* __this, ::g::Uno::Float2* size, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ExpandFillSize(*size, *lp);
}

// public generated SizingContainer New() :351
void SizingContainer__New1_fn(SizingContainer** __retval)
{
    *__retval = SizingContainer::New1();
}

// private float get_PaddingHeight() :396
void SizingContainer__get_PaddingHeight_fn(SizingContainer* __this, float* __retval)
{
    *__retval = __this->PaddingHeight();
}

// private float get_PaddingWidth() :395
void SizingContainer__get_PaddingWidth_fn(SizingContainer* __this, float* __retval)
{
    *__retval = __this->PaddingWidth();
}

// public bool SetAlignment(Fuse.Elements.Alignment a) :374
void SizingContainer__SetAlignment_fn(SizingContainer* __this, int* a, bool* __retval)
{
    *__retval = __this->SetAlignment(*a);
}

// public bool SetStretchDirection(Fuse.Elements.StretchDirection dir) :366
void SizingContainer__SetStretchDirection_fn(SizingContainer* __this, int* dir, bool* __retval)
{
    *__retval = __this->SetStretchDirection(*dir);
}

// public bool SetStretchMode(Fuse.Elements.StretchMode mode) :358
void SizingContainer__SetStretchMode_fn(SizingContainer* __this, int* mode, bool* __retval)
{
    *__retval = __this->SetStretchMode(*mode);
}

// public bool SetStretchSizing(Fuse.Elements.StretchSizing ss) :382
void SizingContainer__SetStretchSizing_fn(SizingContainer* __this, int* ss, bool* __retval)
{
    *__retval = __this->SetStretchSizing(*ss);
}

// private float2 SnapSize(float2 sz) :444
void SizingContainer__SnapSize_fn(SizingContainer* __this, ::g::Uno::Float2* sz, ::g::Uno::Float2* __retval)
{
    *__retval = __this->SnapSize(*sz);
}

// public generated SizingContainer() [instance] :351
void SizingContainer::ctor_()
{
    stretchMode = 5;
    align = 10;
    stretchSizing = 1;
    absoluteZoom = 1.0f;
}

// public float4 CalcClip(float2 availableSize, float2& origin, float2& contentActualSize) [instance] :575
::g::Uno::Float4 SizingContainer::CalcClip(::g::Uno::Float2 availableSize, ::g::Uno::Float2* origin, ::g::Uno::Float2* contentActualSize)
{
    ::g::Uno::Float4 ind1;
    ::g::Uno::Float4 ind2;

    if (((((*origin).X > availableSize.X) || (((*origin).X + (*contentActualSize).X) < 0.0f)) || ((*origin).Y > availableSize.Y)) || (((*origin).Y + (*contentActualSize).Y) < 0.0f))
    {
        *origin = ::g::Uno::Float2__New2(0.0f, 0.0f);
        *contentActualSize = ::g::Uno::Float2__New1(0.0f);
        return ::g::Uno::Float4__New2(0.0f, 0.0f, 1.0f, 1.0f);
    }

    ::g::Uno::Float2 tl = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), ::g::Uno::Float2__op_Division2(::g::Uno::Float2__op_Subtraction2((ind1 = padding, ::g::Uno::Float2__New2(ind1.X, ind1.Y)), *origin), *contentActualSize));
    ::g::Uno::Float2 br = ::g::Uno::Math::Min3(::g::Uno::Float2__New1(1.0f), ::g::Uno::Float2__op_Division2(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Subtraction2(availableSize, *origin), (ind2 = padding, ::g::Uno::Float2__New2(ind2.Z, ind2.W))), *contentActualSize));
    float dx = padding.X - (*origin).X;

    if (dx > 0.0f)
    {
        (*contentActualSize).X = ((*contentActualSize).X - dx);
        (*origin).X = padding.X;
    }

    dx = (((*origin).X + (*contentActualSize).X) - availableSize.X) + padding.Z;

    if (dx > 0.0f)
        (*contentActualSize).X = ((*contentActualSize).X - dx);

    float dy = padding.Y - (*origin).Y;

    if (dy > 0.0f)
    {
        (*contentActualSize).Y = ((*contentActualSize).Y - dy);
        (*origin).Y = padding.Y;
    }

    dy = (((*origin).Y + (*contentActualSize).Y) - availableSize.Y) + padding.W;

    if (dy > 0.0f)
        (*contentActualSize).Y = ((*contentActualSize).Y - dy);

    return ::g::Uno::Float4__New2(tl.X, tl.Y, br.X, br.Y);
}

// public float2 CalcContentSize(float2 size, int2 pixelSize) [instance] :403
::g::Uno::Float2 SizingContainer::CalcContentSize(::g::Uno::Float2 size, ::g::Uno::Int2 pixelSize)
{
    switch (stretchMode)
    {
        case 1:
        {
            if ((pixelSize.X == 0) || (pixelSize.Y == 0))
                return ::g::Uno::Float2__New1(0.0f);

            return ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)pixelSize.X, (float)pixelSize.Y), absoluteZoom);
        }
        case 2:
        {
            if ((pixelSize.X == 0) || (pixelSize.Y == 0))
                return ::g::Uno::Float2__New1(0.0f);

            ::g::Uno::Float2 exact = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)pixelSize.X, (float)pixelSize.Y), absoluteZoom);
            ::g::Uno::Float2 scale = ::g::Uno::Float2__op_Division2(size, exact);

            if (((double)scale.X > 0.75) && ((double)scale.X < 1.5))
                return exact;

            break;
        }
        default:
            break;
    }

    if (!snapToPixels)
        return size;

    return SnapSize(size);
}

// public float2 CalcOrigin(float2 availableSize, float2 contentActualSize) [instance] :533
::g::Uno::Float2 SizingContainer::CalcOrigin(::g::Uno::Float2 availableSize, ::g::Uno::Float2 contentActualSize)
{
    ::g::Uno::Float2 origin = ::g::Uno::Float2__New1(0.0f);

    switch (::g::Fuse::Elements::AlignmentHelpers::GetHorizontalAlign(align))
    {
        case 0:
        case 1:
        {
            origin.X = padding.Item(0);
            break;
        }
        case 2:
        {
            origin.X = (((((availableSize.X - padding.Item(0)) - padding.Item(2)) / 2.0f) - (contentActualSize.X / 2.0f)) + padding.Item(0));
            break;
        }
        case 3:
        {
            origin.X = ((availableSize.X - padding.Item(2)) - contentActualSize.X);
            break;
        }
    }

    switch (::g::Fuse::Elements::AlignmentHelpers::GetVerticalAlign(align))
    {
        case 0:
        case 4:
        {
            origin.Y = padding.Item(1);
            break;
        }
        case 8:
        {
            origin.Y = (((((availableSize.Y - padding.Item(1)) - padding.Item(3)) / 2.0f) - (contentActualSize.Y / 2.0f)) + padding.Item(1));
            break;
        }
        case 12:
        {
            origin.Y = ((availableSize.Y - padding.Item(3)) - contentActualSize.Y);
            break;
        }
    }

    if (snapToPixels)
        origin = SnapSize(origin);

    return origin;
}

// public float2 CalcScale(float2 availableSize, float2 desiredSize) [instance] :398
::g::Uno::Float2 SizingContainer::CalcScale(::g::Uno::Float2 availableSize, ::g::Uno::Float2 desiredSize)
{
    return CalcScale1(availableSize, desiredSize, false, false);
}

// private float2 CalcScale(float2 availableSize, float2 desiredSize, bool autoWidth, bool autoHeight) [instance] :449
::g::Uno::Float2 SizingContainer::CalcScale1(::g::Uno::Float2 availableSize, ::g::Uno::Float2 desiredSize, bool autoWidth, bool autoHeight)
{
    ::g::Uno::Float2 d = availableSize;
    d.X = (d.X - PaddingWidth());
    d.Y = (d.Y - PaddingHeight());
    ::g::Uno::Float2 scale = ::g::Uno::Float2__New1(1.0f);

    if ((autoWidth && autoHeight) && !(((stretchMode == 0) || (stretchMode == 1)) || (stretchMode == 2)))
    {
        if (stretchSizing == 0)
            scale = ::g::Uno::Float2__New1(0.0f);
        else
            scale = ::g::Uno::Float2__New1(1.0f);
    }
    else
    {
        ::g::Uno::Float2 s = ::g::Uno::Float2__New2((desiredSize.X < 1e-05f) ? 0.0f : d.X / desiredSize.X, (desiredSize.Y < 1e-05f) ? 0.0f : d.Y / desiredSize.Y);

        switch (stretchMode)
        {
            case 0:
            case 1:
            case 2:
            {
                scale = ::g::Uno::Float2__New1(1.0f);
                break;
            }
            case 4:
            case 3:
            {
                scale = autoWidth ? ::g::Uno::Float2__New1(s.Y) : autoHeight ? ::g::Uno::Float2__New1(s.X) : s;
                break;
            }
            case 5:
            {
                float sm = autoWidth ? s.Y : autoHeight ? s.X : ::g::Uno::Math::Min1(s.X, s.Y);
                scale = ::g::Uno::Float2__New1(sm);
                break;
            }
            case 6:
            {
                float sm1 = autoWidth ? s.Y : autoHeight ? s.X : ::g::Uno::Math::Max1(s.X, s.Y);
                scale = ::g::Uno::Float2__New1(sm1);
                break;
            }
        }
    }

    switch (stretchDirection)
    {
        case 0:
            break;
        case 2:
        {
            scale.X = ::g::Uno::Math::Min1(scale.X, 1.0f);
            scale.Y = ::g::Uno::Math::Min1(scale.Y, 1.0f);
            break;
        }
        case 1:
        {
            scale.X = ::g::Uno::Math::Max1(1.0f, scale.X);
            scale.Y = ::g::Uno::Math::Max1(1.0f, scale.Y);
            break;
        }
    }

    if ((snapToPixels && (desiredSize.X > 1e-05f)) && (desiredSize.Y > 1e-05f))
        scale = ::g::Uno::Float2__op_Division2(SnapSize(::g::Uno::Float2__op_Multiply2(scale, desiredSize)), desiredSize);

    return scale;
}

// public float2 ExpandFillSize(float2 size, Fuse.LayoutParams lp) [instance] :620
::g::Uno::Float2 SizingContainer::ExpandFillSize(::g::Uno::Float2 size, ::g::Fuse::LayoutParams lp)
{
    bool autoWidth = !lp.HasX();
    bool autoHeight = !lp.HasY();
    ::g::Uno::Float2 scale = CalcScale1(lp.Size(), size, autoWidth, autoHeight);
    ::g::Uno::Float2 res = ::g::Uno::Float2__op_Multiply2(scale, size);
    bool recalc = false;

    if (lp.HasMaxX() && (res.X > lp.MaxX()))
    {
        res.X = lp.MaxX();
        recalc = true;
        autoWidth = false;
    }

    if (lp.HasMaxY() && (res.Y > lp.MaxY()))
    {
        res.Y = lp.MaxY();
        recalc = true;
        autoHeight = false;
    }

    if (lp.HasMinX() && (res.X < lp.MinX()))
    {
        res.X = lp.MinX();
        recalc = true;
        autoWidth = false;
    }

    if (lp.HasMinY() && (res.Y < lp.MinY()))
    {
        res.Y = lp.MinY();
        recalc = true;
        autoHeight = false;
    }

    if (recalc)
    {
        scale = CalcScale1(res, size, autoWidth, autoHeight);
        res = ::g::Uno::Float2__op_Multiply2(scale, size);
    }

    return res;
}

// private float get_PaddingHeight() [instance] :396
float SizingContainer::PaddingHeight()
{
    return padding.Item(1) + padding.Item(3);
}

// private float get_PaddingWidth() [instance] :395
float SizingContainer::PaddingWidth()
{
    return padding.Item(0) + padding.Item(2);
}

// public bool SetAlignment(Fuse.Elements.Alignment a) [instance] :374
bool SizingContainer::SetAlignment(int a)
{
    if (a == align)
        return false;

    align = a;
    return true;
}

// public bool SetStretchDirection(Fuse.Elements.StretchDirection dir) [instance] :366
bool SizingContainer::SetStretchDirection(int dir)
{
    if (dir == stretchDirection)
        return false;

    stretchDirection = dir;
    return true;
}

// public bool SetStretchMode(Fuse.Elements.StretchMode mode) [instance] :358
bool SizingContainer::SetStretchMode(int mode)
{
    if (mode == stretchMode)
        return false;

    stretchMode = mode;
    return true;
}

// public bool SetStretchSizing(Fuse.Elements.StretchSizing ss) [instance] :382
bool SizingContainer::SetStretchSizing(int ss)
{
    if (ss == stretchSizing)
        return false;

    stretchSizing = ss;
    return true;
}

// private float2 SnapSize(float2 sz) [instance] :444
::g::Uno::Float2 SizingContainer::SnapSize(::g::Uno::Float2 sz)
{
    return ::g::Uno::Float2__op_Division1(::g::Uno::Math::Round4(::g::Uno::Float2__op_Multiply1(sz, absoluteZoom)), absoluteZoom);
}

// public generated SizingContainer New() [static] :351
SizingContainer* SizingContainer::New1()
{
    SizingContainer* obj3 = (SizingContainer*)uNew(SizingContainer_typeof());
    obj3->ctor_();
    return obj3;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\internal\$.uno
// ------------------------------------------------------------------------------------

// internal struct SkylineNode :1396
// {
static void SkylineNode_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Int2_typeof(), offsetof(::g::Fuse::Internal::SkylineNode, Position), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Internal::SkylineNode, Width), 0);
}

uStructType* SkylineNode_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(SkylineNode);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Internal.SkylineNode", options);
    type->fp_build_ = SkylineNode_build;
    return type;
}

// public SkylineNode(int2 position, int width) :1409
void SkylineNode__ctor__fn(SkylineNode* __this, ::g::Uno::Int2* position, int* width)
{
    __this->ctor_(*position, *width);
}

// public SkylineNode New(int2 position, int width) :1409
void SkylineNode__New1_fn(::g::Uno::Int2* position, int* width, SkylineNode* __retval)
{
    *__retval = SkylineNode__New1(*position, *width);
}

// public SkylineNode(int2 position, int width) [instance] :1409
void SkylineNode::ctor_(::g::Uno::Int2 position, int width)
{
    Position = position;
    Width = width;
}

// public SkylineNode New(int2 position, int width) [static] :1409
SkylineNode SkylineNode__New1(::g::Uno::Int2 position, int width)
{
    SkylineNode obj1;
    obj1.ctor_(position, width);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\internal\$.uno
// ------------------------------------------------------------------------------------

// public static class Statistics :1544
// {
static void Statistics_build(uType* type)
{
}

uClassType* Statistics_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Internal.Statistics", options);
    type->fp_build_ = Statistics_build;
    return type;
}

// public static double ContinuousFilterAlpha(double elapsed, double period) :1555
void Statistics__ContinuousFilterAlpha_fn(double* elapsed, double* period, double* __retval)
{
    *__retval = Statistics::ContinuousFilterAlpha(*elapsed, *period);
}

// public static double ContinuousFilterAlpha(double elapsed, double period) [static] :1555
double Statistics::ContinuousFilterAlpha(double elapsed, double period)
{
    return 1.0 - ::g::Uno::Math::Pow(2.7182818284590451, -elapsed / period);
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\internal\$.uno
// ------------------------------------------------------------------------------------

// internal static class SystemFont :1621
// {
static void SystemFont_build(uType* type)
{
}

uClassType* SystemFont_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Internal.SystemFont", options);
    type->fp_build_ = SystemFont_build;
    return type;
}

// public static Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> get_Default() :1625
void SystemFont__get_Default_fn(::g::Uno::Collections::List** __retval)
{
    *__retval = SystemFont::Default();
}

// public static Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> get_Default() [static] :1625
::g::Uno::Collections::List* SystemFont::Default()
{
    return ::g::Fuse::Internal::AndroidSystemFont::Default();
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\internal\$.uno
// ------------------------------------------------------------------------------------

// internal static class VectorUtil :1669
// {
static void VectorUtil_build(uType* type)
{
}

uClassType* VectorUtil_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Internal.VectorUtil", options);
    type->fp_build_ = VectorUtil_build;
    return type;
}

// public static float Angle(float2 a, float2 b) :1700
void VectorUtil__Angle_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, float* __retval)
{
    *__retval = VectorUtil::Angle(*a, *b);
}

// public static float DistanceLine(float4 line, float2 p) :1708
void VectorUtil__DistanceLine_fn(::g::Uno::Float4* line, ::g::Uno::Float2* p, float* __retval)
{
    *__retval = VectorUtil::DistanceLine(*line, *p);
}

// public static float2 Projection(float2 a, float2 b) :1674
void VectorUtil__Projection_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* __retval)
{
    *__retval = VectorUtil::Projection(*a, *b);
}

// public static float2 Rejection(float2 a, float2 b) :1690
void VectorUtil__Rejection_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* __retval)
{
    *__retval = VectorUtil::Rejection(*a, *b);
}

// public static float ScalarProjection(float2 a, float2 b) :1682
void VectorUtil__ScalarProjection_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, float* __retval)
{
    *__retval = VectorUtil::ScalarProjection(*a, *b);
}

// public static float Angle(float2 a, float2 b) [static] :1700
float VectorUtil::Angle(::g::Uno::Float2 a, ::g::Uno::Float2 b)
{
    return ::g::Uno::Math::Acos1(::g::Uno::Vector::Dot(a, b) / (::g::Uno::Vector::Length(a) * ::g::Uno::Vector::Length(b)));
}

// public static float DistanceLine(float4 line, float2 p) [static] :1708
float VectorUtil::DistanceLine(::g::Uno::Float4 line, ::g::Uno::Float2 p)
{
    return ::g::Uno::Vector::Length(VectorUtil::Rejection(::g::Uno::Float2__op_Subtraction2(p, ::g::Uno::Float2__New2(line.X, line.Y)), ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(line.Z, line.W), ::g::Uno::Float2__New2(line.X, line.Y))));
}

// public static float2 Projection(float2 a, float2 b) [static] :1674
::g::Uno::Float2 VectorUtil::Projection(::g::Uno::Float2 a, ::g::Uno::Float2 b)
{
    return ::g::Uno::Float2__op_Multiply(::g::Uno::Vector::Dot(a, b) / ::g::Uno::Vector::Dot(b, b), b);
}

// public static float2 Rejection(float2 a, float2 b) [static] :1690
::g::Uno::Float2 VectorUtil::Rejection(::g::Uno::Float2 a, ::g::Uno::Float2 b)
{
    ::g::Uno::Float2 a1 = VectorUtil::Projection(a, b);
    return ::g::Uno::Float2__op_Subtraction2(a, a1);
}

// public static float ScalarProjection(float2 a, float2 b) [static] :1682
float VectorUtil::ScalarProjection(::g::Uno::Float2 a, ::g::Uno::Float2 b)
{
    return ::g::Uno::Vector::Dot(a, b) / ::g::Uno::Vector::Length(b);
}
// }

}}} // ::g::Fuse::Internal
