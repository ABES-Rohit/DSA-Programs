#include<stdio.h>
#include<stdlib.h>
int parition(int Arr[],int lo,int hig)
{ 
  int i=lo,f=hig-1,pivot=Arr[lo];
  int x=0;
  do
  {
    do
    {
      i++;
    } while (Arr[i]<pivot);
     if(Arr[f]>pivot)
     {
        f--;
     }
    if(i<f)
    {
      int t=Arr[f];
      Arr[f]=Arr[i];
      Arr[i]=t;
    }
  }while(i<f);
    if(i>f)
    { 
        x=Arr[lo];
        Arr[lo]=Arr[f];
        Arr[f]=x;
    }
 return f;
}
void quick_sort(int A[],int low,int high)
{    
    int j=0;
     j=parition(A,low,high);
    quick_sort(A,low,j);
    quick_sort(A,j+1,high);
}
int main()
{
    int arr[5]={10,5,9,4,30};
    int low=0;
    int high=5;
    arr[6]=INT_MAX;
    quick_sort(arr,low,high);
    printf("Sorted array=");
    for(int i=0;i<6;i++)
    {
        printf(" %d",arr[i]);
    }

}