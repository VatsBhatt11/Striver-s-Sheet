#include <bits/stdc++.h> 
long long merge(long long *nums,int l,int m,int h)
    {
        long long cnt=0;
        int j=m+1;
        for(int i=l;i<=m;i++)
        {
            while(j<=h && nums[i]>nums[j])
                j++;
            cnt+=j-(m+1);
        }
        int i=l;
        j=m+1;
        vector<int>temp;
        while(i<=m && j<=h)
        {
            if(nums[i]<=nums[j])
                temp.push_back(nums[i++]);
            else
                temp.push_back(nums[j++]);
        }
        while(i<=m)
            temp.push_back(nums[i++]);
        while(j<=h)
            temp.push_back(nums[j++]);
        for(int i=l;i<=h;i++)
            nums[i]=temp[i-l];
        return cnt;
    }

    long long mergeSort(long long *nums,int l,int h)
    {
        if(l>=h)
            return 0;
        int mid=(l+h)/2;
        int ans=mergeSort(nums,l,mid);
        ans+=mergeSort(nums,mid+1,h);
        ans+=merge(nums,l,mid,h);
        return ans;
    }

long long getInversions(long long *arr, int n){
        return mergeSort(arr,0,n-1);

}