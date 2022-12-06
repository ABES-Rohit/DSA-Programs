#include<stdio.h>
#include<stdlib.h>
#include"lkdlst_poly.h"
void polynomial_multi(struct node *poly1,struct node *poly2)
{
    struct node *p,*q,*poly3,*r;
    q=poly2;
    poly3=NULL;
    while(q!=NULL)
    {
        p=poly1;
        while(p!=NULL)
        {
            ordered_insertion(&poly3,(p->coff)*(q->coff),(p->expo)+(q->expo));
            p=p->next;
        }
        q=q->next;
    }
    r=poly3;
    while(r->next!=NULL)
    {
        if((r->expo)==(r->next->expo))
        {
           r->coff=r->coff+r->next->coff;
           delete_aftr(&r);
        }
        else
        {
            r=r->next;
        }
    }
    traverse(&poly3);
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
         insert_end(&poly1,5,0);
         traverse(&poly1);
         printf("\n\n");
         insert_beg(&poly2,9,4);
         insert_end(&poly2,8,3);
        /* insert_end(&poly2,7,2);
         insert_end(&poly2,6,1);
         insert_end(&poly2,6,0);*/
         traverse(&poly2);
         printf("\n\n");
         polynomial_multi(poly1,poly2);

}