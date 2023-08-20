void printer(int x, vector<int> &ans)
{
    if(x == 0)
        return;
    ans.push_back(x);
    printer(x-1, ans);
}
vector<int> printNos(int x) {
    vector<int> ans;
    printer(x,ans);

    return ans;
}