/*
for n=5
    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n-i);j++)
        {
            cout<<" ";
        }
        for(int j=k;j>=1;j--)
        {
            cout<<"*";
        }
        for(int j=2;j<=k;j++)
        {
            cout<<"*";
        }
        k++;
        cout<<endl;
    }
    int m=n;
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=(n-i);j++)
        {
            cout<<" ";
        }
        for(int j=m;j>=1;j--)
        {
            cout<<"*";
        }
        for(int j=2;j<=m;j++)
        {
            cout<<"*";
        }
        m--;
        cout<<endl;
    }
    return 0;
}
