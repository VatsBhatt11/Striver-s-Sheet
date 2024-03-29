class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        int i=0,n=s.size(),j;
        while(i<n)
        {
            while(i<n && s[i]==' ')
                i++;
            if(i==n)
                break;
            j=i+1;
            while(j<n && s[j]!=' ')
                j++;
            if(ans.size()==0)
                ans=s.substr(i,j-i);
            else
                ans=s.substr(i,j-i)+" "+ans;
            i=j+1;
        }
        return ans;
    }
};