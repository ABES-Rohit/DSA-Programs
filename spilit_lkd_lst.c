#include<stdio.h>
#include<stdlib.h>
#include"linkedlist.h"

void spilit_linked(struct node *START)
{
    struct node *p,*q,*START2;
    p=START;
    q=START->next;
    while(q!=NULL && (q->next)!=NULL)
    {
        p=p->next;
        q=q->next;
        q=q->next;
    }
    START2=p->next;
    p->next=NULL;
    traverse(&START);
    printf("\n");
    traverse(&START2);
}
int main()
{
    struct node *START;
    START=NULL;
    insert_beg(&START,1);
    insert_aftr(&START,2);
    insert_aftr(&START,3);
    insert_aftr(&START,4);
    insert_aftr(&START,5);
    insert_end(&START,6);
    insert_end(&START,7);
    traverse(&START);
    printf("\n");
    spilit_linked(START);
}