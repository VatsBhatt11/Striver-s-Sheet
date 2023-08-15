vector<int> Solution::prevSmaller(vector<int> &arr) {
    stack<int>s;
    int n=arr.size();
    vector<int>prevSmaller(n,-1);
    for (int i = 0; i < n; i++)
    {
        while (!s.empty() && arr[s.top()] >=arr[i])
            s.pop();
        if (!s.empty())
            prevSmaller[i] = arr[s.top()];
        s.push(i);
    }
    return prevSmaller;

    //Next Smaller
    /*
        for (int i = n - 1; i >= 0; i--)
        {
            while (!st.empty() && arr[st.top()] <= arr[i])
                st.pop();
            if (!st.empty())
                nextSmaller[i] = st.top();
        }
    */
}
