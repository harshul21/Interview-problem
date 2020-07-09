#include<iostream>
#include<climits>
using namespace std;
int minSteps(int n,int dp[])
{
    if(n==1)
    {
        return 0;
    }
    ///Rec Case
    ///Look up if n is already computed
    if(dp[n]!=0)
    {
        return dp[n];
    }
    ///Compute id dp[n] is not known
    int op1,op2,op3;
    op1=op2=op3=INT_MAX;

    if(n%3==0)
    {
        op1 = minSteps(n/3,dp)+1;
    }
    if(n%2==0)
    {
        op2 = minSteps(n/2,dp)+1;
    }
    op3 = minSteps(n-1,dp)+1;

    int ans = min(min(op1,op2),op3);
    return dp[n]=ans;
}
int main()
{
    int n;
    cin>>n;
    int dp[100]={0};
    cout<<minSteps(n,dp);
    return 0;
}
