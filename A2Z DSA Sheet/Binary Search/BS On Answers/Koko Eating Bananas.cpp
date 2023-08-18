class Solution {
public:
    long long helper(vector<int>&piles,int ind)
    {
        long long cnt=0;
        for(auto it:piles)
            cnt+=ceil((double)it/(double)ind);
        return cnt;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size(),low=1,high=*max_element(piles.begin(),piles.end());
        while(low<=high)
        {
            int mid=(low+high)/2;
            long long val=helper(piles,mid);
            if(val<=h)
                high=mid-1;
            else
                low=mid+1;
        }
        return low;
    }
};