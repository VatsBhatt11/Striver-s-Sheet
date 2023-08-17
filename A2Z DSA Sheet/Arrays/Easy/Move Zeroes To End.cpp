vector<int> moveZeros(int n, vector<int> a) {
    int ind=0;
    for(int i=0;i<n;i++)
    {
        if(a[ind]==0)
        {
            a.erase(a.begin()+ind);
            a.push_back(0);
        }
        else
            ind++;
    }
    return a;
}
