#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *GetNode()
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}
void InsBeg(struct node **start,int x)
{
    struct node *p;
    p=GetNode();
    p->data=x;
    p->next=*start;
    *start=p;
}
void InsEnd(struct node **start,int x)
{
    struct node *q,*p;
    p=  GetNode();
    p->data=x;
    p->next=NULL;
    if((*start)==NULL)
    {
        InsBeg(&(*start),x);
    }
    else
    {
        q=*start;
       while(q->next!=NULL)
       {
            q=p->next;
       }
       q->next=p;
    }
}
void Traverse(struct node *start)
{
    struct node *p;
    p=start;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main()
{
    struct node *HT[15];
    int r;
    for(int i=0;i<=14;i++)
    {
        HT[i]=NULL;
    }
    int n;
    cout<<"Enter total number of data values= ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        cout<<"Enter data value= ";
        cin>>x;
        r=x%10;
        InsBeg(&HT[r],x);
    }
    for(int j=0;j<=14;j++)
    {
        cout<<j<<":";
        Traverse(HT[j]);
        cout<<endl;
    }
}  