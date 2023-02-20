#include<stdio.h>
#include<stdlib.h>
int count=0;
struct tree
{
    char info;
    struct tree *left;
    struct tree *right;
};
struct tree *makenode(char x)
{
    count++;
    struct tree *p;
    p=(struct tree *)malloc(sizeof(struct tree));
    p->info=x;
    p->left=NULL;
    p->right=NULL;
    return p;
}
void pre_traverse(struct tree *ROOT)
{
    struct tree *p;
    p=ROOT;
    if(p!=NULL)
    {
       printf("%c ",p->info);
       pre_traverse(p->left);
       pre_traverse(p->right);
    }
}
void in_traverse(struct tree *ROOT)
{
    struct tree *p;
    p=ROOT;
    if(p!=NULL)
    {
      in_traverse(ROOT->left);
      printf("%c ",ROOT->info);
      in_traverse(ROOT->right);
    }
}
void post_traverse(struct tree *ROOT)
{
    struct tree *p;
    p=ROOT;
    if(p!=NULL)
    {
       post_traverse(ROOT->left);
       post_traverse(ROOT->right);
       printf("%c ",ROOT->info);
    }
}
int main()
{
    struct tree *ROOT;
    ROOT=NULL;
    /*int x;
    printf("Enter data");
    scanf("%d",x);
    root=Makenode(x);
    createtree(&root)*/
    ROOT=makenode('A');
    ROOT->left=makenode('B');
    ROOT->right=makenode('C');
    ROOT->left->left=makenode('D');
   // ROOT->left->right=makenode('E');
    ROOT->right->left=makenode('E');
    ROOT->right->right=makenode('F');
    ROOT->right->left->left=makenode('G');
    ROOT->right->left->left->right=makenode('H');
    printf("Pre Traverse=");
    pre_traverse(ROOT);
    printf("\n");
    printf("In Traverse=");
    in_traverse(ROOT);
    printf("\n");
    printf("Post Traverse=");
    post_traverse(ROOT);
    printf("\n");
    printf("Total node in Tree = %d",count);
}