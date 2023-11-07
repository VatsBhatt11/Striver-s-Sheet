class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++)
        {
            if(board[i][0] == 'O')
            {
                visited[i][0] = 1;
                q.push({i,0});
            }
            if(board[i][m-1] == 'O')
            {
                visited[i][m-1] = 1;
                q.push({i,m-1});
            }
        }
        for(int i=0;i<m;i++)
        {
            if(board[0][i] == 'O')
            {
                visited[0][i] = 1;
                q.push({0,i});
            }
            if(board[n-1][i] == 'O')
            {
                visited[n-1][i] = 1;
                q.push({n-1,i});
            }
        }
        int ar[] = {1,0,-1,0};
        int ac[] = {0,1,0,-1};
        while(!q.empty())
        {
            int r = q.front().first;
            int c = q.front().second;
            q.pop();
            for(int i=0;i<4;i++)
            {
                int nr = r + ar[i];
                int nc = c + ac[i];
                if(nr>=0 && nr<n && nc>=0 && nc<m && board[nr][nc] == 'O' &&
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
                if(board[i][j] == 'O' && !visited[i][j])
                    board[i][j] = 'X';
            }
        }
    }
};