#include<stdio.h>
#include<stdlib.h>
#include"linkedlist.h"

void add_linked_list(struct node *START1,struct node *START2)
{
    struct node *p,*q,*START3;
    reverse_inplace(START1);
    reverse_inplace(START2);
    START3=NULL;
    p=START1;
    q=START2;
    int carry=0,total,sum;
    while(p!=NULL && q!=NULL)
    {
       total=(p->info)+(q->info)+carry;
       sum=total%10;
       carry=total/10;
       p=p->next;
       q=q->next;
       insert_beg(&START3,sum);
    }
    while(p!=NULL)
    {
        total=p->info+carry;
        sum=total%10;
        carry=total/10;
        p=p->next;
        insert_beg(&START3,sum);
    }
    while(q!=NULL)
    {
        total=q->info+carry;
        sum=total%10;
        carry=total/10;
        q=q->next;
        insert_beg(&START3,sum);
    }
    if(carry>0)
    {
        insert_beg(&START3,carry);
    }
    traverse(&START3);
}
int main()
{
     struct node *START1,*START2;
     START1=NULL;
     START2=NULL;
     ordered_insertion(&START1,50);
     ordered_insertion(&START1,100);
     /*ordered_insertion(&START1,30);
     ordered_insertion(&START1,20);
     ordered_insertion(&START1,5);*/
     traverse(&START1);
     printf("\n");
     ordered_insertion(&START2,100);
     ordered_insertion(&START2,4);
     /*ordered_insertion(&START2,30);
     ordered_insertion(&START2,15);*/
     traverse(&START2);
     printf("\n");
     add_linked_list(START1,START2);
}