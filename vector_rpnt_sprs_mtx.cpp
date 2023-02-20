#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
struct sparse{
    int row;
    int column;
    int value;
}S[100];

int main()
{
    int n,z;
    int M[n][n];
    cout<<"Enter number of rows= ";
    cin>>n;
    cout<<"Enter martix="<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>M[i][j];
        }
    }
    cout<<endl;
    int k=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int x=M[i][j];
            if(x!=0)
            {
               S[k].row=i;
               S[k].column=j;
               S[k].value=x;
               k++;
            }
        }
    }
    for(int i=0;i<k;i++)
    {
        cout<<S[i].row<<" "<<S[i].column<<" "<<S[i].value<<endl;
    }

}