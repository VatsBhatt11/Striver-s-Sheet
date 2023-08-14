class Solution {
public:
    vector<int>generateRows(int row)
    {
        vector<int>ans;
        ans.push_back(1);
        int val=1;
        for(int col=1;col<row;col++)
        {
            val*=(row-col);
            val/=col;
            ans.push_back(val);
        }
        return ans;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int row=1;row<=numRows;row++)
            ans.push_back(generateRows(row));
        return ans;
    }
};