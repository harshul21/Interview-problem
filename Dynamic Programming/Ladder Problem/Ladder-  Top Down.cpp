#include<iostream>
using namespace std;
int Ladder_topdown(int n,int k,int dp[])
{
    ///Base Case
    if(n==0)
    {
        return 1;
    }
    ///Look Up
    if(dp[n]!=0)
    {
        return dp[n];
    }
    ///Rec Case
    int ways = 0;
    for(int i=1;i<=k;i++)
    {
        if(n-i>=0)
        {
            ways += Ladder_topdown(n-i,k,dp);
        }
    }
    return dp[n]= ways;
}
int main()
{
    int n,k;
    int dp[100]={0};
    cin>>n>>k;
    cout<<"Ways:"<<Ladder_topdown(n,k,dp);
    return 0;
}
