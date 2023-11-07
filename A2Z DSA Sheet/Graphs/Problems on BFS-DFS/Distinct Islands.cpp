#include <bits/stdc++.h>

void dfs(int r,int c,vector<vector<int>>&visited,
set<vector<pair<int,int>>>&st,int** arr,int br,int bc,vector<pair<int,int>>&v)
{
    visited[r][c] = 1;
    int n = visited.size();
    int m = visited[0].size();
    int ar[] = {-1,0,1,0};
    int ac[] = {0,1,0,-1};
    v.push_back({r-br,c-bc});
    for(int i=0;i<4;i++)
    {
        int nr = r + ar[i];
        int nc = c + ac[i];
        if(nr>=0 && nr<n && nc>=0 && nc<m && arr[nr][nc] == 1 &&
        !visited[nr][nc])
            dfs(nr,nc,visited,st,arr,br,bc,v);
    }
    return ;
}

int distinctIslands(int** arr, int n, int m)
{
    vector<vector<int>> visited(n,vector<int>(m));
    set<vector<pair<int,int>>> st;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j] == 1 && !visited[i][j])
            {
                vector<pair<int,int>>v;
                dfs(i,j,visited,st,arr,i,j,v);
                st.insert(v);
            }
        }
    }
    return st.size();
}