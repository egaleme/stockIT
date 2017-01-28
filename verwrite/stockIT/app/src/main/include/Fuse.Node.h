// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct Properties;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{

// public interfacemodifiers class Node :3877
// {
struct Node_type : uType
{
    ::g::Uno::Collections::IList interface0;
    ::g::Fuse::Scripting::IScriptObject interface1;
    ::g::Uno::Collections::ICollection interface2;
    ::g::Uno::Collections::IEnumerable interface3;
    void(*fp_AppendSubtreeData)(::g::Fuse::Node*, ::g::Uno::Collections::List*);
    void(*fp_GetImplicitDataForChild)(::g::Fuse::Node*, ::g::Fuse::Node*, ::g::Uno::Collections::List*);
    void(*fp_GetLastNodeInGroup)(::g::Fuse::Node*, ::g::Fuse::Node**);
    void(*fp_OnDataContextChanged)(::g::Fuse::Node*);
    void(*fp_OnRooted)(::g::Fuse::Node*);
    void(*fp_OnUnrooted)(::g::Fuse::Node*);
    void(*fp_SoftDispose)(::g::Fuse::Node*);
    void(*fp_TryGetResource)(::g::Fuse::Node*, uString*, uDelegate*, uObject**, bool*);
    void(*fp_VisitSubtree)(::g::Fuse::Node*, uDelegate*);
};

Node_type* Node_typeof();
void Node__ctor_1_fn(Node* __this);
void Node___findData_fn(::g::Fuse::Scripting::Context* c, Node* n, uArray* args);
void Node__Add_fn(Node* __this, ::g::Fuse::Binding* item);
void Node__AppendSubtreeData_fn(Node* __this, ::g::Uno::Collections::List* result);
void Node__get_Binding_fn(Node* __this, ::g::Fuse::Binding** __retval);
void Node__get_BindingList_fn(Node* __this, ::g::Uno::Collections::List** __retval);
void Node__get_Bindings_fn(Node* __this, uObject** __retval);
void Node__CaptureRooting_fn(bool* __retval);
void Node__get_ContextParent_fn(Node* __this, Node** __retval);
void Node__add_DataContextChanged_fn(Node* __this, uDelegate* value);
void Node__remove_DataContextChanged_fn(Node* __this, uDelegate* value);
void Node__DistanceTo_fn(Node* __this, Node* obj, int* reference, int* __retval);
void Node__FindNodeByName_fn(Node* __this, ::g::Uno::UX::Selector* name, uDelegate* acceptor, Node** __retval);
void Node__FuseScriptingIScriptObjectget_ScriptContext_fn(Node* __this, ::g::Fuse::Scripting::Context** __retval);
void Node__FuseScriptingIScriptObjectget_ScriptObject_fn(Node* __this, uObject** __retval);
void Node__FuseScriptingIScriptObjectSetScriptObject_fn(Node* __this, uObject* obj, ::g::Fuse::Scripting::Context* context);
void Node__GetFirstData_fn(Node* __this, uObject** __retval);
void Node__GetImplicitDataForChild_fn(Node* __this, Node* child, ::g::Uno::Collections::List* result);
void Node__GetLastNodeInGroup_fn(Node* __this, Node** __retval);
void Node__HasInSubtree_fn(Node* __this, Node* c, bool* __retval);
void Node__Insert_fn(Node* __this, int* index, ::g::Fuse::Binding* item);
void Node__get_IsPreservedRootFrame_fn(Node* __this, bool* __retval);
void Node__IsRootCapture_fn(int* index, bool* __retval);
void Node__get_IsRootingCompleted_fn(Node* __this, bool* __retval);
void Node__get_IsRootingStarted_fn(Node* __this, bool* __retval);
void Node__get_IsUnrooted_fn(Node* __this, bool* __retval);
void Node__get_IsUnrooting_fn(Node* __this, bool* __retval);
void Node__MakeBindingList_fn(Node* __this, ::g::Fuse::Binding* newItem);
void Node__get_Name_fn(Node* __this, ::g::Uno::UX::Selector* __retval);
void Node__set_Name_fn(Node* __this, ::g::Uno::UX::Selector* value);
void Node__OnDataContextChanged_fn(Node* __this);
void Node__OnRooted_fn(Node* __this);
void Node__OnUnrooted_fn(Node* __this);
void Node__get_Parent_fn(Node* __this, ::g::Fuse::Visual** __retval);
void Node__get_Properties_fn(Node* __this, ::g::Fuse::Properties** __retval);
void Node__Relate_fn(::g::Fuse::Visual* parent, Node* child);
void Node__ReleaseRooting_fn(bool* captured);
void Node__Remove_fn(Node* __this, ::g::Fuse::Binding* item, bool* __retval);
void Node__Root_fn(Node* __this, ::g::Fuse::Binding* b);
void Node__RootBindings_fn(Node* __this);
void Node__get_RootCaptureIndex_fn(int* __retval);
void Node__add_RootingCompleted_fn(Node* __this, uDelegate* value);
void Node__remove_RootingCompleted_fn(Node* __this, uDelegate* value);
void Node__RootInternal_fn(Node* __this, ::g::Fuse::Visual* parent);
void Node__RootInternalImpl_fn(Node* __this, ::g::Fuse::Visual* parent);
void Node__SoftDispose_fn(Node* __this);
void Node__ToString_fn(Node* __this, uString** __retval);
void Node__TryFindData_fn(uObject* obj, uString* key, uObject** __retval);
void Node__TryGetResource_fn(Node* __this, uString* key, uDelegate* acceptor, uObject** resource, bool* __retval);
void Node__UnoCollectionsICollectionFuseBindingClear_fn(Node* __this);
void Node__UnoCollectionsICollectionFuseBindingContains_fn(Node* __this, ::g::Fuse::Binding* item, bool* __retval);
void Node__UnoCollectionsICollectionFuseBindingget_Count_fn(Node* __this, int* __retval);
void Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn(Node* __this, uObject** __retval);
void Node__UnoCollectionsIListFuseBindingget_Item_fn(Node* __this, int* index, ::g::Fuse::Binding** __retval);
void Node__UnoCollectionsIListFuseBindingRemoveAt_fn(Node* __this, int* index);
void Node__Unrelate_fn(::g::Fuse::Visual* parent, Node* child);
void Node__Unroot_fn(Node* __this, ::g::Fuse::Binding* b);
void Node__UnrootBindings_fn(Node* __this);
void Node__add_Unrooted_fn(Node* __this, uDelegate* value);
void Node__remove_Unrooted_fn(Node* __this, uDelegate* value);
void Node__UnrootInternal_fn(Node* __this);
void Node__VisitSubtree_fn(Node* __this, uDelegate* action);

