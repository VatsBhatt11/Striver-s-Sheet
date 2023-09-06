class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size(),l=0,u=n-1,m;
        while(l<=u)
        {
            m=(l+u)/2;
            if(nums[m]==target)
                return true;
            if(nums[l]==nums[m] && nums[m]==nums[u])
            {
                l++;
                u--;
                continue;
            }
            if(nums[l]<=nums[m])
            {   
                if(nums[l]<=target && nums[m]>=target)
                    u=m-1;
                else
                    l=m+1;
            }
            else
            {
                if(nums[m]<=target && nums[u]>=target)
                    l=m+1;
                else
                    u=m-1;
            }
        }
        return false;
    }
};