#include<iostream>
using namespace std;
int main()
{
    int n,l,z;
    cout<<"Enter number of rows= ";
    cin>>n;
    cout<<"How many enteries are non zero= ";
    cin>>z;
    int A[n][n];
    int S[z];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>A[i][j];
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(A[i][j]!=0)
            {
               l=((i-1)*n-(((i-2)*(i-1))/2))+(j-i+1); // location formula for upper tringular matrix.
               S[l]=A[i][j];
            }
        }
    }
    cout<<endl;
    for(int t=1;t<=z;t++)
    {
        cout<<S[t]<<" ";
    }

}