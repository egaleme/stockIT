// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Panels\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct Grid;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Layouts{struct GridLayout;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class Grid :556
// {
::g::Fuse::Controls::Control_type* Grid_typeof();
void Grid__ctor_7_fn(Grid* __this);
void Grid__get_ColumnCount_fn(Grid* __this, int* __retval);
void Grid__set_ColumnCount_fn(Grid* __this, int* value);
void Grid__get_Columns_fn(Grid* __this, uString** __retval);
void Grid__set_Columns_fn(Grid* __this, uString* value);
void Grid__New4_fn(Grid** __retval);
void Grid__get_RowCount_fn(Grid* __this, int* __retval);
void Grid__set_RowCount_fn(Grid* __this, int* value);
void Grid__get_Rows_fn(Grid* __this, uString** __retval);
void Grid__set_Rows_fn(Grid* __this, uString* value);
void Grid__SetColumn_fn(::g::Fuse::Elements::Element* elm, int* col);
void Grid__SetRow_fn(::g::Fuse::Elements::Element* elm, int* row);

struct Grid : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Fuse::Layouts::GridLayout*> _gridLayout;

    void ctor_7();
    int ColumnCount();
    void ColumnCount(int value);
    uString* Columns();
    void Columns(uString* value);
    int RowCount();
    void RowCount(int value);
    uString* Rows();
    void Rows(uString* value);
    static Grid* New4();
    static void SetColumn(::g::Fuse::Elements::Element* elm, int col);
    static void SetRow(::g::Fuse::Elements::Element* elm, int row);
};
// }

}}} // ::g::Fuse::Controls
