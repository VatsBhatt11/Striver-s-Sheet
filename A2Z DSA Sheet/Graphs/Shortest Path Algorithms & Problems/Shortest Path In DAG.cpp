void topoSort(int node,stack<int>&st,vector<int>&visited,vector<pair<int,int>>adj[])
{
    visited[node] = 1;
    for(auto it:adj[node])
    {
        int adjNode = it.first;
        if(!visited[adjNode])
            topoSort(adjNode,st,visited,adj);
    }
    st.push(node);
    return ;
}

vector<int> shortestPathInDAG(int n, int m, vector<vector<int>> &edges)
{
    vector<int> dis(n,INT_MAX);
    vector<pair<int,int>> adj[n];
    for(auto it:edges)
        adj[it[0]].push_back({it[1],it[2]});
    stack<int> st;
    vector<int> visited(n);
    topoSort(0,st,visited,adj);
    dis[0] = 0;
    while(!st.empty())
    {
        int u = st.top();
        st.pop();
        for(auto it:adj[u])
        {
            int v = it.first;
            int wt = it.second;
            if(dis[u] + wt < dis[v])
                dis[v] = dis[u] + wt;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(dis[i]==INT_MAX)
            dis[i] = -1;
    }
    return dis;
}
