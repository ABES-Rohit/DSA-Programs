#include<stdio.h>
#include<stdlib.h>
#include"linkedlist.h"

void swap_pair(struct node *START)
{
    int t;
    struct node *p,*q;
    p=START;
    q=START->next;
    while(q!=NULL)
    {
      t=p->info;
      p->info=q->info;
      q->info=t;
      p=p->next->next;
      q=q->next;
      if(q!=NULL)
      {
        q=q->next;
      }
    }
    traverse(&START);
}
int main()
{
    struct node *START;
    START=NULL;
    insert_beg(&START,1);
    insert_end(&START,2);
    insert_end(&START,3);
    insert_end(&START,4);
    insert_end(&START,5);
    //insert_end(&START,6);
    traverse(&START);
    printf("\n");
    swap_pair(START);
}