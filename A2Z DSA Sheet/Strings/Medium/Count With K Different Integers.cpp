int helper(string s,int k)
{
    int i=0,j=0,n=s.size();
    int cnt=0,no=0;
    vector<int>m(26);
    while(j<n)
    {
        m[s[j]-'a']++;
        if(m[s[j]-'a']==1)
            no++;
        while(no>k)
        {
            m[s[i]-'a']--;
            if(m[s[i]-'a']==0)
                no--;
            i++;
        }
        cnt+=(j-i+1);
        j++;
    }
    return cnt;
}

int countSubStrings(string str, int k) 
{
    return helper(str,k)-helper(str,k-1);
}
