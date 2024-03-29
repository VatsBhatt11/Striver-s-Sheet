class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        vector<int>ans;
        int mx=INT_MIN;
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]>=mx)
            {
                ans.push_back(a[i]);
                mx=a[i];
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};