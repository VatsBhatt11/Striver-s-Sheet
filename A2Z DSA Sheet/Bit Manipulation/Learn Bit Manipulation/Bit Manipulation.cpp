vector<int> bitManipulation(int num, int i){
    vector<int> v;
    v.push_back((num>>i-1)&1);
    v.push_back(num|(1<<i-1));
    v.push_back(num&(~(1<<i-1)));
    return v;
}