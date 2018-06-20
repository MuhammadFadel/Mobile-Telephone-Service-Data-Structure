#include"Queuelist.h"

void CreateQueue(QueueType *q)
{
//pre: None.
//Post: The queue is initialized to be empty.
    q->front= NULL;
    q->rear = NULL;
}
int QueueEmpty(QueueType q)
{
//Pre: The queue is initialized.
//Post: If the queue is empty (1) is returned. Otherwise (0) is returned.

    return (q->front == NULL);
}
int QueueFull(QueueType q)
{
//Pre: The queue is initialized.
//post: If the queue is full (1) is returned. Otherwise (0) is returned.

    return 0;
}
void Enqueue(QueueEntry item, QueueType *q)
{
//Pre: The queue is initialized  and is not full.
//Post: Item is added to the end of the stack.
    if(p->Entry[q->rear]->l.c='E')
    {
        Node *p = (Node *)malloc(sizeof(Node));
        p->Entry[q->rear]=item;
        p-> next = NULL;
        if (!q->rear)
            q->front = p;
        else
        {
            if(q->front->Entry[q->front]->c=='v' ||q->front->Entry[q->front]->c=='D')
                swap(p,q->front);
            q->rear->next=p;
            q->rear=p;
        }
    }
    if(p->Entry[q->rear]->l.c='V')
    {
        Node *p = (Node *)malloc(sizeof(Node));
        p->Entry[q->rear]=item;
        p-> next = NULL;
        if (!q->rear)
            q->front = p;
        else
        {
            if(q->front->Entry[q->front]->c=='D')
                swap(p,q->front);
            q->rear->next=p;
            q->rear=p;

        }
    }
    if(p->Entry[q->rear]->l.c='D') {}
    Node *p = (Node *)malloc(sizeof(Node));
    p->Entry[q->rear]=item;
    p-> next = NULL;
    if (!q->rear)
        q->front = p;
    else
        q->rear->next=p;
    q->rear=p;
}
void dequeue (QueueEntry *item, QueueType *q)
{
//Pre: The Queue is initialized  and is not empty.
//Post: The front element of the Queue is removed from it and is assigned to item.

    *item = q->front->entry[q->front];
    Node *p = q->front;
    q-> front=q->front->next;
    free(p);
    if (!q->front)
        q->rear = NULL;
}
void ClearQueue(QueueType *q)
{
//Pre: The Queue is initialized.
//Post: the Queue is cleared to be empty but not all the calls not 'E'

    Node *p;
    while(q->front)
    {
        p=q->front;
        if(p->Entry[q->front]->l.c!='E')
        {
            q->front=q->front->next;
            free(p);
        }
    }
    q->rear = NULL;
}

