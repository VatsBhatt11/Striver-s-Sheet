class Solution {
public:
    void bfs(int sr,int sc,int newColor,vector<vector<int>> &visited,
    vector<vector<int>> &image)
    {
        int r = image.size(),c = image[0].size();
        int x[]={1,0,-1,0};
        int y[]={0,1,0,-1};
        int target = image[sr][sc];
        image[sr][sc] = newColor;
        queue<pair<int,int>>q;
        q.push({sr,sc});
        while(!q.empty())
        {
            int a = q.front().first;
            int b = q.front().second;
            q.pop();
            for(int i=0;i<4;i++)
            {
                int nr = a + x[i];
                int nc = b + y[i];
                if(nr>=0 && nr<r && nc>=0 && nc<c && 
                image[nr][nc] == target && !visited[nr][nc])
                {
                    q.push({nr,nc});
                    image[nr][nc] = newColor;
                    visited[nr][nc] = 1;
                }
            }
        }
        return;
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int r = image.size(),c = image[0].size();
        vector<vector<int>> visited(r,vector<int>(c,0));
        visited[sr][sc] = 1;
        bfs(sr,sc,newColor,visited,image);
        return image;
    }
};