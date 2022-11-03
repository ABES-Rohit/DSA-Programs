#include<stdio.h>
#include<math.h>
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
int jumpsrh(int A[],int s,int key)
{   int low=0,strt=0;
    int jmp=sqrt(s);
    for( strt=0;strt<s;strt+=jmp)
    {
        if(A[strt]==key)
        {
            return strt;
        }
        else
            if(A[strt]<key)
             {
               low=strt;
             }
        else{
                break;}
    }
    for(int i=low;i<strt;i++)
    {
         if(A[i]==key)
         {
            return i;
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
    int x=jumpsrh(arr,n,key);
    printf("Search key present at %d index",x);
}