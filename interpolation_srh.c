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
int interplsrh(int A[],int s,int key)
{    int low=0,high=s-1,pos;
    while(low<=high){
		pos = low + ((key-A[low])/(A[high]-A[low])) * (high-low);
		if(A[pos] == key)
			return pos;
		else if(A[pos] > key)
		    high = pos-1;
		else
		    low = pos+1;
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
    int x=interplsrh(arr,n,key);
    printf("Search key present at %d index",x);
}