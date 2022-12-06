#include<stdio.h>
#include<stdlib.h>
#include"linkedlist.h"

struct node *p,*q,*r;
int delete_beg(struct node **START)
{   
   p=*START;
   int x;
   if((*START)==NULL)
   {
        printf("Void Deletion");
   }
   else
   {
            (*START)=(*START)->next;
            x=p->info;
            free(p);
            return x;
   }
}
int delete_aftr(struct node **s)
{
   if((*s)==NULL || (*s)->next==NULL)
   {
        printf("Void Deletion");
        exit(1);
   }
   else
   {  
    int x;
     q=(*s)->next;
     r=q->next;
     (*s)->next=r;
      x=q->info;
      free(q);
      return x;
   }
}
int delete_end(struct node **START)
{   
    int x;
    p=*START;
    q=NULL;
    while(p->next!=NULL)
    {
        q=p;
        p=p->next;
    }
    q->next=NULL;
    x=p->info;
    free(p);
    return x;
}

int main()
{
    struct node *START;
    START=NULL;
    int del,node;
    insert_beg(&START,60);
    insert_beg(&START,50);
    insert_beg(&START,40);
    insert_beg(&START,30);
    insert_beg(&START,20);
    insert_beg(&START,10);
    insert_aftr(&START,100);
   printf("Enter mid node to be deleted=");
    scanf("%d",&node);
    if(node==1)
    {
        del=delete_beg(&START);
    }
    else
    {
        p=START;
        for(int i=1;i<node-1;i++)
        {
           p=p->next; 
        }
        del=delete_aftr(&p);
    }
    printf("Deleted info=%d\n",del);

    traverse(&START);
}