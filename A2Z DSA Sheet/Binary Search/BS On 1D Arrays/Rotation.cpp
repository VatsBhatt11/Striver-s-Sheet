#include <bits/stdc++.h>
int findKRotation(vector<int> &arr){
    int ans=INT_MAX,n=arr.size(),len=-1;
    int m,l=0,r=n-1;
    while(l<=r)
    {
        m=(l+r)/2;
        if(arr[l]<=arr[r])
        {
            if(ans>arr[l])
                return l;
        }
        if(arr[l]<=arr[m])
        {
            if(ans>arr[l])
            {
                ans=arr[l];
                len=l;
            }
                
            l=m+1;
        }
        else
        {
            if(ans>arr[m])
            {
                len=m;
                ans=arr[m];
            }
            r=m-1;
        }
    }
    return len;
}