int countStudents(vector<int>& arr,int m)
{
    long long pages=0;
    int cnt=1;
    for(auto it:arr)
    {
        if(pages+it<=m)
            pages+=it;
        else
        {
            cnt++;
            pages=it;
        }
    }
    return cnt;
}

int findPages(vector<int>& arr, int n, int m) {
    if(m>n)
        return -1;
    int low=*max_element(arr.begin(),arr.end());
    int high=accumulate(arr.begin(),arr.end(),0);
    while(low<=high)
    {
        int mid=(low+high)/2;
        int students=countStudents(arr,mid);
        if(students>m)
            low=mid+1;
        else   
            high=mid-1;
    }
    return low;
}