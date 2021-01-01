#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ch;
    getline(cin,ch);
    sort(ch.begin(),ch.end(),greater<int>());
    cout<<ch;
    return 0;
}
