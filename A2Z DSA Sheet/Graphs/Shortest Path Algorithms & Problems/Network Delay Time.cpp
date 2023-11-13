class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<pair<int,int>> adj[n+1];
        for(auto it:times)
            adj[it[0]].push_back({it[1],it[2]});
        priority_queue<pair<int,int>> pq;
        vector<int> dist(n+1,1e9);
        dist[k] = 1;
        pq.push({0,k});
        while(!pq.empty())
        {
            int time = pq.top().first;
            int node = pq.top().second;
            pq.pop();
            for(auto it:adj[node])
            {
                int adjNode = it.first;
                int wt = it.second;
                if(time + wt < dist[adjNode])
                {
                    dist[adjNode] = time + wt;
                    pq.push({dist[adjNode],adjNode});
                }
            }
        }
        int ans = INT_MIN;
        for(int i=1;i<=n;i++)
        {
            if(dist[i] == 1e9)
                return -1;
            ans = max(ans,dist[i]);
        }
        return ans;
    }
};