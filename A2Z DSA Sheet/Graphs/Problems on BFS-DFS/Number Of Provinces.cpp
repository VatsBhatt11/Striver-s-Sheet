class Solution {
public:
    void dfs(int node,vector<bool>&visited,vector<int>adj[])
    {
        visited[node] = true;
        for(auto it:adj[node])
        {
            if(!visited[it])
                dfs(it,visited,adj);
        }
        return ;
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        int ans = 0;
        vector<bool> visited(n+1);
        vector<int>adj[n+1];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i!=j && isConnected[i][j])
                {
                    adj[i+1].push_back(j+1);
                    adj[j+1].push_back(i+1);
                }
            }
        }
        for(int i=1;i<=n;i++)
        {
            if(!visited[i])
            {
                ans++;
                dfs(i,visited,adj);
            }
        }
        return ans;
    }
};