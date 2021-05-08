class Solution
{
    void dfs(int node,vector<int> &vis,vector<int> adj[],vector<int> &storedfs)
    {
        storedfs.push_back(node);
        vis[node]=1;
        for(auto it:adj[node])
        {
            if(!vis[i])
            {
                dfs(it,vis,adj,storedfs);
            }
        }
    }
    public:
    vector<int> dfsofgraph(int V,vector<int> adj[])
    {
        vector<int> storedfs;
        vector<int> vis(V+1,0);
        for(int i=0;i<=V;i++)
        {
            if(!vis[i])
            {
                dfs(i,vis,adj,storedfs);
            }
        }
        return storedfs;
    }
};
