class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){
        long long ans=-1,l,u,m;
        l=0;
        u=n-1;
        while(l<=u)
        {
            m=(l+u)/2;
            if(v[m]<x)
            {
                ans=m;
                l=m+1;
            }
            else if(v[m]==x)
                return m;
            else
                u=m-1;
        }
        return ans;
    }
};