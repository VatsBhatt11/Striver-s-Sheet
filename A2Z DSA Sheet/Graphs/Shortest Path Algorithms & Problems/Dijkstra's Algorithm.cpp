vector<int> dijkstra(vector<vector<int>> &edge, int vertices, int edges, int source)
{
    vector<int> dis(vertices,1e9);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    dis[source] = 0;
    pq.push({0,source});
    vector<pair<int,int>> adj[vertices];
    for(auto it:edge)
    {
        adj[it[0]].push_back({it[1],it[2]});
        adj[it[1]].push_back({it[0],it[2]});
    }
    while(!pq.empty())
    {
        int d = pq.top().first;
        int node = pq.top().second;
        pq.pop();
        for(auto it:adj[node])
        {
            int adjNode = it.first;
            int edgeWgt = it.second;
            if(d + edgeWgt < dis[adjNode])
            {
                dis[adjNode] = d + edgeWgt;
                pq.push({dis[adjNode],adjNode});
            }
        }
    }
    return dis;
}