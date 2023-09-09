class Solution {
public:
    string frequencySort(string s) {
        string ans="";
        unordered_map<char,int>freq;
        for(auto it:s)
            freq[it]++;
        int n=s.size();
        vector<vector<int>>bucket(n+1);
        for(auto it:freq)
            bucket[it.second].push_back(it.first-'a');
        for(int i=n;i>=0;i--)
        {
            for(int it:bucket[i])
            {
                int x=freq[char(it+'a')];
                while(x--)
                    ans+=char((it+'a'));
            }
        }
        return ans;
    }
};