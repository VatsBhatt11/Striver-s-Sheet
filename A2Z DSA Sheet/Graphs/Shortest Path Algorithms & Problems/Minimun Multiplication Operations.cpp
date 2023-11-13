int mod = 1e3;

int minimumOperations(int n, int start, int end, vector<int> &a)
{
    vector<int> dist(mod,1e9);
    queue<pair<int,int>> q;
    q.push({start,0});
    while(!q.empty())
    {
        int num = q.front().first;
        int step = q.front().second;
        q.pop();
        if(num == end)
            return step;
        for(auto it:a)
        {
            int x = ((it%mod)*(num%mod))%mod;
            if(step + 1 < dist[x])
            {
                dist[x] = step + 1;
                q.push({x,dist[x]});
            }
        }
    }
    return -1;
}