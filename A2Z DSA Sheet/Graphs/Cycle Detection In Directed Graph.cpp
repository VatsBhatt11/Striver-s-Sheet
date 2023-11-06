bool checkDfs(int node,vector<int>&visited,
vector<int>&pathVisited,vector<int>adj[])
{
	visited[node] = 1;
	pathVisited[node] = 1;
	for(auto adjNode:adj[node])
	{
          if (!visited[adjNode]) {
            if (checkDfs(adjNode, visited, pathVisited, adj))
              return true;
          } else if (pathVisited[adjNode])
            return true;
	}
	pathVisited[node] = 0;
	return false;
}

bool isCyclic(vector<vector<int>>& edges, int v, int e)
{
	vector<int> adj[v];
	vector<int> visited(v);
	vector<int> pathVisited(v);
	for(auto it:edges)
		adj[it[0]].push_back(it[1]);
	for(int i=0;i<v;i++)
	{
		if(!visited[i])
			if(checkDfs(i,visited,pathVisited,adj))
				return true;
	}
	return false;
}
