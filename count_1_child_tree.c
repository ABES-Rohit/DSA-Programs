#include<stdio.h>
#include<stdlib.h>
#include"binarytree.h"

int count_N1(struct tree *T)
{
    if(T==NULL)
    {
        return 0;
    }
    if((T->left)==NULL && (T)->right==NULL)
    {
        return 0;
    }
    else
    {
        if((T->left)!=NULL && (T->right)!=NULL)
        {
           return count_N1(T->left) + count_N1(T->right);
        }
        else
        {
            return 1 + count_N1(T->left) + count_N1(T->right);
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
    ROOT->right->left=makenode(5);
    ROOT->right->right=makenode(6);
    ROOT->right->right->left=makenode(7);
    child=count_N1(ROOT);
    printf("Total 1 child nodes=%d",child);
}