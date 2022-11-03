#include<stdio.h>
void sort(int A[],int sz)
{  int t=0;
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
int ternary_srh(int A[],int size,int key)
{
    int low=0,high=size-1;
    while(low<=high)
    {
        int mid1=low+(high-low)/3;
        int mid2=high-(high-low)/3;               
        if(A[mid1]==key)
          {           return mid1;}
        else
           if(A[mid2]==key)
           {          return mid2;}
        else
           if(A[mid1]>key)
           {          high=mid1-1;}
        else
           if(A[mid2]<key)
           {          low=mid2+1;}
        else{
                      low=mid1+1;
                      high=mid2-1;}           
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
    int x=ternary_srh(arr,n,key);
    printf("Search key present at %d index",x);
}