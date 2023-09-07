class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l=0,n=nums.size(),u=n-1,m;
        if(n==1)
        return 0;
        while(l<=u)
        {
            m=(l+u)/2;
            if(m==0)
            {
                if(nums[0]>nums[1])
                    return 0;
                return 1;
            }
            else if(m==n-1)
            {
                if(nums[n-1]>nums[n-2])
                    return n-1;
                return n-2;
            }
            else
            {
                if(nums[m]>nums[m-1] && nums[m]>nums[m+1])
                    return m;
                else if(nums[m]<nums[m+1])
                    l=m+1;
                else
                    u=m-1;
            }
        }
        return m;
    }
};