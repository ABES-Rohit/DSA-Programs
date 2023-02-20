#include<stdio.h>
#include<stdlib.h>

void pre_traverse(struct gnode *ROOT)
{
    struct gnode *p;
    p=ROOT;
    if(p!=NULL)
    {
       printf("%c ",p->data);
       pre_traverse(p->child);
       pre_traverse(p->sibling);
    }
}
void in_traverse(struct gnode *ROOT)
{
    struct gnode *p;
    p=ROOT;
    if(p!=NULL)
    {
      in_traverse(ROOT->child);
      printf("%c ",ROOT->data);
      in_traverse(ROOT->sibling);
    }
}
void post_traverse(struct gnode *ROOT)
{
    struct gnode *p;
    p=ROOT;
    if(p!=NULL)
    {
       post_traverse(ROOT->child);
       post_traverse(ROOT->sibling);
       printf("%c ",ROOT->data);
    }
}

struct gnode 
{
    char data;
    struct gnode *child;
    struct gnode *sibling;
};

struct gnode *makenode(char x)
{
    struct gnode *p;
    p=(struct gnode*)malloc(sizeof(struct gnode));
    p->data=x;
    p->child=NULL;
    p->sibling=NULL;
    return p;
}

void createtree(struct gnode **T)
{
   int exsist;
   char dat;
   struct gnode *p;
   printf("Is %d child exsist",(*T)->data);
   scanf("%d",&exsist);
   if(exsist)
   {
      printf("Enter child node data of %d =",(*T)->data);
      scanf("%c",&dat);
      p=makenode(dat);
      (*T)->child=p;
      createtree(&p);
   }
   printf("Is %d sibling node exsist",(*T)->data);
   scanf("%d",&exsist);
   if(exsist)
   {
      printf("Enter %d sibling node data=",(*T)->data);
      scanf("%c",&dat);
      p=makenode(dat);
      (*T)->sibling=p;
      createtree(&p);
   }
}

int main()
{
   char dta;
   struct gnode *ROOT;
   ROOT=NULL;
   printf("Enter root node data=");
   scanf("%c",&dta);
   ROOT=makenode(dta);
   createtree(&ROOT);
   printf("Pre ordered traversal=");
   pre_traverse(ROOT);
   printf("\n");
   printf("In ordered traversal=");
   in_traverse(ROOT);
   printf("\n");
   printf("Post ordred traversal=");
   post_traverse(ROOT);
}