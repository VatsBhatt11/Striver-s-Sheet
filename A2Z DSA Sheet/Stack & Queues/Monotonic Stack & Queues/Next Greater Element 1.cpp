class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        unordered_map<int,int>left,right;
        vector<int>st;
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && nums2[st.back()]<nums2[i])
            {
                right[nums2[st.back()]]=nums2[i];
                st.pop_back();
            }
            if(!st.empty())
                left[nums2[i]]=nums2[st.back()];
            st.push_back(i);
        }
        vector<int>ans;
        for(int i=0;i<nums1.size();i++)
        {
            if(right.count(nums1[i]))
                ans.push_back(right[nums1[i]]);
            else
                ans.push_back(-1);
        }
        return ans;
    }
};