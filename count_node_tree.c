#include<stdio.h>
#include<stdlib.h>
#include"binarytree.h"

int count_node(struct tree *ROOT)
{
    if(ROOT==NULL)
    {
       return 0;
    }
    
    else
    {
        return 1 + count_node(ROOT->left) + count_node(ROOT->right);
    }  
}
int main()
{
    struct tree *ROOT;
    ROOT=NULL;
    ROOT=makenode(1);
    ROOT->left=makenode(2);
    ROOT->right=makenode(3);
    ROOT->left->left=makenode(4);
   // ROOT->left->right=makenode('E');
    ROOT->right->left=makenode(5);
    ROOT->right->right=makenode(6);
    ROOT->right->left->left=makenode(7);
    //ROOT->right->left->left->right=makenode(8);
    printf("Pre Traverse=");
    pre_traverse(ROOT);
    printf("\n");
    printf("In Traverse=");
    in_traverse(ROOT);
    printf("\n");
    printf("Post Traverse=");
    post_traverse(ROOT);
    printf("\n");
    count=count_node(ROOT);
    printf("Total node in Tree = %d",count);
}