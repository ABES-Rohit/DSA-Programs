#include<stdio.h>
#include<stdlib.h>
int n;
void display(int *arr)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
void ArrInsert(int *arr,int i,int x)
{
    for(int j=n-1;j<=i;j--)
    {
        arr[j+1]=arr[j];
    }
    arr[i]=x;
    //n=n+1;
}
void ArrDelete(int *arr)
{
    for(int i=0;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    //n=n-1;
}
void PQINSERT(int *arr,int x)
{
    int i=0;
    while(i<n && x>=arr[i])
    {
        i++;
    }
    ArrInsert(arr,i,x);
    n=n+1;
}
int PQDELETE(int *arr)
{
    int x;
    x=arr[0];
    ArrDelete(arr);
    n=n-1;
    return x;
}
int main()
{  
    int arr[100];
    n=0;
    int y;
   PQINSERT(arr,5); 
   PQINSERT(arr,1); 
   PQINSERT(arr,6); 
   PQINSERT(arr,1); 
   PQINSERT(arr,4); 
   display(arr);
   y=PQDELETE(arr);
   printf("%d\n",y);
    y=PQDELETE(arr);
   printf("%d\n",y);
    y=PQDELETE(arr);
   printf("%d",y);

}