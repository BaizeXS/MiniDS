#define MAX_SIZE 64
#define TRUE 1
#define FALSE 0
#define STATE_OK 1
#define STATE_ORIGIN 0
#define STATE_ERROR -1

typedef int Status;
typedef int DataType;

typedef struct {
  DataType data[MAX_SIZE];
  int length;
} List;

List *ListNew();
Status ListFree(List *L);
Status ListInit(List *L);
Status ListEmpty(List L);
Status ListFClear(List *L);
Status ListClear(List *L);
Status ListGetElem(List L, int index, DataType *elem);
int ListLocateElem(List L, DataType elem);
Status ListInsert(List *L, int index, DataType elem);
Status ListDelete(List *L, int index, DataType *elem);
int ListLength(List L);
void ListUnion(List *L1, List L2);
void ListShow(List L);