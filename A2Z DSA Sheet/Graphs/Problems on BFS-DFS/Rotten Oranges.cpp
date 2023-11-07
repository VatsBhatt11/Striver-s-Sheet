class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int ans = 0;
        int n = grid.size(), m=grid[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        int ar[] = {1,0,-1,0};
        int ac[] = {0,1,0,-1};
        queue<pair<pair<int,int>,int>>q;
        int cntFresh = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j] == 2)
                    q.push({{i,j},0});
                else if(grid[i][j])
                    cntFresh++;
            }
        }
        int cnt = 0;
        while(!q.empty())
        {
            int r = q.front().first.first;
            int c = q.front().first.second;   
            int t = q.front().second;
            ans = max(ans,t);
            q.pop();
            for(int i=0;i<4;i++)
            {
                int nr = r + ar[i];
                int nc = c + ac[i];
                if(nr>=0 && nr<n && nc>=0 && nc<m &&
                visited[nr][nc]!=2 && grid[nr][nc] == 1)
                {
                    cnt++;
                    visited[nr][nc] = 2;
                    q.push({{nr,nc},ans+1});
                }              
            }
        }
        return cnt == cntFresh ? ans : -1 ;
    }
};