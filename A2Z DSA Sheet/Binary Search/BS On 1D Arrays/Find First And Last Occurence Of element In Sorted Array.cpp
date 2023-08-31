class Solution {
public:
    int LB(vector<int>& nums, int target)
    {
        int l,u,a=-1,m;
        l=0;
        u=nums.size()-1;
        while(l<=u)
        {
            m=(l+u)/2;
            if(nums[m]==target)
            {
                a=m;
                u=m-1;
            }
            else if(target<nums[m])
                u=m-1;
            else
                l=m+1;
        }
        return a;
    }

    int UB(vector<int>& nums, int target)
    {
        int l,u,a=-1,m;
        l=0;
        u=nums.size()-1;
        while(l<=u)
        {
            m=(l+u)/2;
            if(nums[m]==target)
            {
                a=m;
                l=m+1;
            }
            else if(target<nums[m])
                u=m-1;
            else
                l=m+1;
        }
        return a;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int l,u,m;
        l=0;
        u=nums.size()-1;
        vector<int>ans;
        ans.push_back(LB(nums,target));
        ans.push_back(UB(nums,target));
        return ans;
    }
};