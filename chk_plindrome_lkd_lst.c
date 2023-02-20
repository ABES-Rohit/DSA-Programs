#include<stdio.h>
#include<stdlib.h>
#include"linkedlist.h"

struct node *reverse(struct node *p)
{
    struct node *r;
    r=NULL;
    while(p!=NULL)
    {
        insert_beg((&r),p->info);
        p=p->next;
    }
    return r;
}

void check_palindrome(struct node *START,struct node *q)
{
    while(START!=NULL)
    {
        if((START->info)==(q->info))
        {
            START=START->next;
            q=q->next;
        }
        else
        {
            printf("Not A Palindrome");
            return;
        }
    }
    printf("Palindrome");
}
int main()
{
    struct node *START,*q;
    START=NULL;
    insert_beg(&START,11);
    insert_end(&START,2);
    insert_end(&START,3);
    insert_end(&START,2);
    insert_end(&START,11);
    traverse(&START);
    printf("\n");
    q=reverse(START);
    traverse(&q);
    printf("\n");
    check_palindrome(START,q);
}