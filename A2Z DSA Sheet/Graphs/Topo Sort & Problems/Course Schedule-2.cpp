class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> ans;
        vector<int> inDegree(numCourses);
        vector<int> adj[numCourses];
        for(auto it:prerequisites)
            adj[it[0]].push_back(it[1]);
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
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            ans.push_back(node);
            for(auto it:adj[node])
            {
                inDegree[it]--;
                if(!inDegree[it])
                    q.push(it);
            }
        }
        if(ans.size() != numCourses)
            return {};
        reverse(ans.begin(),ans.end());
        return ans;
    }
};