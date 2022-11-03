#include<stdio.h>
int prime(int ts)
{
  
  for(int i=ts;i>1;i--)
  {  int count=1;
    for(int j=2;j<i;j++)
    {
        if(i%j==0)
        { 
          count=0;
          break;  
        }
    }
  if(count==1)
  {
    return i;
  }
  }
}
int division(int key,int ts)
{
   int near=prime(ts);
    int loc=key%near;
    return loc;
}
int main()
{
    int ts,key;
    printf("Enter key=");
    scanf("%d",&key);
    printf("Enter table size=");
    scanf("%d",&ts);
    int x=division(key,ts);
    printf("%d",x);

}