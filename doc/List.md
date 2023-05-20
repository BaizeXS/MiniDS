# Mini Data Structure

## ADT 线性表(List)

### Data

- 线性表是零个或者多个数据元素的有限序列。

- 线性表的数据对象集合为 $\{a_1,a_2,a_3,\cdots,a_n\}$，每个元素的类型均为 `DataType`。
- 除第一个元素 $a_1$ 外，每一个元素有且只有一个直接前驱元素。
- 除最后一个元素 $a_n$ 外，每一个元素有且只有一个直接后继元素。
- 数据元素之间的关系是一对一关系。

### Operation

- ListInit(\*L)：初始化操作，建立一个空的线性表 L。
- ListEmpty(L)：检查线性表 L 是否为空，若是则返回`true`，否则返回`false`。
- ListClear(\*L)：清空操作，清除线性表 L 中的全部元素。
- ListGetElem(L, i, \*e)：获取线性表 L 中第 i 个位置处的元素并将其值返回给元素 e。
- ListLocateElem(L, e)：在线性表L中定位与元素 e 相等的元素，若定位成功，则返回该元素在线性表中的序号表示成功，否则返回 0 表示定位失败。
- ListInsert(\*L, i, e)：在线性表 L 中的第 i 个位置处插入新元素 e。
- ListDelete(\*L, i, \*e)：删除线性表 L 中第 i 个位置处的元素，并用元素 e 返回其值。
- ListLength(L)：返回线性表 L 中的元素个数。