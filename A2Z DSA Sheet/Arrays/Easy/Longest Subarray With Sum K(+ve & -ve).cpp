int longestSubarrayWithSumK(vector<int> a, long long k) {
    int i=0,j=0,ans=0,n=a.size();
    long long sum=a[0];
    while(j<n)
    {
        while(i<n && sum>k)
            sum-=a[i++];
        if(sum==k)
            ans=max(ans,j-i+1);
        j++;
        if(j<n)
            sum+=a[j];
    }
    return ans;
}