int longestSuccessiveElements(vector<int>&a) {
    int ans=1;
    unordered_set<int>s;
    s.insert(a.begin(),a.end());
    for(auto it:s)
    {
        if(s.find(it-1)==s.end())
        {
            int x=it;
            int cnt=1;
            while(s.find(x+1)!=s.end())
            {
                x++;
                cnt++;
            }
            ans=max(ans,cnt);
        }
    }
    return ans;
}