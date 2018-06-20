#define MAX 10
typedef struct Entry
{

    int 	s;

    int 	r;
    //p=number of packet
    int     p;
    //c to check
    char     c;
    int     id;
    int  op;
}QueueEntry;

typedef struct
{
    QueueEntry  Entry[MAX];
     Node *next;
}Node;

typedef struct
{
    Node 	*front;
    Node	*rear;
    int size;
} QueueType;

void CreateQueue(QueueType *q);
int QueueEmpty(QueueType q);
int QueueFull(QueueType q);
void Enqueue(QueueEntry item, QueueType *q);
void Dequeue (QueueEntry *item, QueueType *q);
void ClearQueue(QueueType *q);
