#include<iostream>
using namespace std;
int Ladder_BottomUp(int n,int k)
{
    int dp[100]={0};

    dp[0]=1;///Start Case
    for(int i=1;i<=n;i++)
    {
        dp[i] = 0;
        for(int j=1;j<=k;j++)
        {
            if(i-j>=0)
            {
                dp[i] +=dp[i-j];
            }
        }
    }
    ///See the bottom up
    for(int i=0;i<=n;i++)
    {
        cout<<dp[i]<<" ";
    }
    return dp[n];
}
int main()
{
    int n,k;
    int dp[100]={0};
    cin>>n>>k;
    cout<<"Ways:"<<Ladder_BottomUp(n,k);
    return 0;
}
