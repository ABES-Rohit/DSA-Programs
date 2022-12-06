#include<stdio.h>
#include<stdlib.h>
#include"linkedlist.h"

struct node *concatenation_lkd(struct node *START1,struct node *START2)
{
    struct node *p;
    p=START1;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=START2;
    traverse(&START1);
}
int main()
{
    struct node *START1,*START2;
    START1=NULL;
    START2=NULL;
    ordered_insertion(&START1,10);
    ordered_insertion(&START1,100);
    ordered_insertion(&START1,30);
    ordered_insertion(&START1,20);
    ordered_insertion(&START1,5);
    traverse(&START1);
    printf("\n");
    ordered_insertion(&START2,160);
    ordered_insertion(&START2,20);
    ordered_insertion(&START2,30);
    ordered_insertion(&START2,15);
    traverse(&START2);
    printf("\n");
    concatenation_lkd(START1,START2);
}