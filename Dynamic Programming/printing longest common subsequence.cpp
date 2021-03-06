#include <bits/stdc++.h>
using namespace std;
string printlcs(string s1,string s2,int n,int m)
{
    int dp[n+1][m+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0||j==0)
            {
                dp[i][j]=0;
            }
        }
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                dp[i][j]=1+ dp[i-1][j-1];
            }
            else
            {
                dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            }
        }
    }

    int a=n;
    int b=m;
    string s="";
    while(a>0 and b>0)
    {
        if(s1[a-1]==s2[b-1])
        {
            s.push_back(s1[a-1]);
            a--;
            b--;
        }
        else
        {
            if(dp[a-1][b]>dp[a][b-1])
            {
                a--;
            }
            else
            {
                b--;
            }
        }
    }
    reverse(s.begin(),s.end());
    return s;
}
int main() 
{
    string s1="acbcf";
    string s2="abcdaf";
    cout<<printlcs(s1,s2,s1.length(),s2.length());
}
