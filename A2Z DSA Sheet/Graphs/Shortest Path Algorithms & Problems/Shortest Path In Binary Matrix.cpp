class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        if(grid[0][0])
            return -1;
        if(n == 1)
            return 1;
        vector<vector<int>> dis(n,vector<int>(n,1e9));
        dis[0][0] = 1;
        queue<pair<int,pair<int,int>>> q;
        q.push({1,{0,0}});
        while(!q.empty())
        {
            int d = q.front().first;
            int r = q.front().second.first;
            int c = q.front().second.second;
            q.pop();
            for(int i=-1;i<=1;i++)
            {
                for(int j=-1;j<=1;j++)
                {
                    int nr = r + i;
                    int nc = c + j;
                    if(nr>=0 && nc>=0 && nr<n && nc<n &&  !grid[nr][nc]
                    && d + 1 < dis[nr][nc])
                    {
                        if(nr == n-1 && nc == n-1)
                            return d + 1;
                        dis[nr][nc] = d + 1;
                        q.push({d+1,{nr,nc}});
                    }
                }
            }
        }
        return -1;
    }
};