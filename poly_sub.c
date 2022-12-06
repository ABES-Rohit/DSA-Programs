#include<stdio.h>
#include<stdlib.h>
#include"lkdlst_poly.h"
void polynomial_add(struct node *poly1,struct node *poly2)
{
    struct node *p,*q,*poly3;
    p=poly1;
    q=poly2;
    poly3=NULL;
    while(p!=NULL && q!=NULL)
    {
        if((p->expo)==(q->expo))
        {
            insert_end(&poly3,(p->coff)+(q->coff),p->expo);
            p=p->next;
            q=q->next;
        }
        else
        {
            if((p->expo)>(q->expo))
            {
                insert_end(&poly3,p->coff,p->expo);
                p=p->next;
            }
            else
            {
                insert_end(&poly3,q->coff,q->expo);
                q=q->next;
            }
        }
    }
    while(p!=NULL)
    {
        insert_end(&poly3,p->coff,p->expo);
        p=p->next;
    }
     while(q!=NULL)
    {
        insert_end(&poly3,q->coff,q->expo);
        q=q->next;
    }
    traverse(&poly3);
}
void polynomial_subtrct(struct node *poly1,struct node *poly2)
{
    struct node *p,*q,*poly3;
    q=poly2;
    while(q!=NULL)
    {
        q->coff=-(q->coff);
        q=q->next;
    }
    traverse(&q);

   polynomial_add(poly1,poly2); 
}
int main()
{
    struct node *poly1,*poly2;
    poly1=NULL;
    poly2=NULL;
        insert_beg(&poly1,11,4);
         insert_end(&poly1,2,3);
         insert_end(&poly1,31,2);
         insert_end(&poly1,4,1);
          //insert_end(&poly1,5,0);
         traverse(&poly1);
         printf("\n\n");
         insert_beg(&poly2,9,4);
         insert_end(&poly2,8,3);
         insert_end(&poly2,7,2);
         insert_end(&poly2,6,1);
         insert_end(&poly2,6,0);
         traverse(&poly2);
         printf("\n\n");
         polynomial_subtrct(poly1,poly2);

}
