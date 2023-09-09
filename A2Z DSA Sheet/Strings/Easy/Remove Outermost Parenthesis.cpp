class Solution {
public:
    string removeOuterParentheses(string s) {
        int cnt=0;
        string ans="";
        bool flag=true;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
                cnt++;
            else
                cnt--;
            if((cnt==1 && flag)||!cnt)
                flag=!flag;
            else
                ans+=s[i];
        }
        return ans;
    }
};