#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int target;
    cin>>target;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    //find element in the 2d matrix
    int r=0,c=m-1;
    bool flag=false;
    while(r<n && c>=0)
    {
        if(arr[r][c]==target)
        {
            flag=true;
        }
        if(arr[r][c]>target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    if(flag)
    {
        cout<<"Element is present";
    }
    else
    {
        cout<<"Element is not present";
    }
    return 0;
}
