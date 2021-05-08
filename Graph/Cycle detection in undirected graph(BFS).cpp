class Solution 
{
    public:
    //Function to detect cycle in an undirected graph.
    bool checkforcycle(int s,int V,vector<int> adj[],vector<int> &vis)
    {
        queue<pair<int,int>> q;
        q.push({s,-1});
        vis[s]=1;
        while(!q.empty())
        {
            int node = q.front().first;
            int prev = q.front().second;
            q.pop();
            for(auto it:adj[node])
            {
                if(!vis[it])
                {
                    vis[it]=true;
                    q.push({it,node});
                }
                else if(prev!=it)
                {
                    return true;
                }
            }
        }
        return false;
    }
	bool isCycle(int V, vector<int>adj[])
	{
	    vector<int> vis(V,0);
	    for(int i=0;i<V;i++)
	    {
	        if(!vis[i])
	        {
	            if(checkforcycle(i,V,adj,vis))
	            {
	                return true;
	            }
	        }
	    }
	    return false;
	}
};
