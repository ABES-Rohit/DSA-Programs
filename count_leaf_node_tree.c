#include<stdio.h>
#include<stdlib.h>
#include"binarytree.h"

int count_leaf(struct tree *ROOT)
{
    if(ROOT==NULL)
    {
        return 0;
    }
    else
    {
        if((ROOT->left)==NULL && (ROOT->right)==NULL)
        {
            return 1;
        }
        else
        {
            return count_leaf(ROOT->left) + count_leaf(ROOT->right);
        }
    }
}
int main()
{
    struct tree *ROOT;
    int leaf;
    ROOT=NULL;
    ROOT=makenode(1);
    ROOT->left=makenode(2);
    ROOT->right=makenode(3);
    ROOT->left->left=makenode(4);
    ROOT->right->left=makenode(5);
    ROOT->right->right=makenode(6);
    leaf=count_leaf(ROOT);
    printf("Total leaf nodes=%d",leaf);
}