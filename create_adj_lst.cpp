#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int v,e;
    int a,b;
    cout<<"Number of Vertices in Graph=";
    cin>>v;
    cout<<"Number of Edges in Graph=";
    cin>>e;
    vector<int>Adjlst[e];
    for(int i=0;i<=v;i++)
    {
        cout<<"End points of Edge "<<i+1<<"=";
        cin>>a>>b;
        Adjlst[a].push_back(b);
        Adjlst[b].push_back(a);   // for directed Graph remove this  
    }
    for(int j=0;j<v;j++)
    {
        cout<<j<<":";
        for(int k=0;k<Adjlst[j].size();k++)
        {
            cout<<Adjlst[j][k]<<",";
        }
        cout<<endl;
    }
}