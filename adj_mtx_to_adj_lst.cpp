#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int v,e;
  int a,b;
  int c;
  cout<<"Number of Vertices=";
  cin>>v;
  cout<<"Number of Edges=";
  cin>>e;
  vector<int>Adjlst[v];
  int Adjmtx[v][v];
  for(int i=0;i<v;i++)
  {
    for(int j=0;j<v;j++)
    {
        cin>>c;
        Adjmtx[i][j]=c;
    }
  } 
  cout<<endl<<endl;
  for(int i=0;i<v;i++)
  {
    for(int j=0;j<v;j++)
    {
        if(Adjmtx[i][j]==1)
        {
          Adjlst[i].push_back(j);
          //Adjlst[j].push_back(i);
        }
    }
  }
  for(int i=0;i<v;i++)
  {
    cout<<i<<":";
    for(int j=0;j<Adjlst[i].size();j++)
    {
      cout<<Adjlst[i][j]<<",";
    }
    cout<<endl;
  }

}