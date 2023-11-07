vector<int> shortestPath(int n, vector<vector<int>>&edges, int src) {
    vector<int> dis(n,INT_MAX);
    vector<int> adj[n];
    for(auto it:edges)
    {
        adj[it[0]].push_back(it[1]);
        adj[it[1]].push_back(it[0]);
    }
    queue<pair<int,int>> q;
    dis[src] = 0;
    vector<int> visited(n);
    visited[src] = 1;
    q.push({src,0});
    while(!q.empty())
    {
        int u = q.front().first;
        int dt = q.front().second;
        q.pop();
        for(auto v:adj[u])
        {
            if(!visited[v])
            {
                visited[v] = 1;
                q.push({v,dt+1});
            }
            if(dt + 1 < dis[v])
                dis[v] = dt + 1;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(dis[i] == INT_MAX)
            dis[i] = -1;
    }
    return dis;
}