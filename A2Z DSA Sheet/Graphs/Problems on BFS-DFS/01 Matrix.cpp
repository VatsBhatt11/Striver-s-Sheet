class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> ans(n,vector<int>(m,0));
        vector<vector<int>> visited = ans;
        queue<pair<pair<int,int>,int>>q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!mat[i][j])
                {
                    visited[i][j] = 1;
                    q.push({{i,j},0});
                }
            }
        }
        int ar[] = {1,0,-1,0};
        int ac[] = {0,1,0,-1};
        int dis = 0;
        while(!q.empty())
        {
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            dis = max(dis,t);
            q.pop();
            for(int i=0;i<4;i++)
            {
                int nr = r + ar[i];
                int nc = c + ac[i];
                if(nr>=0 && nr<n && nc>=0 && nc<m && !visited[nr][nc] &&
                mat[nr][nc] == 1)
                {
                    visited[nr][nc] = 1;
                    q.push({{nr,nc},dis+1});
                    ans[nr][nc] = dis + 1;
                }
            }
        }
        return ans;
    }
};