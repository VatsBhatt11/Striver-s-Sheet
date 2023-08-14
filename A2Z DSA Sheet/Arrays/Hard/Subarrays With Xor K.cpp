#include <bits/stdc++.h>
int subarraysWithSumK(vector < int > a, int b) {
    unordered_map<int,int>m;
    int n=a.size(),x=0,ans=0;
    m[0]=1;
    for(int i=0;i<n;i++)
    {
        x=x^a[i];
        int left=x^b;
        ans+=m[left];
        m[x]++;
    }
    return ans;
}