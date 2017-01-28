// This file was generated based on C:\stockit\stockit\stockIT.unoproj.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.stockIT_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[8];

namespace g{

// public static generated class stockIT_bundle :0
// {
// static stockIT_bundle() :0
static void stockIT_bundle__cctor__fn(uType* __type)
{
    stockIT_bundle::arrowd81ec3f0_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"stockIT"*/]))->GetFile(::STRINGS[1/*"arrow-226e9...*/]);
    stockIT_bundle::Checkmark137b59b0_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"stockIT"*/]))->GetFile(::STRINGS[2/*"checkmark-2...*/]);
    stockIT_bundle::createitemc44491ab_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"stockIT"*/]))->GetFile(::STRINGS[3/*"createitem-...*/]);
    stockIT_bundle::directionLeft29fc53ef_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"stockIT"*/]))->GetFile(::STRINGS[4/*"directionle...*/]);
    stockIT_bundle::home5bc7a0dd_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"stockIT"*/]))->GetFile(::STRINGS[5/*"home-8b1314...*/]);
    stockIT_bundle::loginfc615a49_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"stockIT"*/]))->GetFile(::STRINGS[6/*"login-0a65f...*/]);
    stockIT_bundle::updateitem6b24dcbc_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"stockIT"*/]))->GetFile(::STRINGS[7/*"updateitem-...*/]);
}

static void stockIT_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("stockIT");
    ::STRINGS[1] = uString::Const("arrow-226e9d61.png");
    ::STRINGS[2] = uString::Const("checkmark-240f787b.png");
    ::STRINGS[3] = uString::Const("createitem-c1c9b13a.js");
    ::STRINGS[4] = uString::Const("directionleft-a3853f46.png");
    ::STRINGS[5] = uString::Const("home-8b13146a.js");
    ::STRINGS[6] = uString::Const("login-0a65f54c.js");
    ::STRINGS[7] = uString::Const("updateitem-b0ba74b7.js");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::stockIT_bundle::arrowd81ec3f0_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::stockIT_bundle::Checkmark137b59b0_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::stockIT_bundle::createitemc44491ab_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::stockIT_bundle::directionLeft29fc53ef_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::stockIT_bundle::home5bc7a0dd_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::stockIT_bundle::loginfc615a49_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::stockIT_bundle::updateitem6b24dcbc_, uFieldFlagsStatic);
}

uClassType* stockIT_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("stockIT_bundle", options);
    type->fp_build_ = stockIT_bundle_build;
    type->fp_cctor_ = stockIT_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> stockIT_bundle::arrowd81ec3f0_;
uSStrong< ::g::Uno::IO::BundleFile*> stockIT_bundle::Checkmark137b59b0_;
uSStrong< ::g::Uno::IO::BundleFile*> stockIT_bundle::createitemc44491ab_;
uSStrong< ::g::Uno::IO::BundleFile*> stockIT_bundle::directionLeft29fc53ef_;
uSStrong< ::g::Uno::IO::BundleFile*> stockIT_bundle::home5bc7a0dd_;
uSStrong< ::g::Uno::IO::BundleFile*> stockIT_bundle::loginfc615a49_;
uSStrong< ::g::Uno::IO::BundleFile*> stockIT_bundle::updateitem6b24dcbc_;
// }

} // ::g
