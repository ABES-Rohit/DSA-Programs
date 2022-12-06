#include<stdio.h>
#include<stdlib.h>
#include"linkedlist.h"
void Merge_Lkdlst(struct node **START1,struct node **START2)
{
    struct node *p,*q,*START3;
    START3=NULL;
    p=*START1;
    q=*START2;
    while(p!=NULL && q!=NULL)
    {
       if((p->info)<(q->info))
       {
           insert_end(&START3,p->info);
           p=p->next;
       }
       else
       {
         insert_end(&START3,q->info);
          q=q->next;
       }
    }
    while(p!=NULL)
    {
        insert_end(&START3,p->info);
        p=p->next;
    }
    while(q!=NULL)
    {
        insert_end(&START3,q->info);
        q=q->next;
    }
//printf("\n\n");
    traverse(&START3);
   // return START3;
}
int main()
{
    struct node *START1,*START2,*START3;
    START1=NULL;
    START2=NULL;
    ordered_insertion(&START1,50);
    ordered_insertion(&START1,100);
    ordered_insertion(&START1,30);
    ordered_insertion(&START1,20);
    ordered_insertion(&START1,5);
    traverse(&START1);
    printf("\n");
    ordered_insertion(&START2,100);
    ordered_insertion(&START2,4);
    ordered_insertion(&START2,8);
    ordered_insertion(&START2,15);
    traverse(&START2);
    printf("\n");
    Merge_Lkdlst(&START1,&START2);
    //traverse(&START3);
}