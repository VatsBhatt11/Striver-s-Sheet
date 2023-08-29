class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int f,l=0,u=nums.size()-1,m;
        while(l<=u)
        {
            m=l+((u-l)/2);
            if(nums[m]==target){
                return m;
            }
            else if(nums[m]<target)
            {
                f=1;
                l=m+1;
            }
            else
            {
                f=2;
                u=m-1;
            }
        }
        if(f==1)
        {
            return m+1;
        }
        return m;        
    }
};