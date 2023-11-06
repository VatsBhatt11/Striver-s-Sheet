#include <bits/stdc++.h>

void dfs(int node,vector<int>&visited,stack<int>&st,vector<int>adj[])
{
    visited[node] = 1;
    for(auto it:adj[node]){
        if(!visited[it])
            dfs(it,visited,st,adj);
    }
    st.push(node);
    return ;
}

vector<int> topologicalSort(vector<vector<int>> &graph, int edges, int nodes) {
    vector<int> ans;
    vector<int> adj[nodes];
    for(auto it:graph)
        adj[it[0]].push_back(it[1]);
    stack<int> st;
    vector<int> visited(nodes);
    for(int i=0;i<nodes;i++)
    {   
        if(!visited[i])
            dfs(i,visited,st,adj);
    }
    while(!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
}