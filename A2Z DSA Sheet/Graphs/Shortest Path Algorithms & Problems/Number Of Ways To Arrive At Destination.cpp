#define i long long
class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<pair<i,i>> adj[n];
        for(auto it:roads)
        {
            adj[it[0]].push_back({it[1],it[2]});
            adj[it[1]].push_back({it[0],it[2]});
        }
        vector<i> dist(n,LONG_MAX);
        vector<i> ways(n);
        ways[0] = 1;
        dist[0] = 0;
        priority_queue<pair<i,i>,vector<pair<i,i>>,
        greater<pair<i,i>>> pq;
        pq.push({0,0});
        i mod = 1e9+7;
        while(!pq.empty())
        {
            i dis = pq.top().first;
            i node = pq.top().second;
            pq.pop();
            for(auto it:adj[node])
            {
                i adjNode = it.first;
                i wt = it.second;
                if(dis + wt < dist[adjNode])
                {
                    dist[adjNode] = dis + wt;
                    ways[adjNode] = ways[node];
                    pq.push({dist[adjNode],adjNode});
                }
                else if(dis + wt == dist[adjNode])
                    ways[adjNode] = (ways[adjNode] + ways[node])%mod;
            }
        }
        return ways[n-1]%mod;
    }
};