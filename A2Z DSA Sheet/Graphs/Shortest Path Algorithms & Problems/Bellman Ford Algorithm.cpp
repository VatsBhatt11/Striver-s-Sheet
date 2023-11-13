vector<int> bellmonFord(int n, int m, int src, vector<vector<int>> &edges) {
    vector<int> ans(n+1,1e8);
    ans[src] = 0;
    for(int i=0;i<n-1;i++)
    {
        for(auto it:edges)
        {
            int u = it[0];
            int v = it[1];
            int wt = it[2];
            if(ans[u] + wt < ans[v])
            {
                // if(i == n-1)
                //   return {-1};
                ans[v] = ans[u] + wt;
            }
        }
    }
    
    return ans;
}