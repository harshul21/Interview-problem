#include<iostream>
#include<climits>
using namespace std;
int minCoinsBU(int N,int coins[],int T)
{
    int dp[100]={0};

    ///Iterate over all the states 1.....N
    for(int n=1;n<=N;n++)
    {
        dp[n]=INT_MAX;

        for(int i=0;i<T;i++)
        {
            if(n-coins[i]>=0)
            {
                int subprob = dp[n-coins[i]];
                dp[n] = min(dp[n], subprob+1);
            }
        }

    }
    return dp[N];
}
int main()
{
   int N = 15;
   int coins[] = {1,7,10};
   int dp[100] = {0};
   int T= sizeof(coins)/sizeof(int);

   cout<<minCoinsBU(N,coins,T);

   return 0;
}
