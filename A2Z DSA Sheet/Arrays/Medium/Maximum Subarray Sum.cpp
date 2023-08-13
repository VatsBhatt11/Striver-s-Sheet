class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ansStart,ansEnd,start,sum=0,ans=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(sum==0)
                start=i;
            sum+=nums[i];
            if(sum>ans)
            {
                ans=sum;
                ansStart=start;
                ansEnd=i;   
            }
            if(sum<0)
                sum=0;
        }
        for(int i=ansStart;i<=ansEnd;i++)
            cout << nums[i] << " ";
        return ans;
    }
};