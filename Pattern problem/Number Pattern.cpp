
/*
for n=5
    1 
   1 2 
  1 2 3 
 1 2 3 4 
1 2 3 4 5 
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
        for(int j=1;j<=(n-k);j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=k;j++)
        {
            cout<<j<<" ";
        }
        k++;
        cout<<endl;
    }
    return 0;
}
