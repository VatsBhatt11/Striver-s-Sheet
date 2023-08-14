class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>ans;
        for(int i=0;i<asteroids.size();i++)
        {
            int x=asteroids[i];
            while(!ans.empty() && x<0 && ans.back()>0)
            {
                int dif=x+ans.back();
                if(dif<0)
                    ans.pop_back();
                else if(dif>0)
                    x=0;
                else
                {
                    x=0;
                    ans.pop_back();
                }
            }
            if(x)
                ans.push_back(x);
        }
        return ans;
    }
};