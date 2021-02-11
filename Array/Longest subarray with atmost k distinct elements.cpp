#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int l=0,h=0;
    int k=3;
    int m=0;
    unordered_map<int,int> mp;
    while(h<n)
    {
        mp[arr[h]]++;
        while(mp.size()>k)
        {
            mp[arr[l]]--;
            if(mp[arr[l]]==0)
            {
                mp.erase(arr[l]);
            }
            l++;
        }
        m=max(m,h-l+1);
        h++;
    }
    cout<<m;
    return 0;
}
