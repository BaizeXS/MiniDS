#include "List.h"
#include <malloc/_malloc.h>
#include <stdio.h>
#include <stdlib.h>

// ListNew(): 创建新的线性表 L.
List *ListNew() {
  List *L = (List *)malloc(sizeof(List));
  L->length = 0;
  return L;
}
// ListFree(*L): 释放线性表 L 的空间.
Status ListFree(List *L) {
  free(L);
  return STATE_OK;
}
// ListInit(*L): 初始化线性表 L.
Status ListInit(List *L) {
  L->length = 0;
  return STATE_OK;
}
// ListEmpty(L): 检查线性表 L 是否为空.
Status ListEmpty(List L) {
  Status status;
  if (L.length < 0) {
    // List length cannot be negative!
    // You could try to Init or Clear the list!
    status = STATE_ERROR;
  } else if (L.length == 0) {
    status = TRUE;
  } else {
    status = FALSE;
  }
  return status;
}
// ListFClear(*L): 快速清空线性表 L 中的全部元素.
Status ListFClear(List *L) {
  L->length = 0;
  return TRUE;
}
// ListClear(*L): 清空线性表 L 中的全部元素.
Status ListClear(List *L) {
  for (int i = 0; i < L->length; i++) {
    L->data[i] = 0;
  }
  L->length = 0;
  return TRUE;
}
// ListGetElem(L, index, *elem): 获取线性表 L 中序号为 index 处的元素.
Status ListGetElem(List L, int index, DataType *elem) {
  Status status;
  if (L.length <= 0 || index < 0 || index >= L.length) {
    status = FALSE;
  } else {
    *elem = L.data[index];
    status = TRUE;
  }
  return status;
}
// ListLocateElem(L, elem): 在线性表 L 中定位与元素 e 相等的元素.
int ListLocateElem(List L, DataType elem) {
  // STATE_ERROR 为 -1;
  int index = -1;
  if (L.length == 0) {
    index = -1;
  } else {
    for (index = 0; index < L.length; index++) {
      if (L.data[index] == elem)
        break;
    }
    if (index >= L.length)
      index = -1;
  }
  return index;
}
// ListInsert(*L, index, elem): 在线性表 L 中的序号为 index 处插入元素 e.
Status ListInsert(List *L, int index, DataType elem) {
  Status status = STATE_ORIGIN;
  int k;
  if (L->length == MAX_SIZE || index < 0 || index >= L->length)
    status = STATE_ERROR;
  if (index < L->length) {
    for (k = L->length - 1; k > index; k--) {
      L->data[k] = L->data[k - 1];
    }
    L->data[index] = elem;
    L->length += 1;
    status = STATE_OK;
  }
  return status;
}
// ListDelete(*L, i, *e): 删除线性表 L 中 index 位置处的元素.
Status ListDelete(List *L, int index, DataType *elem) {
  Status status = STATE_ORIGIN;
  int k;
  if (L->length == 0 || index < 0 || index >= L->length) {
    status = STATE_ERROR;
  } else {
    *elem = L->data[index];
    for (k = index + 1; k < L->length; k++) {
      L->data[k - 1] = L->data[k];
    }
    L->length -= 1;
    status = STATE_OK;
  }
  return status;
}
// ListLength(L): 返回线性表 L 中的元素个数.
int ListLength(List L) { return L.length; }

// ListUnion(*L1, L2): 将 L2 中独有元素合并至 L1.
void ListUnion(List *L1, List L2) {
  DataType elem;
  int L1_length = L1->length;
  int L2_length = L2.length;
  for (int i = 0; i < L2_length; i++) {
    ListGetElem(L2, i, &elem);
    if (!ListLocateElem(*L1, elem)) {
      ListInsert(L1, ++L1_length, elem);
    }
  }
}

void ListShow(List L) {
  printf("List length is %d.\n", L.length);
  for (int i = 0; i < L.length; i++) {
    printf("%d ", L.data[i]);
  }
  printf("\n");
}