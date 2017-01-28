// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Elements\0.43.11\internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Internal{struct ImageContainer;}}}
namespace g{namespace Fuse{namespace Internal{struct SizingContainer;}}}
namespace g{namespace Fuse{namespace Resources{struct ImageSource;}}}
namespace g{namespace Fuse{namespace Resources{struct ImageSourceErrorArgs;}}}
namespace g{namespace Fuse{namespace Resources{struct MemoryPolicy;}}}
namespace g{namespace Uno{namespace Collections{struct ObservableList;}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}

namespace g{
namespace Fuse{
namespace Internal{

// internal sealed class ImageContainer :21
// {
uType* ImageContainer_typeof();
void ImageContainer__ctor__fn(ImageContainer* __this, uObject* owner);
void ImageContainer__CheckPinning_fn(ImageContainer* __this);
void ImageContainer__CreateMultiDensitySource_fn(ImageContainer* __this);
void ImageContainer__get_Density_fn(ImageContainer* __this, float* __retval);
void ImageContainer__set_Density_fn(ImageContainer* __this, float* value);
void ImageContainer__get_File_fn(ImageContainer* __this, ::g::Uno::UX::FileSource** __retval);
void ImageContainer__set_File_fn(ImageContainer* __this, ::g::Uno::UX::FileSource* value);
void ImageContainer__get_Files_fn(ImageContainer* __this, uObject** __retval);
void ImageContainer__GetTexture_fn(ImageContainer* __this, ::g::Uno::Graphics::Texture2D** __retval);
void ImageContainer__get_IsRooted_fn(ImageContainer* __this, bool* __retval);
void ImageContainer__set_IsRooted_fn(ImageContainer* __this, bool* value);
void ImageContainer__get_IsVisible_fn(ImageContainer* __this, bool* __retval);
void ImageContainer__set_IsVisible_fn(ImageContainer* __this, bool* value);
void ImageContainer__get_MemoryPolicy_fn(ImageContainer* __this, ::g::Fuse::Resources::MemoryPolicy** __retval);
void ImageContainer__set_MemoryPolicy_fn(ImageContainer* __this, ::g::Fuse::Resources::MemoryPolicy* value);
void ImageContainer__New1_fn(uObject* owner, ImageContainer** __retval);
void ImageContainer__OnFileAdded_fn(ImageContainer* __this, ::g::Uno::UX::FileSource* file);
void ImageContainer__OnFileRemoved_fn(ImageContainer* __this, ::g::Uno::UX::FileSource* file);
void ImageContainer__OnParamChanged_fn(ImageContainer* __this);
void ImageContainer__OnSizingChanged_fn(ImageContainer* __this);
void ImageContainer__OnSourceChanged_fn(ImageContainer* __this, uObject* s, uObject* a);
void ImageContainer__OnSourceError_fn(ImageContainer* __this, uObject* s, ::g::Fuse::Resources::ImageSourceErrorArgs* args);
void ImageContainer__add_ParamChanged_fn(ImageContainer* __this, uDelegate* value);
void ImageContainer__remove_ParamChanged_fn(ImageContainer* __this, uDelegate* value);
void ImageContainer__ReapplyOptions_fn(ImageContainer* __this, ::g::Fuse::Resources::ImageSource* src);
void ImageContainer__ReleaseSource_fn(ImageContainer* __this);
void ImageContainer__get_ResampleMode_fn(ImageContainer* __this, int* __retval);
void ImageContainer__set_ResampleMode_fn(ImageContainer* __this, int* value);
void ImageContainer__get_Source_fn(ImageContainer* __this, ::g::Fuse::Resources::ImageSource** __retval);
void ImageContainer__set_Source_fn(ImageContainer* __this, ::g::Fuse::Resources::ImageSource* value);
void ImageContainer__add_SourceChanged_fn(ImageContainer* __this, uDelegate* value);
void ImageContainer__remove_SourceChanged_fn(ImageContainer* __this, uDelegate* value);
void ImageContainer__add_SourceError_fn(ImageContainer* __this, uDelegate* value);
void ImageContainer__remove_SourceError_fn(ImageContainer* __this, uDelegate* value);
void ImageContainer__get_StretchMode_fn(ImageContainer* __this, int* __retval);
void ImageContainer__set_StretchMode_fn(ImageContainer* __this, int* value);

struct ImageContainer : uObject
{
    float _density;
    uStrong< ::g::Uno::Collections::ObservableList*> _files;
    bool _isRooted;
    bool _isVisible;
    uStrong< ::g::Fuse::Resources::MemoryPolicy*> _memoryPolicy;
    uWeak<uObject*> _owner;
    int _resampleMode;
    uStrong< ::g::Fuse::Resources::ImageSource*> _source;
    bool _sourcePinned;
    uStrong< ::g::Fuse::Internal::SizingContainer*> Sizing;
    uStrong<uDelegate*> ParamChanged1;
    uStrong<uDelegate*> SourceChanged1;
    uStrong<uDelegate*> SourceError1;

    void ctor_(uObject* owner);
    void CheckPinning();
    void CreateMultiDensitySource();
    float Density();
    void Density(float value);
    ::g::Uno::UX::FileSource* File();
    void File(::g::Uno::UX::FileSource* value);
    uObject* Files();
    ::g::Uno::Graphics::Texture2D* GetTexture();
    bool IsRooted();
    void IsRooted(bool value);
    bool IsVisible();
    void IsVisible(bool value);
    ::g::Fuse::Resources::MemoryPolicy* MemoryPolicy();
    void MemoryPolicy(::g::Fuse::Resources::MemoryPolicy* value);
    void OnFileAdded(::g::Uno::UX::FileSource* file);
    void OnFileRemoved(::g::Uno::UX::FileSource* file);
    void OnParamChanged();
    void OnSizingChanged();
    void OnSourceChanged(uObject* s, uObject* a);
    void OnSourceError(uObject* s, ::g::Fuse::Resources::ImageSourceErrorArgs* args);
    void add_ParamChanged(uDelegate* value);
    void remove_ParamChanged(uDelegate* value);
    void ReapplyOptions(::g::Fuse::Resources::ImageSource* src);
    void ReleaseSource();
    int ResampleMode();
    void ResampleMode(int value);
    ::g::Fuse::Resources::ImageSource* Source();
    void Source(::g::Fuse::Resources::ImageSource* value);
    void add_SourceChanged(uDelegate* value);
    void remove_SourceChanged(uDelegate* value);
    void add_SourceError(uDelegate* value);
    void remove_SourceError(uDelegate* value);
    int StretchMode();
    void StretchMode(int value);
    static ImageContainer* New1(uObject* owner);
};
// }

}}} // ::g::Fuse::Internal
