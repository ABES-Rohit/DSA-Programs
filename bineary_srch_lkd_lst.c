#include<stdio.h>
#include<stdlib.h>
#include"linkedlist.h"

struct node *find_middle(struct node *START)
{
    struct node *p,*q;
    p=START;
    q=START->next;
    while(q!=NULL && (q->next)!=NULL)
    {   
        p=p->next;
        q=q->next->next;
    }
    return p;
}

void bineary_srch(struct node *START,int x)
{
    struct node *m;
    while((START->next)!=NULL)
    {
        m=find_middle(START);
        if((m->info)==x)
        {   
            printf("Found");
            return;
        }
        else
        {
            if(x<(m->info))
            {
                m->next=NULL;
            }
            else
            {
                START=m->next;
            }
        }
    }
    if((START->info)==x)
    {   
        printf("Found");
        return;
    }
    else
    {
        printf("Not Found");
        return;
    }
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
    insert_end(&START,6);
    traverse(&START);
    printf("\n");
    bineary_srch(START,1);
}