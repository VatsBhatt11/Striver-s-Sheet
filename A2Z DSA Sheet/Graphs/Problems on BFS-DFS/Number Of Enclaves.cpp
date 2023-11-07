class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ar[] = {1,0,-1,0};
        int ac[] = {0,1,0,-1};
        int ans = 0;
        vector<vector<int>> visited(n,vector<int>(m));
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++)
        {
            if(grid[i][0] == 1)
            {
                visited[i][0] = 1;
                q.push({i,0});
            }
            if(grid[i][m-1] == 1)
            {
                visited[i][m-1] = 1;
                q.push({i,m-1});
            }
        }
        for(int i=0;i<m;i++)
        {
            if(grid[0][i] == 1)
            {
                visited[0][i] = 1;
                q.push({0,i});
            }
            if(grid[n-1][i] == 1)
            {
                visited[n-1][i] = 1;
                q.push({n-1,i});
            }
        }
        while(!q.empty())        
        {
            int r = q.front().first;
            int c = q.front().second;
            q.pop();
            for(int i=0;i<4;i++)
            {
                int nr = r + ar[i];
                int nc = c + ac[i];
                if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc] == 1 &&
                !visited[nr][nc])
                {
                    visited[nr][nc] = 1;
                    q.push({nr,nc});
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j] == 1 && !visited[i][j])
                    ans++;
            }
        }
        return ans;
    }
};