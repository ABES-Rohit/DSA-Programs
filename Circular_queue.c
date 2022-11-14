#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
#define TRUE 1
#define FALSE 0
struct cqueue
{
    char item[SIZE];
    int rear,front;
};
void initialize(struct cqueue *cq)
{
    cq->front=SIZE-1;
    cq->rear=SIZE-1;
}
int isempty(struct cqueue *cq)
{
    if(cq->rear==cq->front)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
void enqueue(struct cqueue *cq,char x)
{
        if((cq->rear+1)%SIZE==cq->front)
        {
            printf("Queue Overflow");
            exit(1);
        }
        else
        {
            cq->rear=(cq->rear+1)%SIZE;
            cq->item[cq->rear]=x;
        }
}
    char dequeue(struct cqueue *cq)
{
        if(cq->rear==cq->front)
        {
            printf("Queue Underflow");
            exit(1);
        }
        else
        {
            cq->front=(cq->front+1)%SIZE;
            char x=cq->item[cq->front];
            return x;
        }
}
int main()
{   
    char a;
    struct cqueue MYcq;
    initialize(&MYcq);
    enqueue(&MYcq,'R');
    enqueue(&MYcq,'O');
    enqueue(&MYcq,'H');
    enqueue(&MYcq,'I');
    enqueue(&MYcq,'T');
    a=dequeue(&MYcq);
    printf("Deleted element=%c\n",a);
    a=dequeue(&MYcq);
    printf("Deleted element=%c\n",a);
    a=dequeue(&MYcq);
    printf("Deleted element=%c\n",a);
    a=dequeue(&MYcq);
    printf("Deleted element=%c\n",a);
    a=dequeue(&MYcq);
    printf("Deleted element=%c\n",a);
   // a=dequeue(&MYcq);
    //printf("Deleted element=%c\n",a);
}
