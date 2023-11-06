class Solution {
public:
    bool checkDfs(int node,vector<int>&visited,
    vector<int>&pathVisited,vector<int>&check,vector<int>adj[])
    {
        visited[node] = 1;
        pathVisited[node] = 1;
        check[node] = 1;
        for(auto it:adj[node])
        {   
            if(!visited[it])
            {
                if(checkDfs(it,visited,pathVisited,check,adj))
                {
                    check[node] = 0;
                    return true;
                }
            }
            else if(pathVisited[it])
            {
                check[node] = 0;
                return true;
            }
        }
        pathVisited[node] = 0;
        return false;
    }

    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int v = graph.size();
        vector<int> adj[v];
        vector<int> visited(v),pathVisited(v),check(v);
        vector<int> ans;
        for(int i=0;i<v;i++)
        {
            for(auto it:graph[i])
                adj[i].push_back(it);
        }
        for(int i=0;i<v;i++)
        {
            if(!visited[i])
                checkDfs(i,visited,pathVisited,check,adj);
        }
        for(int i=0;i<v;i++)
            if(check[i]) ans.push_back(i);
        return ans;
    }
};