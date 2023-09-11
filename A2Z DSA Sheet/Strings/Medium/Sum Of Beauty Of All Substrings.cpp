class Solution {
public:
    int beautySum(string s) {
        int n=s.size(),ans=0;
        for(int i=0;i<n;i++)
        {
            map<char,int>m;
            for(int j=i;j<n;j++)
            {
                m[s[j]]++;
                int mn=INT_MAX,mx=INT_MIN;
                for(auto it:m)    
                {
                    mn=min(mn,it.second);
                    mx=max(mx,it.second);
                }
                ans+=(mx-mn);
            }
        }
        return ans;
    }
};