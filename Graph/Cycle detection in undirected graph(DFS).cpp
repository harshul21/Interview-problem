bool checkforcycle(int node,int parent,vector<int> &vis,vector<int> adj[])
{
    vis[node]=1;
    for(auto it:adj[node])
    {
        if(vis[it]==0)
        {
            if(checkforcycle(it,node,vis,adj));
            {
                return true;
            }
            else if(it!=parent)
            {
                return true;
            }
        }
        return false;
    }
}
bool iscycle(int V,vector<int> adj[])
{
    vector<int> vis(V+1,0);
    for(int i=1;i<=V;i++)
    {
        if(!vis[i])
        {
            if(checkforcycle(i,-1,vis,adj))
            {
                return true;
            }
        }
    }
    return false;
}
