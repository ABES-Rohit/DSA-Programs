#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
int n;
void arrinsrt(int *A,int i,int a)
{
    for (int k = n-1; k >= i; k--)
    {
        A[k+1]=A[k];
    }
    A[i]=a;
}
void arrdlt(int *A)
{
    for(int j=0;j<n;j++)
    {
               A[j-1]=A[j];
    }

}
void Pqinsrt(int *A,int a)
{
    int i=0;
    while(i<n && a<A[i])
    {
        i++;
    }
    arrinsrt(A,i,a);
    n++;
}
void display(int *A)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
}
int Pqdlt(int *A)
{
    int a;
    a=A[n-1];
    // arrdlt(A);
     n=n-1;
     return a;
}
int main()
{
    int A[50];
    n=0;
    int y;
    Pqinsrt(A,1);
    Pqinsrt(A,5);
    Pqinsrt(A,4);
    Pqinsrt(A,2);
    Pqinsrt(A,10);
    Pqinsrt(A,2);
    display(A);
    printf("\n");
    printf("Delete element =\n");
   y=Pqdlt(A);
    printf("%d  ",y);
    y=Pqdlt(A);
    printf("%d  ",y);
    y=Pqdlt(A);
    printf("%d  ",y);
}