struct Node : ::g::Uno::UX::PropertyObject
{
    uStrong<uObject*> _bindings;
    static uSStrong<uObject*> _emptyBindings_;
    static uSStrong<uObject*>& _emptyBindings() { return Node_typeof()->Init(), _emptyBindings_; }
    static bool _hasRootCapture_;
    static bool& _hasRootCapture() { return Node_typeof()->Init(), _hasRootCapture_; }
    ::g::Uno::UX::Selector _name;
    uStrong< ::g::Fuse::Visual*> _parent;
    int _preservedRootFrame;
    uStrong< ::g::Fuse::Properties*> _properties;
    static int _rootCaptureIndex_;
    static int& _rootCaptureIndex() { return Node_typeof()->Init(), _rootCaptureIndex_; }
    int _rootStage;
    uStrong< ::g::Fuse::Scripting::Context*> _scriptContext;
    uStrong<uObject*> _scriptObject;
    uWeak<Node*> OverrideContextParent;
    uStrong<uDelegate*> DataContextChanged1;
    uStrong<uDelegate*> RootingCompleted1;
    uStrong<uDelegate*> Unrooted1;

    void ctor_1();
    void Add(::g::Fuse::Binding* item);
    void AppendSubtreeData(::g::Uno::Collections::List* result) { (((Node_type*)__type)->fp_AppendSubtreeData)(this, result); }
    ::g::Fuse::Binding* Binding();
    ::g::Uno::Collections::List* BindingList();
    uObject* Bindings();
    Node* ContextParent();
    void add_DataContextChanged(uDelegate* value);
    void remove_DataContextChanged(uDelegate* value);
    int DistanceTo(Node* obj, int reference);
    Node* FindNodeByName(::g::Uno::UX::Selector name, uDelegate* acceptor);
    uObject* GetFirstData();
    void GetImplicitDataForChild(Node* child, ::g::Uno::Collections::List* result) { (((Node_type*)__type)->fp_GetImplicitDataForChild)(this, child, result); }
    Node* GetLastNodeInGroup() { Node* __retval; return (((Node_type*)__type)->fp_GetLastNodeInGroup)(this, &__retval), __retval; }
    bool HasInSubtree(Node* c);
    void Insert(int index, ::g::Fuse::Binding* item);
    bool IsPreservedRootFrame();
    bool IsRootingCompleted();
    bool IsRootingStarted();
    bool IsUnrooted();
    bool IsUnrooting();
    void MakeBindingList(::g::Fuse::Binding* newItem);
    ::g::Uno::UX::Selector Name();
    void Name(::g::Uno::UX::Selector value);
    void OnDataContextChanged() { (((Node_type*)__type)->fp_OnDataContextChanged)(this); }
    void OnRooted() { (((Node_type*)__type)->fp_OnRooted)(this); }
    void OnUnrooted() { (((Node_type*)__type)->fp_OnUnrooted)(this); }
    ::g::Fuse::Visual* Parent();
    ::g::Fuse::Properties* Properties();
    bool Remove(::g::Fuse::Binding* item);
    void Root(::g::Fuse::Binding* b);
    void RootBindings();
    void add_RootingCompleted(uDelegate* value);
    void remove_RootingCompleted(uDelegate* value);
    void RootInternal(::g::Fuse::Visual* parent);
    void RootInternalImpl(::g::Fuse::Visual* parent);
    void SoftDispose() { (((Node_type*)__type)->fp_SoftDispose)(this); }
    bool TryGetResource(uString* key, uDelegate* acceptor, uObject** resource) { bool __retval; return (((Node_type*)__type)->fp_TryGetResource)(this, key, acceptor, resource, &__retval), __retval; }
    void Unroot(::g::Fuse::Binding* b);
    void UnrootBindings();
    void add_Unrooted(uDelegate* value);
    void remove_Unrooted(uDelegate* value);
    void UnrootInternal();
    void VisitSubtree(uDelegate* action) { (((Node_type*)__type)->fp_VisitSubtree)(this, action); }
    static void _findData(::g::Fuse::Scripting::Context* c, Node* n, uArray* args);
    static void AppendSubtreeData(Node* __this, ::g::Uno::Collections::List* result) { Node__AppendSubtreeData_fn(__this, result); }
    static bool CaptureRooting();
    static void GetImplicitDataForChild(Node* __this, Node* child, ::g::Uno::Collections::List* result) { Node__GetImplicitDataForChild_fn(__this, child, result); }
    static Node* GetLastNodeInGroup(Node* __this) { Node* __retval; return Node__GetLastNodeInGroup_fn(__this, &__retval), __retval; }
    static bool IsRootCapture(int index);
    static void OnDataContextChanged(Node* __this) { Node__OnDataContextChanged_fn(__this); }
    static void OnRooted(Node* __this) { Node__OnRooted_fn(__this); }
    static void OnUnrooted(Node* __this) { Node__OnUnrooted_fn(__this); }
    static void Relate(::g::Fuse::Visual* parent, Node* child);
    static void ReleaseRooting(bool captured);
    static void SoftDispose(Node* __this) { Node__SoftDispose_fn(__this); }
    static uObject* TryFindData(uObject* obj, uString* key);
    static bool TryGetResource(Node* __this, uString* key, uDelegate* acceptor, uObject** resource) { bool __retval; return Node__TryGetResource_fn(__this, key, acceptor, resource, &__retval), __retval; }
    static void Unrelate(::g::Fuse::Visual* parent, Node* child);
    static void VisitSubtree(Node* __this, uDelegate* action) { Node__VisitSubtree_fn(__this, action); }
    static int RootCaptureIndex();
};
// }

}} // ::g::Fuse
