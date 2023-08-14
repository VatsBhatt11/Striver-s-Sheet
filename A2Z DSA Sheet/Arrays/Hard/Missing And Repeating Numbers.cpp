vector<int> findMissingRepeatingNumbers(vector < int > a) {
    int n=a.size(),x=0;
    for(int i=0;i<n;i++)
    {
        x^=a[i];
        x^=(i+1);
    }
    int num=x & ~(x-1);
    int one=0,zero=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]&num)
            one^=a[i];
        else
            zero^=a[i];
        if((i+1)&num)
            one^=(i+1);
        else
            zero^=(i+1);
    }
    int cnt=0;
    for(auto it:a)
    {
        if(it==one)
            cnt++;
    }
    if(cnt==2)
        return {one,zero};
    return {zero,one};
}