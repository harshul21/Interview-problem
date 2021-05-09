//shortest distance in undirected graph
void bfs(vector<int> adj[],int n,int src)
{
    int dist[n];
    for(int i=0;i<n;i++)
    {
        dist[i]=INT_MAX;
    }
    queue<int> q;
    q.push(src);
    dist[src]=0;
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        for(auto it:adj[node])
        {
            if(dist[node]+1<dist[it])
            {
                dist[it]=dist[node]+1;
                q.push(it);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<dist[i]<<" ";
    }
}
