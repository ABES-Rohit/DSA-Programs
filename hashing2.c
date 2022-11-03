#include<stdio.h>
#include<math.h>
int nodigit(int n)
{
    int digit=0;
    while(n!=0)
    {
        n=n/10;
        digit++;
    }
    return digit;
}
int midsquare(int key,int ts)
{
    int a=nodigit(ts-1);
    int b=nodigit(key);
    int c=((2*b)-a)/2;
    int div=pow(10,c);
    int x=(key*key)/div;
    int d=pow(10,a);
    int loc=x%d;
    return loc;
}
int main()
{
    int ts,key;
    printf("Enter table size=");
    scanf("%d",&ts);
    printf("Enter key=");
    scanf("%d",&key);
    midsquare(key,ts);
    printf("%d",midsquare(key,ts));
}