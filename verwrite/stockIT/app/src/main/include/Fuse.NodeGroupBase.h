// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct NodeGroupBase;}}
namespace g{namespace Uno{namespace UX{struct Resource;}}}

namespace g{
namespace Fuse{

// public abstract class NodeGroupBase :4099
// {
::g::Fuse::Node_type* NodeGroupBase_typeof();
void NodeGroupBase__ctor_3_fn(NodeGroupBase* __this);
void NodeGroupBase__AddContent_fn(NodeGroupBase* __this);
void NodeGroupBase__get_Nodes_fn(NodeGroupBase* __this, uObject** __retval);
void NodeGroupBase__OnDataContextChanged_fn(NodeGroupBase* __this);
void NodeGroupBase__OnNodeAdded_fn(NodeGroupBase* __this, ::g::Fuse::Node* n);
void NodeGroupBase__OnNodeRemoved_fn(NodeGroupBase* __this, ::g::Fuse::Node* n);
void NodeGroupBase__OnRooted_fn(NodeGroupBase* __this);
void NodeGroupBase__OnUnrooted_fn(NodeGroupBase* __this);
void NodeGroupBase__RemoveContent_fn(NodeGroupBase* __this);
void NodeGroupBase__get_UseContent_fn(NodeGroupBase* __this, bool* __retval);
void NodeGroupBase__set_UseContent_fn(NodeGroupBase* __this, bool* value);

struct NodeGroupBase : ::g::Fuse::Behavior
{
    bool _contentAdded;
    uStrong<uObject*> _nodes;
    uStrong<uObject*> _resources;
    bool _useContent;

    void ctor_3();
    void AddContent();
    uObject* Nodes();
    void OnNodeAdded(::g::Fuse::Node* n);
    void OnNodeRemoved(::g::Fuse::Node* n);
    void RemoveContent();
    bool UseContent();
    void UseContent(bool value);
};
// }

}} // ::g::Fuse
