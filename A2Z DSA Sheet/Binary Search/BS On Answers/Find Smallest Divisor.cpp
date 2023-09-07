class Solution {
public:
    int helper(vector<int>nums,int div)
    {
        int sum=0;
        for(auto it:nums)
            sum+=ceil((float)it/(float)div);
        return sum;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int m,l=1,r=*max_element(nums.begin(),nums.end());
        while(l<=r)
        {
            m=(l+r)/2;
            if(helper(nums,m)<=threshold)
                r=m-1;
            else
                l=m+1;
        }
        return l;
    }
};