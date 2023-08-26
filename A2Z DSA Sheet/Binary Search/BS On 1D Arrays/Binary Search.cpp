class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l,u,m;
        l=0;
        u=nums.size()-1;
        while(l<=u)
        {
            m=(l+u)/2;
            if(nums[m]==target)
                return m;
            if(target<nums[m])
                u=m-1;
            else
                l=m+1;
        }
        return -1;
    }
};