class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n = heights.size(),m=heights[0].size();
        vector<vector<int>> dist(n,vector<int>(m,1e9));
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,
        greater<pair<int,pair<int,int>>>>pq;
        pq.push({0,{0,0}});
        dist[0][0] = 0;
        int ar[] = {-1,0,1,0};
        int ac[] = {0,1,0,-1};
        while(!pq.empty())
        {
            int dis = pq.top().first;
            int r = pq.top().second.first;
            int c = pq.top().second.second;
            pq.pop();
            if(r==n-1 && c==m-1)
                return dis;
            for(int i=0;i<4;i++)
            {
                int nr = r + ar[i];
                int nc = c + ac[i];
                if(nr>=0 && nc>=0 && nr<n && nc<m)
                {
                    int newEffort = max(dis,abs(heights[nr][nc]-
                    heights[r][c]));
                    if(newEffort < dist[nr][nc])
                    {
                        dist[nr][nc] = newEffort;
                        pq.push({newEffort,{nr,nc}});
                    }
                }
            }
        }
        return 0;
    }
};