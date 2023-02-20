#include<stdio.h>
#include<stdlib.h>
#include"linkedlist.h"

struct node *reverse_inplace(struct node *START)
{
    struct node *p,*c,*n;
    c=START;
    p=NULL;
    n=c->next;
    while(c!=NULL)
    {
        c->next=p;
        p=c;
        c=n;
        if(n!=NULL)
          n=n->next;
    }
    START=p;
    //traverse(&START);
    return START;
}
int main()
{
    struct node *START;
    START=NULL;
    insert_beg(&START,60);
    insert_beg(&START,50);
    insert_beg(&START,40);
    insert_beg(&START,30);
    insert_beg(&START,20);
    insert_beg(&START,10);
    insert_aftr(&START,100);
    traverse(&START);
    printf("\n");
    reverse_inplace(START);
    traverse(&START);
}