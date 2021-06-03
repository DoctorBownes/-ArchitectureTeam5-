#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2 (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000004 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000005 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000007 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000008 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000009 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000B System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000C System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000E System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000000F TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000010 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000012 TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000013 TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000014 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000015 TSource System.Linq.Enumerable::ElementAt(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x00000016 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000017 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000018 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000019 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001A System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x0000001B System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000001C System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x0000001D TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x0000001E System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000001F System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000020 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000021 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000022 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000023 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000024 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000025 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000026 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000027 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000028 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000029 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x0000002A System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x0000002B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002D System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x0000002E System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000002F System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000030 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000031 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000032 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000033 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000034 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000035 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000036 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000037 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000038 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000039 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x0000003A System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x0000003B System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003D System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003E System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000003F System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000040 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000041 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000042 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000043 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000044 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000045 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000046 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000047 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000048 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000049 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x0000004A TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x0000004B System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x0000004C System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x0000004D System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x0000004E System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x0000004F System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x00000050 TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000051 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x00000052 System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000053 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000054 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000055 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x00000056 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x00000057 System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x00000058 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x00000059 TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000005A System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x0000005B System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x0000005C System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000005D System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000005E System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000005F System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x00000060 System.Boolean System.Linq.Set`1::Add(TElement)
// 0x00000061 System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x00000062 System.Void System.Linq.Set`1::Resize()
// 0x00000063 System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x00000064 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x00000065 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000066 System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000067 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000068 System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x00000069 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x0000006A System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x0000006B System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x0000006C TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x0000006D System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x0000006E System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x0000006F System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000070 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000071 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x00000072 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x00000073 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x00000074 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x00000075 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x00000076 System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x00000077 System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x00000078 System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x00000079 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x0000007A TElement[] System.Linq.Buffer`1::ToArray()
// 0x0000007B System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x0000007C System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x0000007D System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x0000007E System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x0000007F System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x00000080 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x00000081 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x00000082 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x00000083 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x00000084 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x00000085 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x00000086 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000087 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000088 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000089 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x0000008A System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x0000008B System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x0000008C System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x0000008D System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x0000008E System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x0000008F System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x00000090 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x00000091 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x00000092 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x00000093 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x00000094 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x00000095 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x00000096 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x00000097 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[151] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[151] = 
{
	3811,
	3811,
	3939,
	3939,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[50] = 
{
	{ 0x02000004, { 77, 4 } },
	{ 0x02000005, { 81, 9 } },
	{ 0x02000006, { 92, 7 } },
	{ 0x02000007, { 101, 10 } },
	{ 0x02000008, { 113, 11 } },
	{ 0x02000009, { 127, 9 } },
	{ 0x0200000A, { 139, 12 } },
	{ 0x0200000B, { 154, 1 } },
	{ 0x0200000C, { 155, 2 } },
	{ 0x0200000D, { 157, 12 } },
	{ 0x0200000E, { 169, 11 } },
	{ 0x02000010, { 180, 8 } },
	{ 0x02000012, { 188, 3 } },
	{ 0x02000013, { 193, 5 } },
	{ 0x02000014, { 198, 7 } },
	{ 0x02000015, { 205, 3 } },
	{ 0x02000016, { 208, 7 } },
	{ 0x02000017, { 215, 4 } },
	{ 0x02000018, { 219, 21 } },
	{ 0x0200001A, { 240, 2 } },
	{ 0x06000005, { 0, 10 } },
	{ 0x06000006, { 10, 10 } },
	{ 0x06000007, { 20, 5 } },
	{ 0x06000008, { 25, 5 } },
	{ 0x06000009, { 30, 1 } },
	{ 0x0600000A, { 31, 2 } },
	{ 0x0600000B, { 33, 2 } },
	{ 0x0600000C, { 35, 1 } },
	{ 0x0600000D, { 36, 1 } },
	{ 0x0600000E, { 37, 2 } },
	{ 0x0600000F, { 39, 3 } },
	{ 0x06000010, { 42, 2 } },
	{ 0x06000011, { 44, 4 } },
	{ 0x06000012, { 48, 3 } },
	{ 0x06000013, { 51, 4 } },
	{ 0x06000014, { 55, 3 } },
	{ 0x06000015, { 58, 3 } },
	{ 0x06000016, { 61, 1 } },
	{ 0x06000017, { 62, 3 } },
	{ 0x06000018, { 65, 2 } },
	{ 0x06000019, { 67, 3 } },
	{ 0x0600001A, { 70, 2 } },
	{ 0x0600001B, { 72, 5 } },
	{ 0x0600002B, { 90, 2 } },
	{ 0x06000030, { 99, 2 } },
	{ 0x06000035, { 111, 2 } },
	{ 0x0600003B, { 124, 3 } },
	{ 0x06000040, { 136, 3 } },
	{ 0x06000045, { 151, 3 } },
	{ 0x06000067, { 191, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[242] = 
{
	{ (Il2CppRGCTXDataType)2, 1929 },
	{ (Il2CppRGCTXDataType)3, 8835 },
	{ (Il2CppRGCTXDataType)2, 3360 },
	{ (Il2CppRGCTXDataType)2, 2842 },
	{ (Il2CppRGCTXDataType)3, 16840 },
	{ (Il2CppRGCTXDataType)2, 2052 },
	{ (Il2CppRGCTXDataType)2, 2849 },
	{ (Il2CppRGCTXDataType)3, 16879 },
	{ (Il2CppRGCTXDataType)2, 2844 },
	{ (Il2CppRGCTXDataType)3, 16847 },
	{ (Il2CppRGCTXDataType)2, 1930 },
	{ (Il2CppRGCTXDataType)3, 8836 },
	{ (Il2CppRGCTXDataType)2, 3381 },
	{ (Il2CppRGCTXDataType)2, 2851 },
	{ (Il2CppRGCTXDataType)3, 16886 },
	{ (Il2CppRGCTXDataType)2, 2071 },
	{ (Il2CppRGCTXDataType)2, 2859 },
	{ (Il2CppRGCTXDataType)3, 16943 },
	{ (Il2CppRGCTXDataType)2, 2855 },
	{ (Il2CppRGCTXDataType)3, 16912 },
	{ (Il2CppRGCTXDataType)2, 675 },
	{ (Il2CppRGCTXDataType)3, 56 },
	{ (Il2CppRGCTXDataType)3, 57 },
	{ (Il2CppRGCTXDataType)2, 1270 },
	{ (Il2CppRGCTXDataType)3, 6810 },
	{ (Il2CppRGCTXDataType)2, 676 },
	{ (Il2CppRGCTXDataType)3, 68 },
	{ (Il2CppRGCTXDataType)3, 69 },
	{ (Il2CppRGCTXDataType)2, 1280 },
	{ (Il2CppRGCTXDataType)3, 6814 },
	{ (Il2CppRGCTXDataType)3, 19207 },
	{ (Il2CppRGCTXDataType)2, 683 },
	{ (Il2CppRGCTXDataType)3, 119 },
	{ (Il2CppRGCTXDataType)2, 2472 },
	{ (Il2CppRGCTXDataType)3, 13158 },
	{ (Il2CppRGCTXDataType)3, 7588 },
	{ (Il2CppRGCTXDataType)3, 19176 },
	{ (Il2CppRGCTXDataType)2, 679 },
	{ (Il2CppRGCTXDataType)3, 79 },
	{ (Il2CppRGCTXDataType)2, 800 },
	{ (Il2CppRGCTXDataType)3, 1049 },
	{ (Il2CppRGCTXDataType)3, 1050 },
	{ (Il2CppRGCTXDataType)2, 2053 },
	{ (Il2CppRGCTXDataType)3, 9488 },
	{ (Il2CppRGCTXDataType)2, 1857 },
	{ (Il2CppRGCTXDataType)2, 1417 },
	{ (Il2CppRGCTXDataType)2, 1526 },
	{ (Il2CppRGCTXDataType)2, 1618 },
	{ (Il2CppRGCTXDataType)2, 1527 },
	{ (Il2CppRGCTXDataType)2, 1619 },
	{ (Il2CppRGCTXDataType)3, 6812 },
	{ (Il2CppRGCTXDataType)2, 1858 },
	{ (Il2CppRGCTXDataType)2, 1418 },
	{ (Il2CppRGCTXDataType)2, 1528 },
	{ (Il2CppRGCTXDataType)2, 1620 },
	{ (Il2CppRGCTXDataType)2, 1529 },
	{ (Il2CppRGCTXDataType)2, 1621 },
	{ (Il2CppRGCTXDataType)3, 6813 },
	{ (Il2CppRGCTXDataType)2, 1856 },
	{ (Il2CppRGCTXDataType)2, 1525 },
	{ (Il2CppRGCTXDataType)2, 1617 },
	{ (Il2CppRGCTXDataType)2, 1515 },
	{ (Il2CppRGCTXDataType)2, 1516 },
	{ (Il2CppRGCTXDataType)2, 1614 },
	{ (Il2CppRGCTXDataType)3, 6809 },
	{ (Il2CppRGCTXDataType)2, 1416 },
	{ (Il2CppRGCTXDataType)2, 1523 },
	{ (Il2CppRGCTXDataType)2, 1524 },
	{ (Il2CppRGCTXDataType)2, 1616 },
	{ (Il2CppRGCTXDataType)3, 6811 },
	{ (Il2CppRGCTXDataType)2, 1415 },
	{ (Il2CppRGCTXDataType)3, 19163 },
	{ (Il2CppRGCTXDataType)3, 6166 },
	{ (Il2CppRGCTXDataType)2, 1143 },
	{ (Il2CppRGCTXDataType)2, 1518 },
	{ (Il2CppRGCTXDataType)2, 1615 },
	{ (Il2CppRGCTXDataType)2, 1692 },
	{ (Il2CppRGCTXDataType)3, 8837 },
	{ (Il2CppRGCTXDataType)3, 8839 },
	{ (Il2CppRGCTXDataType)2, 470 },
	{ (Il2CppRGCTXDataType)3, 8838 },
	{ (Il2CppRGCTXDataType)3, 8847 },
	{ (Il2CppRGCTXDataType)2, 1933 },
	{ (Il2CppRGCTXDataType)2, 2845 },
	{ (Il2CppRGCTXDataType)3, 16848 },
	{ (Il2CppRGCTXDataType)3, 8848 },
	{ (Il2CppRGCTXDataType)2, 1571 },
	{ (Il2CppRGCTXDataType)2, 1645 },
	{ (Il2CppRGCTXDataType)3, 6821 },
	{ (Il2CppRGCTXDataType)3, 19149 },
	{ (Il2CppRGCTXDataType)2, 2856 },
	{ (Il2CppRGCTXDataType)3, 16913 },
	{ (Il2CppRGCTXDataType)3, 8840 },
	{ (Il2CppRGCTXDataType)2, 1932 },
	{ (Il2CppRGCTXDataType)2, 2843 },
	{ (Il2CppRGCTXDataType)3, 16841 },
	{ (Il2CppRGCTXDataType)3, 6820 },
	{ (Il2CppRGCTXDataType)3, 8841 },
	{ (Il2CppRGCTXDataType)3, 19148 },
	{ (Il2CppRGCTXDataType)2, 2852 },
	{ (Il2CppRGCTXDataType)3, 16887 },
	{ (Il2CppRGCTXDataType)3, 8854 },
	{ (Il2CppRGCTXDataType)2, 1934 },
	{ (Il2CppRGCTXDataType)2, 2850 },
	{ (Il2CppRGCTXDataType)3, 16880 },
	{ (Il2CppRGCTXDataType)3, 9538 },
	{ (Il2CppRGCTXDataType)3, 5223 },
	{ (Il2CppRGCTXDataType)3, 6822 },
	{ (Il2CppRGCTXDataType)3, 5222 },
	{ (Il2CppRGCTXDataType)3, 8855 },
	{ (Il2CppRGCTXDataType)3, 19150 },
	{ (Il2CppRGCTXDataType)2, 2860 },
	{ (Il2CppRGCTXDataType)3, 16944 },
	{ (Il2CppRGCTXDataType)3, 8868 },
	{ (Il2CppRGCTXDataType)2, 1936 },
	{ (Il2CppRGCTXDataType)2, 2858 },
	{ (Il2CppRGCTXDataType)3, 16915 },
	{ (Il2CppRGCTXDataType)3, 8869 },
	{ (Il2CppRGCTXDataType)2, 1574 },
	{ (Il2CppRGCTXDataType)2, 1648 },
	{ (Il2CppRGCTXDataType)3, 6826 },
	{ (Il2CppRGCTXDataType)3, 6825 },
	{ (Il2CppRGCTXDataType)2, 2847 },
	{ (Il2CppRGCTXDataType)3, 16850 },
	{ (Il2CppRGCTXDataType)3, 19157 },
	{ (Il2CppRGCTXDataType)2, 2857 },
	{ (Il2CppRGCTXDataType)3, 16914 },
	{ (Il2CppRGCTXDataType)3, 8861 },
	{ (Il2CppRGCTXDataType)2, 1935 },
	{ (Il2CppRGCTXDataType)2, 2854 },
	{ (Il2CppRGCTXDataType)3, 16889 },
	{ (Il2CppRGCTXDataType)3, 6824 },
	{ (Il2CppRGCTXDataType)3, 6823 },
	{ (Il2CppRGCTXDataType)3, 8862 },
	{ (Il2CppRGCTXDataType)2, 2846 },
	{ (Il2CppRGCTXDataType)3, 16849 },
	{ (Il2CppRGCTXDataType)3, 19156 },
	{ (Il2CppRGCTXDataType)2, 2853 },
	{ (Il2CppRGCTXDataType)3, 16888 },
	{ (Il2CppRGCTXDataType)3, 8875 },
	{ (Il2CppRGCTXDataType)2, 1937 },
	{ (Il2CppRGCTXDataType)2, 2862 },
	{ (Il2CppRGCTXDataType)3, 16946 },
	{ (Il2CppRGCTXDataType)3, 9539 },
	{ (Il2CppRGCTXDataType)3, 5225 },
	{ (Il2CppRGCTXDataType)3, 6828 },
	{ (Il2CppRGCTXDataType)3, 6827 },
	{ (Il2CppRGCTXDataType)3, 5224 },
	{ (Il2CppRGCTXDataType)3, 8876 },
	{ (Il2CppRGCTXDataType)2, 2848 },
	{ (Il2CppRGCTXDataType)3, 16851 },
	{ (Il2CppRGCTXDataType)3, 19158 },
	{ (Il2CppRGCTXDataType)2, 2861 },
	{ (Il2CppRGCTXDataType)3, 16945 },
	{ (Il2CppRGCTXDataType)3, 6817 },
	{ (Il2CppRGCTXDataType)3, 6818 },
	{ (Il2CppRGCTXDataType)3, 6829 },
	{ (Il2CppRGCTXDataType)3, 122 },
	{ (Il2CppRGCTXDataType)3, 121 },
	{ (Il2CppRGCTXDataType)2, 1566 },
	{ (Il2CppRGCTXDataType)2, 1641 },
	{ (Il2CppRGCTXDataType)3, 6819 },
	{ (Il2CppRGCTXDataType)2, 1581 },
	{ (Il2CppRGCTXDataType)2, 1660 },
	{ (Il2CppRGCTXDataType)3, 124 },
	{ (Il2CppRGCTXDataType)2, 608 },
	{ (Il2CppRGCTXDataType)2, 684 },
	{ (Il2CppRGCTXDataType)3, 120 },
	{ (Il2CppRGCTXDataType)3, 123 },
	{ (Il2CppRGCTXDataType)3, 81 },
	{ (Il2CppRGCTXDataType)2, 2572 },
	{ (Il2CppRGCTXDataType)3, 14664 },
	{ (Il2CppRGCTXDataType)2, 1563 },
	{ (Il2CppRGCTXDataType)2, 1639 },
	{ (Il2CppRGCTXDataType)3, 14665 },
	{ (Il2CppRGCTXDataType)3, 83 },
	{ (Il2CppRGCTXDataType)2, 467 },
	{ (Il2CppRGCTXDataType)2, 680 },
	{ (Il2CppRGCTXDataType)3, 80 },
	{ (Il2CppRGCTXDataType)3, 82 },
	{ (Il2CppRGCTXDataType)3, 6202 },
	{ (Il2CppRGCTXDataType)2, 1158 },
	{ (Il2CppRGCTXDataType)2, 3472 },
	{ (Il2CppRGCTXDataType)3, 14661 },
	{ (Il2CppRGCTXDataType)3, 14662 },
	{ (Il2CppRGCTXDataType)2, 1706 },
	{ (Il2CppRGCTXDataType)3, 14663 },
	{ (Il2CppRGCTXDataType)2, 399 },
	{ (Il2CppRGCTXDataType)2, 681 },
	{ (Il2CppRGCTXDataType)3, 93 },
	{ (Il2CppRGCTXDataType)3, 13145 },
	{ (Il2CppRGCTXDataType)2, 2473 },
	{ (Il2CppRGCTXDataType)3, 13159 },
	{ (Il2CppRGCTXDataType)2, 801 },
	{ (Il2CppRGCTXDataType)3, 1051 },
	{ (Il2CppRGCTXDataType)3, 13151 },
	{ (Il2CppRGCTXDataType)3, 5196 },
	{ (Il2CppRGCTXDataType)2, 500 },
	{ (Il2CppRGCTXDataType)3, 13146 },
	{ (Il2CppRGCTXDataType)2, 2469 },
	{ (Il2CppRGCTXDataType)3, 1465 },
	{ (Il2CppRGCTXDataType)2, 820 },
	{ (Il2CppRGCTXDataType)2, 1118 },
	{ (Il2CppRGCTXDataType)3, 5202 },
	{ (Il2CppRGCTXDataType)3, 13147 },
	{ (Il2CppRGCTXDataType)3, 5191 },
	{ (Il2CppRGCTXDataType)3, 5192 },
	{ (Il2CppRGCTXDataType)3, 5190 },
	{ (Il2CppRGCTXDataType)3, 5193 },
	{ (Il2CppRGCTXDataType)2, 1114 },
	{ (Il2CppRGCTXDataType)2, 3432 },
	{ (Il2CppRGCTXDataType)3, 6816 },
	{ (Il2CppRGCTXDataType)3, 5195 },
	{ (Il2CppRGCTXDataType)2, 1497 },
	{ (Il2CppRGCTXDataType)3, 5194 },
	{ (Il2CppRGCTXDataType)2, 1419 },
	{ (Il2CppRGCTXDataType)2, 3385 },
	{ (Il2CppRGCTXDataType)2, 1542 },
	{ (Il2CppRGCTXDataType)2, 1622 },
	{ (Il2CppRGCTXDataType)3, 6185 },
	{ (Il2CppRGCTXDataType)2, 1152 },
	{ (Il2CppRGCTXDataType)3, 7447 },
	{ (Il2CppRGCTXDataType)3, 7448 },
	{ (Il2CppRGCTXDataType)3, 7453 },
	{ (Il2CppRGCTXDataType)2, 1701 },
	{ (Il2CppRGCTXDataType)3, 7450 },
	{ (Il2CppRGCTXDataType)3, 19561 },
	{ (Il2CppRGCTXDataType)2, 1120 },
	{ (Il2CppRGCTXDataType)3, 5216 },
	{ (Il2CppRGCTXDataType)1, 1494 },
	{ (Il2CppRGCTXDataType)2, 3397 },
	{ (Il2CppRGCTXDataType)3, 7449 },
	{ (Il2CppRGCTXDataType)1, 3397 },
	{ (Il2CppRGCTXDataType)1, 1701 },
	{ (Il2CppRGCTXDataType)2, 3470 },
	{ (Il2CppRGCTXDataType)2, 3397 },
	{ (Il2CppRGCTXDataType)3, 7454 },
	{ (Il2CppRGCTXDataType)3, 7452 },
	{ (Il2CppRGCTXDataType)3, 7451 },
	{ (Il2CppRGCTXDataType)2, 333 },
	{ (Il2CppRGCTXDataType)3, 5226 },
	{ (Il2CppRGCTXDataType)2, 480 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	151,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	50,
	s_rgctxIndices,
	242,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
