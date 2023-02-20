#include<stdio.h>
#include<stdlib.h>
#include"binarytree.h"

int count_N2(struct tree *T)
{
    if(T==NULL)
    {
        return 0;
    }
    if((T->left)==NULL && (T->right)==NULL)
      {
        return 0;
      }
    else 
    {
        if((T->left)!=NULL && (T->right)!=NULL)
     {
        return 1 + count_N2(T->left) + count_N2(T->right);
     }
     else
     {
        return count_N2(T->left) + count_N2(T->right);
     }
    }
}
int main()
{
    struct tree *ROOT;
    int child;
    ROOT=NULL;
    ROOT=makenode(1);
    ROOT->left=makenode(2);
    ROOT->right=makenode(3);
    ROOT->left->left=makenode(4);
    ROOT->left->right=makenode(8);
    ROOT->right->left=makenode(5);
    ROOT->right->right=makenode(6);
    child=count_N2(ROOT);
    printf("Total 2 child nodes=%d",child);
}