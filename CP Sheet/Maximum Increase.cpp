#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin >> n;
    int a[n];
    vector<int>v;
    stack<int>st;
    for(i=0;i<n;i++)
        cin >> a[i];
    for(i=0;i<n;i++)
    {
        if(st.empty())
            st.push(a[i]);
        else
        {
            if(a[i]>st.top())
                st.push(a[i]);
            else
            {
                v.push_back(st.size());
                while(!st.empty())
                    st.pop();
                st.push(a[i]);
            }
        }
    }
    v.push_back(st.size());
    cout << *max_element(v.begin(), v.end()) << endl;
    return 0;
}
