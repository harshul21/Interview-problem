#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str="abcccccccccddddddddddddddddddddddd";
    unordered_map<char,int> mp;
    for(int i=0; str[i];i++)
    {
        if(mp.find(str[i])==mp.end())
        {
            mp.insert(make_pair(str[i],1));
        }
        else
        {
        mp[str[i]]++;
        }
    }
    int mx=INT_MIN;
    for(auto &it:mp)
    {
        mx=max(mx,it.second);
    }
    for(auto &itt:mp)
    {
        if(itt.second==mx)
        {
            cout<<itt.first;
        }
    }
    return 0;
}
