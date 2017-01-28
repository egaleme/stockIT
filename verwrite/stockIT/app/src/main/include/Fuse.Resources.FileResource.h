// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.FileSource.h>
namespace g{namespace Fuse{namespace Resources{struct FileResource;}}}
namespace g{namespace Uno{namespace IO{struct Stream;}}}

namespace g{
namespace Fuse{
namespace Resources{

// public sealed class FileResource :163
// {
::g::Uno::UX::FileSource_type* FileResource_typeof();
void FileResource__OpenRead_fn(FileResource* __this, ::g::Uno::IO::Stream** __retval);

struct FileResource : ::g::Uno::UX::FileSource
{
    uStrong< ::g::Uno::UX::FileSource*> _file;
};
// }

}}} // ::g::Fuse::Resources
