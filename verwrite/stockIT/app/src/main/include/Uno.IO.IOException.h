// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\io\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Uno{namespace IO{struct IOException;}}}

namespace g{
namespace Uno{
namespace IO{

// public class IOException :2443
// {
::g::Uno::Exception_type* IOException_typeof();
void IOException__ctor_3_fn(IOException* __this, uString* message);
void IOException__New4_fn(uString* message, IOException** __retval);

struct IOException : ::g::Uno::Exception
{
    void ctor_3(uString* message);
    static IOException* New4(uString* message);
};
// }

}}} // ::g::Uno::IO
