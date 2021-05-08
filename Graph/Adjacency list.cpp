#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,m;
    cin>>n>>m;
    vector<int> adj[n+1];
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);//if teh graph is directed than this line will be  edited
    }
    for(int i=0;i<n+1;i++)
    {
        cout<<i<<" ";
        for(auto it:adj[i])
        {
            cout<<"->"<<it;
        }
        cout<<endl;
    }
    return 0;
}
//if the the edges are weighted
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,m;
    cin>>n>>m;
    vector<pair<int,int> adj[n+1];
    for(int i=0;i<m;i++)
    {
        int u,v,wt;
        cin>>u>>v>>wt;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    return 0;
}
