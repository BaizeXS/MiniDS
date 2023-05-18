# ADT: 线性表(Sequence List)

## Data



## Operation

- ListInit(\*L)

  初始化操作,建立一个空的线性表 L。

- ListEmpty(L)

  检查线性表 L 是否为空,是则返回 true,否则返回 false。

- List(\*L)

  清空线性表 L。

- ListGetElem(L, i, \*e)

  获取线性表 L 中第 i 个位置处的元素并将其值返回给元素 e。

- ListLocateElem(L, e)

  在线性表L中查找与元素 e 相等的元素,如果查找成功,则返回该元素在线性表中的序号表示成功,否则返回0表示失败。

- ListInsert(\*L, i, e)

  在线性表 L 中的第 i 个位置插入新元素 e。

- ListDelete(\*L, i, \*e): 

  删除线性表 L 中第 i 个位置处的元素，并用 e 返回其值。

- ListLength(L)

  返回线性表L的元素个数。