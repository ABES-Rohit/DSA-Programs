#include<stdio.h>
int linearsrh(int A[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(A[i]==key)
            return i;
    }
    return -1;
}
int main()
{
    int arr[50],n,key;
    printf("Enter array size=");
    scanf("%d",&n);
    printf("Enter array elements=");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter search key=");
    scanf("%d",&key);
    int x=linearsrh(arr,n,key);
    printf("Key present at %d index",x);

}