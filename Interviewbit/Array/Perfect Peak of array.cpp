/*
eg 5 1 4 6 8 10 7 9
perfect peak exist at 6 therefore return 1
if peak doesn't exit 
eg 5 4 4 1
return 0
*/
#include<iostream>
#include<vector>
using namespace std;
int perfectPeak(vector<int> &a)
{
    int n=a.size();
    vector<int> prefix(n);
    vector<int> suffix(n);

    prefix[0]=a[0];
    for(int i=1;i<a.size();i++)
    {
        prefix[i]=max(prefix[i-1],a[i]);
    }
    suffix[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--)
    {
        suffix[i]=min(suffix[i+1],a[i]);
    }
    for(int i=1;i<=n-2;i++)
    {
        if(prefix[i-1]<a[i] && a[i]<suffix[i+1])
        {
            return 1;
        }
    }
    return 0;
}
int  main()
{
   vector<int> a;
   a.push_back(5);
   a.push_back(1);
   a.push_back(4);
   a.push_back(3);
   a.push_back(6);
   a.push_back(8);
   a.push_back(10);
   a.push_back(7);
   a.push_back(9);
   cout<<perfectPeak(a);
}
