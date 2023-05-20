#include <stdio.h>
#include "List.h"

int main(int argc, char **argv)
{
    int i;
    scanf("%d", &i);
    printf("Hello, world!\n%d\n", i);
    List *L = ListNew();
    ListShow(*L);
    ListInit(L);
    for (int i = 0; i < 10; i++) {
        ListInsert(L, i, i);
    }
    ListShow(*L);
    for (int i = 5; i < 10; i++) {
        DataType temp;
        ListDelete(L, i, &temp);
        printf("%d ", temp);
    }
    printf("\n");
    DataType temp;
    ListGetElem(*L, 3, &temp);
    printf("Get Elem %d\n", temp);
    ListFClear(L);
    ListShow(*L);
    return 0;
}