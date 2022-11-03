#include<stdio.h>
void sort(int A[],int sz)
{   int t=0;
    for(int i=0;i<sz;i++)
    {  
        for(int j=i+1;j<sz;j++)               
        {
            if(A[i]>A[j])
            {  
               t=A[i];
               A[i]=A[j];
               A[j]=t;
            }
        }
    }
}
int binarysrh(int A[],int size,int key)
{
    int low=0;
    int high=size-1;
    int mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(A[mid]==key)
        {
            return mid;
        }
        if(A[mid]>key)
        {
           high=mid-1;
        }
        if(A[mid]<key)
        {
            low=mid+1;
        }
    }
    return -1;
}
int main()
{
    int arr[50],n,key;
    printf("Enter array size=");;
    scanf("%d",&n);
    printf("Enter array elements=");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter search key=");
    scanf("%d",&key);
    sort(arr,n);
    int x=binarysrh(arr,n,key);
    printf("Search key present at %d index",x);
}