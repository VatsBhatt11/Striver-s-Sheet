bool canPlace(vector<int> &stalls,int x,int k)
{
    int last=stalls[0],cnt=1;
    for(int i=1;i<stalls.size();i++)
    {
        if(stalls[i]-last>=x)
        {
            cnt++;
            last=stalls[i];
        }
        if(cnt==k)
            return true;
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(),stalls.end());
    int n=stalls.size(),low=1,high=stalls[n-1]-stalls[0];
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(canPlace(stalls,mid,k))
            low=mid+1;
        else
            high=mid-1;
    }
    return high;
}