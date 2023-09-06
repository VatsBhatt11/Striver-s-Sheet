class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0,n=nums.size(),u=n-1,m;
        while(l<=u)
        {
            m=(l+u)/2;
            if(nums[m]==target)
                return m;
            if(nums[l]<nums[m])
            {
                if(nums[l]<=target && nums[m]>=target)
                    u=m;
                else
                    l=m+1;
            }
            else if(nums[l]==nums[m])
                l++;
            else if(nums[m]<nums[u])
            {
                if(nums[m]<=target && nums[u]>=target)
                    l=m;
                else
                    u=m-1;
            }
            else 
                u--;
        }
        return -1;
    }
};