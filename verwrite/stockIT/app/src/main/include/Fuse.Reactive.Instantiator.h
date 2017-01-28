// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Reactive\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.ITemplateObserver.h>
#include <Fuse.Scripting.IObserver.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Reactive{struct Instantiator;}}}
namespace g{namespace Fuse{namespace Scripting{struct ListMirror;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace UX{struct Template;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public class Instantiator :856
// {
struct Instantiator_type : ::g::Fuse::Node_type
{
    ::g::Fuse::Scripting::IObserver interface4;
    ::g::Fuse::ITemplateObserver interface5;
};

Instantiator_type* Instantiator_typeof();
void Instantiator__ctor_3_fn(Instantiator* __this);
void Instantiator__AddTemplate_fn(Instantiator* __this, uObject* data, ::g::Uno::UX::Template* f, ::g::Uno::Collections::List* newElements);
void Instantiator__FuseITemplateObserverOnTemplatesChangedWileRooted_fn(Instantiator* __this);
void Instantiator__FuseScriptingIObserverOnAdd_fn(Instantiator* __this, uObject* addedValue);
void Instantiator__FuseScriptingIObserverOnClear_fn(Instantiator* __this);
void Instantiator__FuseScriptingIObserverOnInsertAt_fn(Instantiator* __this, int* index, uObject* value);
void Instantiator__FuseScriptingIObserverOnNewAll_fn(Instantiator* __this, ::g::Fuse::Scripting::ListMirror* values);
void Instantiator__FuseScriptingIObserverOnNewAt_fn(Instantiator* __this, int* index, uObject* value);
void Instantiator__FuseScriptingIObserverOnRemoveAt_fn(Instantiator* __this, int* index);
void Instantiator__FuseScriptingIObserverOnSet_fn(Instantiator* __this, uObject* newValue);
void Instantiator__GetData_fn(Instantiator* __this, int* dataIndex, uObject** __retval);
void Instantiator__GetDataCount_fn(Instantiator* __this, int* __retval);
void Instantiator__GetImplicitDataForChild_fn(Instantiator* __this, ::g::Fuse::Node* n, ::g::Uno::Collections::List* result);
void Instantiator__GetLastNodeFromIndex_fn(Instantiator* __this, int* windowIndex, ::g::Fuse::Node** __retval);
void Instantiator__GetLastNodeInGroup_fn(Instantiator* __this, ::g::Fuse::Node** __retval);
void Instantiator__GetMatchKey_fn(Instantiator* __this, uObject* data, uString** __retval);
void Instantiator__get_HasLimit_fn(Instantiator* __this, bool* __retval);
void Instantiator__InsertNew_fn(Instantiator* __this, int* dataIndex);
void Instantiator__get_Limit_fn(Instantiator* __this, int* __retval);
void Instantiator__set_Limit_fn(Instantiator* __this, int* value);
void Instantiator__get_Offset_fn(Instantiator* __this, int* __retval);
void Instantiator__set_Offset_fn(Instantiator* __this, int* value);
void Instantiator__OnItemsChanged_fn(Instantiator* __this);
void Instantiator__OnRooted_fn(Instantiator* __this);
void Instantiator__OnTemplatesChanged_fn(Instantiator* __this, ::g::Uno::UX::Template* factory);
void Instantiator__OnUnrooted_fn(Instantiator* __this);
void Instantiator__RemoveAll_fn(Instantiator* __this);
void Instantiator__RemoveAt_fn(Instantiator* __this, int* dataIndex);
void Instantiator__ReplaceAll_fn(Instantiator* __this, uArray* dcs);
void Instantiator__Repopulate_fn(Instantiator* __this);
void Instantiator__SetValid_fn(Instantiator* __this);
void Instantiator__get_TemplateKey_fn(Instantiator* __this, uString** __retval);
void Instantiator__set_TemplateKey_fn(Instantiator* __this, uString* value);
void Instantiator__get_Templates_fn(Instantiator* __this, uObject** __retval);
void Instantiator__get_TemplateSource_fn(Instantiator* __this, ::g::Fuse::Visual** __retval);
void Instantiator__set_TemplateSource_fn(Instantiator* __this, ::g::Fuse::Visual* value);
void Instantiator__TrimAndPad_fn(Instantiator* __this);

struct Instantiator : ::g::Fuse::Behavior
{
    uStrong< ::g::Uno::Collections::Dictionary*> _dataMap;
    bool _hasLimit;
    uStrong<uObject*> _items;
    int _limit;
    bool _listening;
    uStrong<uString*> _matchKey;
    uStrong< ::g::Uno::Collections::List*> _nodes;
    int _offset;
    uStrong<uObject*> _subscription;
    uStrong<uObject*> _templates;
    uStrong<uString*> _TemplateKey;
    uStrong< ::g::Fuse::Visual*> _TemplateSource;

    void ctor_3();
    void AddTemplate(uObject* data, ::g::Uno::UX::Template* f, ::g::Uno::Collections::List* newElements);
    uObject* GetData(int dataIndex);
    int GetDataCount();
    ::g::Fuse::Node* GetLastNodeFromIndex(int windowIndex);
    uString* GetMatchKey(uObject* data);
    bool HasLimit();
    void InsertNew(int dataIndex);
    int Limit();
    void Limit(int value);
    int Offset();
    void Offset(int value);
    void OnItemsChanged();
    void OnTemplatesChanged(::g::Uno::UX::Template* factory);
    void RemoveAll();
    void RemoveAt(int dataIndex);
    void ReplaceAll(uArray* dcs);
    void Repopulate();
    void SetValid();
    uString* TemplateKey();
    void TemplateKey(uString* value);
    uObject* Templates();
    ::g::Fuse::Visual* TemplateSource();
    void TemplateSource(::g::Fuse::Visual* value);
    void TrimAndPad();
};
// }

}}} // ::g::Fuse::Reactive
