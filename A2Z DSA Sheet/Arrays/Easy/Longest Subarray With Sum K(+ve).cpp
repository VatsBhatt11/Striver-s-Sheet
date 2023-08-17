#include <bits/stdc++.h> 
int getLongestSubarray(vector<int>& nums, int k){
    map<long long,int>m;
    long long sum=0;
    int ans=0;
    for(int i=0;i<nums.size();i++)
    {
        sum+=nums[i];
        if(sum==k)
            ans=max(ans,i+1);
        long long left=sum-k;
        if(m.count(left))
            ans=max(ans,i-m[left]); 
        if(m.count(sum)==0)
            m[sum]=i;
    }
    return ans;
}