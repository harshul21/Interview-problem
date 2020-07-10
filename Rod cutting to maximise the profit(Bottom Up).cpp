#include<iostream>
using namespace std;
int memo[100];
int maxProfit_bu(int arr[],int totalLen)
{
    int dp[100] = {0};
    for(int len=1;len<=totalLen;++len)
    {
        int best = 0;
        for(int cut=1; cut<=len;++cut)
        {
            best = max(best,arr[cut] + dp[len-cut]);
        }
        dp[len] = best;
    }
    return dp[totalLen];
}
int main()
{
    int priceofEachLen[100];
    int totalLen;
    cin>>totalLen;

    for(int eachpiece =1; eachpiece <= totalLen; ++eachpiece)
    {
        cin>> priceofEachLen[eachpiece];
    }
    ///reset memopad
    for(int i=0;i<=totalLen; ++i)
    {
        memo[i]=-1;
    }
    int ans = maxProfit_bu(priceofEachLen, totalLen);
    cout<<ans;
}
