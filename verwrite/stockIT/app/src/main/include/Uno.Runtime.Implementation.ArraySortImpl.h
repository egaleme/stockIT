// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\runtime\implementation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Runtime{namespace Implementation{struct ArraySortImpl;}}}}

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{

// internal static class ArraySortImpl :68
// {
uClassType* ArraySortImpl_typeof();
void ArraySortImpl__QuickSort_fn(uType* __type, uArray* data, uDelegate* comparison, int* left, int* right);
void ArraySortImpl__ShellSort_fn(uType* __type, uArray* data, uDelegate* comparison, int* left, int* right);
void ArraySortImpl__Sort_fn(uType* __type, uArray* elements, int* index, int* length, uDelegate* comparison);
void ArraySortImpl__Swap_fn(uType* __type, uArray* data, int* a, int* b);
void ArraySortImpl__ValidateArguments_fn(uType* __type, uArray* elements, int* index, int* length, uDelegate* comparison);

struct ArraySortImpl : uObject
{
    static void QuickSort(uType* __type, uArray* data, uDelegate* comparison, int left, int right);
    static void ShellSort(uType* __type, uArray* data, uDelegate* comparison, int left, int right);
    static void Sort(uType* __type, uArray* elements, int index, int length, uDelegate* comparison);
    static void Swap(uType* __type, uArray* data, int a, int b);
    static void ValidateArguments(uType* __type, uArray* elements, int index, int length, uDelegate* comparison);
};
// }

}}}} // ::g::Uno::Runtime::Implementation
