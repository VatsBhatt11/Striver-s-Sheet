class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> adj[numCourses];
        for(auto it:prerequisites)
            adj[it[0]].push_back(it[1]);
        vector<int> inDegree(numCourses);
        for(int i=0;i<numCourses;i++)
        {
            for(auto it:adj[i])
                inDegree[it]++;
        }
        queue<int> q;
        for(int i=0;i<numCourses;i++)
        {
            if(!inDegree[i])
                q.push(i);
        }
        int cnt = 0;
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            cnt++;
            for(auto it:adj[node])
            {
                inDegree[it]--;
                if(!inDegree[it])
                    q.push(it);
            }
        }
        return cnt == numCourses;
    }
};