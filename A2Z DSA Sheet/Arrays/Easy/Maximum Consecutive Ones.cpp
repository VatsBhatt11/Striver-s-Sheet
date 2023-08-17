int traffic(int n, int m, vector<int> vehicle) {
	int cnt=0;
    int j=0,ans=0;
    for(int i=0;i<n;i++)
    {
        if(vehicle[i]==0 && cnt<=m)
        {
            cnt++;
            while(cnt>m)
            {
                if(vehicle[j]==0)
                    cnt--;
                j++;
            }
        }
        ans=max(ans,i-j+1);
    }
    return ans;
}
