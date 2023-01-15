class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int m=0;
        for(auto it:arr)
        {
            if(it>m)
            m=it;
        }
        return m;
    }
};
