vector<long long> factorialNumbers(long long n) {

    long long i=0;

    long long f=1;

    vector<long long> ans; 

    while((f*(i+1)<=n))

    {

        i=i+1;

        f=f*i;

        ans.push_back(f);

    }

    return ans;

}