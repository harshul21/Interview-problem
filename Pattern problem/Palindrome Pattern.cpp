/*
for n=5
    1
   212
  32123
 4321234
543212345
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
            cout<<j;
        }
        for(int j=2;j<=k;j++)
        {
            cout<<j;
        }
        k++;
        cout<<endl;
    }
    return 0;
}
