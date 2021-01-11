/*
For n=5
    *****
   *****
  *****
 *****
*****
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
        for(int j=1;j<=n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
        k++;
    }
    return 0;
}
