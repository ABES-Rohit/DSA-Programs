#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
#define TRUE 1
#define FALSE 0
struct queue
{
    char item[SIZE];
    int rear,front;
};
void initialize(struct queue *q)
{
    q->rear=-1;
    q->front=0;
}
int isempty(struct queue *q)
{
    if(q->rear-q->front+1==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
void enqueue(struct queue *q,char x)
{
    if(q->rear==SIZE-1)
    {
        printf("Queue Overflow");
        exit(1);
    }
    else
    {
        q->rear=q->rear+1;
        q->item[q->rear]=x;
    }
}
char dequeue(struct queue *q)
{
    if(isempty(q))
    {
        printf("Queue Underflow");
        exit(1);
    }
    char y=q->item[q->front];
    q->front=q->front+1;
    return y;
}
int main()
{   
    char a;
    struct queue Myq;
    initialize(&Myq);
    enqueue(&Myq,'A');
    enqueue(&Myq,'B');
    enqueue(&Myq,'X');
    enqueue(&Myq,'D');
    enqueue(&Myq,'E');
    a=dequeue(&Myq);
    printf("Deleted element=%c\n",a);
    a=dequeue(&Myq);
    printf("Deleted element=%c\n",a);
    a=dequeue(&Myq);
    printf("Deleted element=%c",a);
}