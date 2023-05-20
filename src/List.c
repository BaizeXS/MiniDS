#include <stdio.h>
#include <stdlib.h>
#include <malloc/_malloc.h>

#define MAX_SIZE 64
#define TRUE 1
#define FALSE 0
typedef int Status;
typedef int ElemType;
typedef struct {
    ElemType data[MAX_SIZE];
    int length;
} List;

/*
List* ListNew();
void ListInit(List* L);
Status ListEmpty(L);

*/


// ListNew()：创建新的线性表 L。
List*
ListNew()
{
    List* L = (List*)malloc(sizeof(List));
    L->length = 0;
    return L;
}
// ListInit(*L)：初始化操作，建立一个空的线性表 L。
void 
ListInit(List* L)
{
    L->length = 0;
    return;
}
// ListEmpty(L)：检查线性表 L 是否为空，若是则返回 true，否则返回 false。
Status
ListEmpty(List L)
{
    Status status;
    if (L.length < 0) {
        printf("List length cannot be negative!\n");
        printf("You could try to Init or Clear the list!\n");
        exit(EXIT_FAILURE);
    } else if (L.length == 0) {
        status = TRUE;
    } else {
        status = FALSE;
    }
    return status;
}
// ListClear(*L)：清空操作，清除线性表 L 中的全部元素。
Status
ListClear(List* L)
{
    L->length = 0;
    return TRUE;
}
// ListGetElem(L, index, *e)：获取线性表 L 中序号为 index 处的元素并将其值返回给元素 e。
Status
ListGetElem(List L, int index, ElemType *elem)
{
    Status status;
    if (L.length <= 0 || index < 0 || index >= L.length) {
        status = FALSE;
    } else {
        status = TRUE;
    }
    return status;
}
// ListLocateElem(L, e)：在线性表L中定位与元素 e 相等的元素，若定位成功，则返回该元素在线性表中的序号表示成功，否则返回 0 表示定位失败。
int
ListLocateElem(List L, ElemType elem)
{
    int i;
    if (L.length == 0) return 0;
    for (i = 0; i < L.length; i++) {
        if (L.data[i] == elem) break;
    }
    if (i >= L.length) return 0;
    return i;
}
// ListInsert(*L, i, e)：在线性表 L 中的第 i 个位置处插入新元素 e。
Status
ListInsert(List *L, int index, ElemType elem)
{
    int k;
    if (L->length == MAX_SIZE) return 0;
    if (index < 0 || index >= L->length) return 0;
    if (index != L->length - 1) {
        for ()
    }
}
// ListDelete(*L, i, *e)：删除线性表 L 中第 i 个位置处的元素，并用元素 e 返回其值。
Status
ListDelete()
{}
// ListLength(L)：返回线性表 L 中的元素个数。
int
ListLength(List L)
{
    return L.length;
}

