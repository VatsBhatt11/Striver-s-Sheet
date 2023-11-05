class Solution {
  public:
    bool detect(int i,vector<int>&v,vector<int>adj[])
    {
        queue<pair<int,int>>q;
        q.push({i,-1});
        v[i]=1;
        while(!q.empty())
        {
            int node=q.front().first;
            int parent=q.front().second;
            q.pop();
            for(auto it:adj[node])
            {
                if(!v[it])
                {
                    v[it]=1;
                    q.push({it,node});
                }
                else
                {
                    if(it!=parent)
                        return true;
                }
            }
        }
        return false;
    }
    
    bool dfs(int src,int parent,vector<int>&v,vector<int>adj[])
    {
        v[src]=1;
        for(auto it:adj[src])
        {
            if(!v[it])
            {
                if(dfs(it,src,v,adj))
                    return true;
            }
            else{
                if(it!=parent)
                    return true;
            }
        }
        return false;
    }
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        vector<int>v(V,0);
        for(int i=0;i<V;i++)
        {
            if(!v[i])
            {
                // if(detect(i,-1,v,adj))
                //     return true;
                if(dfs(i,-1,v,adj))
                    return true;
            }
        }
        return false;
    }
};