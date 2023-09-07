class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size(),l=0,u=n-1,m;
        while(l<=u)
        {
            m=(l+u)/2;
            if(nums[m]<nums[u])
                u=m;
            else
                l=m+1;
        }
        return nums[m];
    }
};