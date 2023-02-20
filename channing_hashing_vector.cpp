#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,r,x;
    vector<int>HT[15];
    cout<<"Enter number of data= ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        r=x%10;
        HT[r].push_back(x);
    }
    cout<<endl;
    for(int i=0;i<15;i++)
    {
         cout<<i<<":";
        for(int j=0;j<HT[i].size();j++)
        {
         cout<<HT[i][j]<<",";
        }
         cout<<endl;
    }
}