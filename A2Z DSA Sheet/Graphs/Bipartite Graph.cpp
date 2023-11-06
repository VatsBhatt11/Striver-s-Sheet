bool helper(int node,int col,vector<int>&color,vector<int>adj[])
{
	color[node] = col;
	for(auto adjNode:adj[node])
	{
		if(color[adjNode]==-1)
			helper(adjNode,!col,color,adj);
		else if(color[node] == color[adjNode])
			return false;
	}
	return true;
}

bool isGraphBirpatite(vector<vector<int>> &edges) {
	int n = edges.size();
	vector<int> color(n,-1);
	vector<int> adj[n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(edges[i][j])
			{
				adj[i].push_back(j);
				// adj[j].push_back(i);
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		if(color[i]==-1)
		{
			if(!helper(i,0,color,adj))
				return false;
		}
	}
	return true;
}