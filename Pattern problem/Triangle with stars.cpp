/*
    *
   * *
  * * *
 * * * *
* * * * *
*/
#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cin>>row>>col;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=(5-i);j++)
        {
            cout<<" ";
        }
        for(int j=5-i+1;j<=col;j++)
        {
            cout<<"*"<<" ";
        } 
        cout<<endl;
    }
    return 0;
}
