class Solution {
  public:
    string compareNM(int n, int m){
        if(n<m)
            return "lesser";
        else if(m<n)
            return "greater";
        else
            return "equal";
    }
};
