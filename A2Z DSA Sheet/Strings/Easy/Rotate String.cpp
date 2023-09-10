class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())
            return false;
        s=s+s;
        int n=goal.size();
        for(int i=0;i<2*n;i++)
        {
            if(s.substr(i,n)==goal)
                return true;
        }
        return false;
    }
};