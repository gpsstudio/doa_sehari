#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_mC405D19505CA250B5C731803400D8DAF963F0DCD (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_mBF9354F0EDEE6E4BA57F3DA1663A91A5B61CEB9D (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_mEC48ECB89552B91EFD9669763848BA1DB97E991D (void);
// 0x00000004 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mE25C4D4F2FE86A32704624613D751BE305953E49 (void);
// 0x00000005 System.Exception System.Linq.Error::NotSupported()
extern void Error_NotSupported_mAFFF7D9C057A023689286BAB7D9A44E2D93B42FB (void);
// 0x00000006 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000007 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000008 System.Collections.Generic.IEnumerable`1<System.Linq.IGrouping`2<TKey,TSource>> System.Linq.Enumerable::GroupBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000009 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Concat(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::ConcatIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000B System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>)
// 0x0000000C System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x0000000D TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000E TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000000F System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000010 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000011 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000012 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000013 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000014 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000015 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000016 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000017 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000018 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000019 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x0000001A System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000001B System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x0000001C System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000001D System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x0000001E System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001F System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000020 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000021 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000022 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000023 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000024 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000025 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000026 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000027 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000028 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000029 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x0000002A System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002B System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x0000002C System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x0000002D System.Void System.Linq.Enumerable/<ConcatIterator>d__59`1::.ctor(System.Int32)
// 0x0000002E System.Void System.Linq.Enumerable/<ConcatIterator>d__59`1::System.IDisposable.Dispose()
// 0x0000002F System.Boolean System.Linq.Enumerable/<ConcatIterator>d__59`1::MoveNext()
// 0x00000030 System.Void System.Linq.Enumerable/<ConcatIterator>d__59`1::<>m__Finally1()
// 0x00000031 System.Void System.Linq.Enumerable/<ConcatIterator>d__59`1::<>m__Finally2()
// 0x00000032 TSource System.Linq.Enumerable/<ConcatIterator>d__59`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000033 System.Void System.Linq.Enumerable/<ConcatIterator>d__59`1::System.Collections.IEnumerator.Reset()
// 0x00000034 System.Object System.Linq.Enumerable/<ConcatIterator>d__59`1::System.Collections.IEnumerator.get_Current()
// 0x00000035 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<ConcatIterator>d__59`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000036 System.Collections.IEnumerator System.Linq.Enumerable/<ConcatIterator>d__59`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000037 System.Func`2<TElement,TElement> System.Linq.IdentityFunction`1::get_Instance()
// 0x00000038 System.Void System.Linq.IdentityFunction`1/<>c::.cctor()
// 0x00000039 System.Void System.Linq.IdentityFunction`1/<>c::.ctor()
// 0x0000003A TElement System.Linq.IdentityFunction`1/<>c::<get_Instance>b__1_0(TElement)
// 0x0000003B TKey System.Linq.IGrouping`2::get_Key()
// 0x0000003C System.Linq.Lookup`2<TKey,TElement> System.Linq.Lookup`2::Create(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x0000003D System.Void System.Linq.Lookup`2::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x0000003E System.Collections.Generic.IEnumerator`1<System.Linq.IGrouping`2<TKey,TElement>> System.Linq.Lookup`2::GetEnumerator()
// 0x0000003F System.Collections.IEnumerator System.Linq.Lookup`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000040 System.Int32 System.Linq.Lookup`2::InternalGetHashCode(TKey)
// 0x00000041 System.Linq.Lookup`2/Grouping<TKey,TElement> System.Linq.Lookup`2::GetGrouping(TKey,System.Boolean)
// 0x00000042 System.Void System.Linq.Lookup`2::Resize()
// 0x00000043 System.Void System.Linq.Lookup`2/Grouping::Add(TElement)
// 0x00000044 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.Lookup`2/Grouping::GetEnumerator()
// 0x00000045 System.Collections.IEnumerator System.Linq.Lookup`2/Grouping::System.Collections.IEnumerable.GetEnumerator()
// 0x00000046 TKey System.Linq.Lookup`2/Grouping::get_Key()
// 0x00000047 System.Int32 System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.get_Count()
// 0x00000048 System.Boolean System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.get_IsReadOnly()
// 0x00000049 System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.Add(TElement)
// 0x0000004A System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.Clear()
// 0x0000004B System.Boolean System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.Contains(TElement)
// 0x0000004C System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.CopyTo(TElement[],System.Int32)
// 0x0000004D System.Boolean System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.Remove(TElement)
// 0x0000004E System.Int32 System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.IndexOf(TElement)
// 0x0000004F System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.Insert(System.Int32,TElement)
// 0x00000050 System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.RemoveAt(System.Int32)
// 0x00000051 TElement System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.get_Item(System.Int32)
// 0x00000052 System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.set_Item(System.Int32,TElement)
// 0x00000053 System.Void System.Linq.Lookup`2/Grouping::.ctor()
// 0x00000054 System.Void System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::.ctor(System.Int32)
// 0x00000055 System.Void System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::System.IDisposable.Dispose()
// 0x00000056 System.Boolean System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::MoveNext()
// 0x00000057 TElement System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x00000058 System.Void System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::System.Collections.IEnumerator.Reset()
// 0x00000059 System.Object System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::System.Collections.IEnumerator.get_Current()
// 0x0000005A System.Void System.Linq.Lookup`2/<GetEnumerator>d__12::.ctor(System.Int32)
// 0x0000005B System.Void System.Linq.Lookup`2/<GetEnumerator>d__12::System.IDisposable.Dispose()
// 0x0000005C System.Boolean System.Linq.Lookup`2/<GetEnumerator>d__12::MoveNext()
// 0x0000005D System.Linq.IGrouping`2<TKey,TElement> System.Linq.Lookup`2/<GetEnumerator>d__12::System.Collections.Generic.IEnumerator<System.Linq.IGrouping<TKey,TElement>>.get_Current()
// 0x0000005E System.Void System.Linq.Lookup`2/<GetEnumerator>d__12::System.Collections.IEnumerator.Reset()
// 0x0000005F System.Object System.Linq.Lookup`2/<GetEnumerator>d__12::System.Collections.IEnumerator.get_Current()
// 0x00000060 System.Void System.Linq.GroupedEnumerable`3::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x00000061 System.Collections.Generic.IEnumerator`1<System.Linq.IGrouping`2<TKey,TElement>> System.Linq.GroupedEnumerable`3::GetEnumerator()
// 0x00000062 System.Collections.IEnumerator System.Linq.GroupedEnumerable`3::System.Collections.IEnumerable.GetEnumerator()
// 0x00000063 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000064 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000065 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// 0x00000066 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000067 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000068 System.Void System.Collections.Generic.HashSet`1::CopyFrom(System.Collections.Generic.HashSet`1<T>)
// 0x00000069 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x0000006A System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x0000006B System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x0000006C System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x0000006D System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x0000006E System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x0000006F System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x00000070 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x00000071 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000072 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000073 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000074 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x00000075 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x00000076 System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x00000077 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x00000078 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x00000079 System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::get_Comparer()
// 0x0000007A System.Void System.Collections.Generic.HashSet`1::TrimExcess()
// 0x0000007B System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x0000007C System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x0000007D System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x0000007E System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x0000007F System.Void System.Collections.Generic.HashSet`1::AddValue(System.Int32,System.Int32,T)
// 0x00000080 System.Boolean System.Collections.Generic.HashSet`1::AreEqualityComparersEqual(System.Collections.Generic.HashSet`1<T>,System.Collections.Generic.HashSet`1<T>)
// 0x00000081 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x00000082 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x00000083 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x00000084 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x00000085 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x00000086 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x00000087 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[135] = 
{
	Error_ArgumentNull_mC405D19505CA250B5C731803400D8DAF963F0DCD,
	Error_ArgumentOutOfRange_mBF9354F0EDEE6E4BA57F3DA1663A91A5B61CEB9D,
	Error_MoreThanOneMatch_mEC48ECB89552B91EFD9669763848BA1DB97E991D,
	Error_NoElements_mE25C4D4F2FE86A32704624613D751BE305953E49,
	Error_NotSupported_mAFFF7D9C057A023689286BAB7D9A44E2D93B42FB,
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
static const int32_t s_InvokerIndices[135] = 
{
	2012,
	2012,
	2132,
	2132,
	2132,
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
static const Il2CppTokenRangePair s_rgctxIndices[29] = 
{
	{ 0x02000004, { 50, 4 } },
	{ 0x02000005, { 54, 9 } },
	{ 0x02000006, { 63, 7 } },
	{ 0x02000007, { 70, 10 } },
	{ 0x02000008, { 80, 1 } },
	{ 0x02000009, { 81, 9 } },
	{ 0x0200000A, { 90, 4 } },
	{ 0x0200000B, { 94, 3 } },
	{ 0x0200000D, { 97, 17 } },
	{ 0x0200000E, { 118, 5 } },
	{ 0x0200000F, { 123, 1 } },
	{ 0x02000011, { 124, 4 } },
	{ 0x02000012, { 128, 34 } },
	{ 0x02000014, { 162, 2 } },
	{ 0x06000006, { 0, 10 } },
	{ 0x06000007, { 10, 5 } },
	{ 0x06000008, { 15, 4 } },
	{ 0x06000009, { 19, 1 } },
	{ 0x0600000A, { 20, 2 } },
	{ 0x0600000B, { 22, 1 } },
	{ 0x0600000C, { 23, 7 } },
	{ 0x0600000D, { 30, 4 } },
	{ 0x0600000E, { 34, 3 } },
	{ 0x0600000F, { 37, 1 } },
	{ 0x06000010, { 38, 3 } },
	{ 0x06000011, { 41, 2 } },
	{ 0x06000012, { 43, 2 } },
	{ 0x06000013, { 45, 5 } },
	{ 0x0600003C, { 114, 4 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[164] = 
{
	{ (Il2CppRGCTXDataType)2, 1166 },
	{ (Il2CppRGCTXDataType)3, 3101 },
	{ (Il2CppRGCTXDataType)2, 1830 },
	{ (Il2CppRGCTXDataType)2, 1561 },
	{ (Il2CppRGCTXDataType)3, 5323 },
	{ (Il2CppRGCTXDataType)2, 1225 },
	{ (Il2CppRGCTXDataType)2, 1565 },
	{ (Il2CppRGCTXDataType)3, 5336 },
	{ (Il2CppRGCTXDataType)2, 1563 },
	{ (Il2CppRGCTXDataType)3, 5329 },
	{ (Il2CppRGCTXDataType)2, 421 },
	{ (Il2CppRGCTXDataType)3, 22 },
	{ (Il2CppRGCTXDataType)3, 23 },
	{ (Il2CppRGCTXDataType)2, 772 },
	{ (Il2CppRGCTXDataType)3, 2239 },
	{ (Il2CppRGCTXDataType)3, 2581 },
	{ (Il2CppRGCTXDataType)2, 1154 },
	{ (Il2CppRGCTXDataType)2, 821 },
	{ (Il2CppRGCTXDataType)3, 2404 },
	{ (Il2CppRGCTXDataType)3, 6392 },
	{ (Il2CppRGCTXDataType)2, 422 },
	{ (Il2CppRGCTXDataType)3, 26 },
	{ (Il2CppRGCTXDataType)3, 6413 },
	{ (Il2CppRGCTXDataType)2, 584 },
	{ (Il2CppRGCTXDataType)3, 766 },
	{ (Il2CppRGCTXDataType)2, 922 },
	{ (Il2CppRGCTXDataType)2, 974 },
	{ (Il2CppRGCTXDataType)3, 2243 },
	{ (Il2CppRGCTXDataType)3, 2244 },
	{ (Il2CppRGCTXDataType)3, 767 },
	{ (Il2CppRGCTXDataType)2, 1113 },
	{ (Il2CppRGCTXDataType)2, 843 },
	{ (Il2CppRGCTXDataType)2, 917 },
	{ (Il2CppRGCTXDataType)2, 971 },
	{ (Il2CppRGCTXDataType)2, 918 },
	{ (Il2CppRGCTXDataType)2, 972 },
	{ (Il2CppRGCTXDataType)3, 2240 },
	{ (Il2CppRGCTXDataType)2, 909 },
	{ (Il2CppRGCTXDataType)2, 910 },
	{ (Il2CppRGCTXDataType)2, 969 },
	{ (Il2CppRGCTXDataType)3, 2238 },
	{ (Il2CppRGCTXDataType)2, 842 },
	{ (Il2CppRGCTXDataType)2, 916 },
	{ (Il2CppRGCTXDataType)2, 841 },
	{ (Il2CppRGCTXDataType)3, 6398 },
	{ (Il2CppRGCTXDataType)3, 1939 },
	{ (Il2CppRGCTXDataType)2, 679 },
	{ (Il2CppRGCTXDataType)2, 912 },
	{ (Il2CppRGCTXDataType)2, 970 },
	{ (Il2CppRGCTXDataType)2, 1022 },
	{ (Il2CppRGCTXDataType)3, 3102 },
	{ (Il2CppRGCTXDataType)3, 3104 },
	{ (Il2CppRGCTXDataType)2, 293 },
	{ (Il2CppRGCTXDataType)3, 3103 },
	{ (Il2CppRGCTXDataType)3, 3112 },
	{ (Il2CppRGCTXDataType)2, 1169 },
	{ (Il2CppRGCTXDataType)2, 1564 },
	{ (Il2CppRGCTXDataType)3, 5330 },
	{ (Il2CppRGCTXDataType)3, 3113 },
	{ (Il2CppRGCTXDataType)2, 945 },
	{ (Il2CppRGCTXDataType)2, 993 },
	{ (Il2CppRGCTXDataType)3, 2249 },
	{ (Il2CppRGCTXDataType)3, 6386 },
	{ (Il2CppRGCTXDataType)3, 3105 },
	{ (Il2CppRGCTXDataType)2, 1168 },
	{ (Il2CppRGCTXDataType)2, 1562 },
	{ (Il2CppRGCTXDataType)3, 5324 },
	{ (Il2CppRGCTXDataType)3, 2248 },
	{ (Il2CppRGCTXDataType)3, 3106 },
	{ (Il2CppRGCTXDataType)3, 6385 },
	{ (Il2CppRGCTXDataType)3, 3119 },
	{ (Il2CppRGCTXDataType)2, 1170 },
	{ (Il2CppRGCTXDataType)2, 1566 },
	{ (Il2CppRGCTXDataType)3, 5337 },
	{ (Il2CppRGCTXDataType)3, 3432 },
	{ (Il2CppRGCTXDataType)3, 1592 },
	{ (Il2CppRGCTXDataType)3, 2250 },
	{ (Il2CppRGCTXDataType)3, 1591 },
	{ (Il2CppRGCTXDataType)3, 3120 },
	{ (Il2CppRGCTXDataType)3, 6387 },
	{ (Il2CppRGCTXDataType)3, 2247 },
	{ (Il2CppRGCTXDataType)3, 28 },
	{ (Il2CppRGCTXDataType)3, 29 },
	{ (Il2CppRGCTXDataType)2, 940 },
	{ (Il2CppRGCTXDataType)2, 989 },
	{ (Il2CppRGCTXDataType)3, 31 },
	{ (Il2CppRGCTXDataType)2, 291 },
	{ (Il2CppRGCTXDataType)2, 423 },
	{ (Il2CppRGCTXDataType)3, 27 },
	{ (Il2CppRGCTXDataType)3, 30 },
	{ (Il2CppRGCTXDataType)2, 415 },
	{ (Il2CppRGCTXDataType)3, 0 },
	{ (Il2CppRGCTXDataType)2, 786 },
	{ (Il2CppRGCTXDataType)3, 2246 },
	{ (Il2CppRGCTXDataType)2, 417 },
	{ (Il2CppRGCTXDataType)3, 2 },
	{ (Il2CppRGCTXDataType)2, 417 },
	{ (Il2CppRGCTXDataType)2, 1368 },
	{ (Il2CppRGCTXDataType)3, 4319 },
	{ (Il2CppRGCTXDataType)3, 4321 },
	{ (Il2CppRGCTXDataType)3, 2413 },
	{ (Il2CppRGCTXDataType)3, 1965 },
	{ (Il2CppRGCTXDataType)2, 691 },
	{ (Il2CppRGCTXDataType)2, 1883 },
	{ (Il2CppRGCTXDataType)2, 424 },
	{ (Il2CppRGCTXDataType)3, 52 },
	{ (Il2CppRGCTXDataType)3, 4320 },
	{ (Il2CppRGCTXDataType)2, 237 },
	{ (Il2CppRGCTXDataType)2, 1033 },
	{ (Il2CppRGCTXDataType)3, 4322 },
	{ (Il2CppRGCTXDataType)3, 4323 },
	{ (Il2CppRGCTXDataType)2, 822 },
	{ (Il2CppRGCTXDataType)3, 2412 },
	{ (Il2CppRGCTXDataType)2, 1877 },
	{ (Il2CppRGCTXDataType)2, 919 },
	{ (Il2CppRGCTXDataType)2, 973 },
	{ (Il2CppRGCTXDataType)3, 2241 },
	{ (Il2CppRGCTXDataType)3, 2242 },
	{ (Il2CppRGCTXDataType)3, 6221 },
	{ (Il2CppRGCTXDataType)2, 426 },
	{ (Il2CppRGCTXDataType)3, 72 },
	{ (Il2CppRGCTXDataType)3, 2414 },
	{ (Il2CppRGCTXDataType)3, 5486 },
	{ (Il2CppRGCTXDataType)2, 391 },
	{ (Il2CppRGCTXDataType)3, 4324 },
	{ (Il2CppRGCTXDataType)2, 1370 },
	{ (Il2CppRGCTXDataType)3, 4325 },
	{ (Il2CppRGCTXDataType)3, 2405 },
	{ (Il2CppRGCTXDataType)3, 1955 },
	{ (Il2CppRGCTXDataType)2, 687 },
	{ (Il2CppRGCTXDataType)3, 2449 },
	{ (Il2CppRGCTXDataType)3, 2450 },
	{ (Il2CppRGCTXDataType)2, 827 },
	{ (Il2CppRGCTXDataType)3, 2453 },
	{ (Il2CppRGCTXDataType)2, 827 },
	{ (Il2CppRGCTXDataType)3, 2454 },
	{ (Il2CppRGCTXDataType)2, 844 },
	{ (Il2CppRGCTXDataType)3, 2458 },
	{ (Il2CppRGCTXDataType)3, 2462 },
	{ (Il2CppRGCTXDataType)3, 2461 },
	{ (Il2CppRGCTXDataType)2, 1894 },
	{ (Il2CppRGCTXDataType)3, 2452 },
	{ (Il2CppRGCTXDataType)3, 2451 },
	{ (Il2CppRGCTXDataType)3, 2459 },
	{ (Il2CppRGCTXDataType)2, 1030 },
	{ (Il2CppRGCTXDataType)3, 2456 },
	{ (Il2CppRGCTXDataType)3, 6611 },
	{ (Il2CppRGCTXDataType)2, 666 },
	{ (Il2CppRGCTXDataType)3, 1585 },
	{ (Il2CppRGCTXDataType)1, 898 },
	{ (Il2CppRGCTXDataType)2, 1848 },
	{ (Il2CppRGCTXDataType)3, 2455 },
	{ (Il2CppRGCTXDataType)1, 1848 },
	{ (Il2CppRGCTXDataType)1, 1030 },
	{ (Il2CppRGCTXDataType)2, 1894 },
	{ (Il2CppRGCTXDataType)2, 1848 },
	{ (Il2CppRGCTXDataType)2, 926 },
	{ (Il2CppRGCTXDataType)2, 976 },
	{ (Il2CppRGCTXDataType)3, 2460 },
	{ (Il2CppRGCTXDataType)3, 2457 },
	{ (Il2CppRGCTXDataType)3, 2463 },
	{ (Il2CppRGCTXDataType)2, 207 },
	{ (Il2CppRGCTXDataType)3, 1593 },
	{ (Il2CppRGCTXDataType)2, 299 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	135,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	29,
	s_rgctxIndices,
	164,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
