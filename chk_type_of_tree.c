#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include"binarytree.h"

bool type_of_tree(struct tree *ROOT)
{
   if(ROOT==NULL)
   {
     return true;
   }
   if((ROOT->left)==NULL && (ROOT->right)==NULL)
   {
     return true;
   }
   else
   {
   /* if((ROOT->left)!=NULL && (ROOT->right)!=NULL)
    {
      return false;
    }
    else
    {*/
       return type_of_tree(ROOT->left) && type_of_tree(ROOT->right);
    }
   }

int main()
{
    struct tree *ROOT;
    bool ans;
    ROOT=NULL;
    ROOT=makenode(1);
    ROOT->left=makenode(2);
    ROOT->right=makenode(3);
    ROOT->left->left=makenode(4);
    ROOT->left->right=makenode(8);
    //ROOT->right->left=makenode(5);
    ROOT->right->right=makenode(6);
    ans=type_of_tree(ROOT);
    printf("%d",ans);
    if(ans)
    {
        printf("Full Tree");
    }
}