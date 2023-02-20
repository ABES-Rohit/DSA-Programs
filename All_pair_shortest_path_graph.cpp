#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int w[100][100];
int D[100][100];
int min(int x,int y)
{
    if(x>y)
    {
        return y;
    }
    else
    {
        return x;
    }
}
int main()
{
    int v;
    cout<<"Enter number of vertices=";
    cin>>v;
    cout<<"Enter weighted matrix.";
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            cin>>w[i][j];
            if(i!=j)
            {
                if(w[i][j]==0)
                {
                    D[i][j]=INT_MAX/2;
                }
                else
                {
                    D[i][j]=w[i][j];
                }
            }
            else
            {
                D[i][j]=0;
            }
        }
    }
    
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            for(int k=0;k<v;k++)
            {
                D[i][j]=min(D[i][j],D[i][k]+D[k][j]);
            }
        }
    }
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            cout<<D[i][j]<<" ";
        }
        cout<<endl;
    }
}