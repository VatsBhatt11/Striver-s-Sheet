#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    int ans=1;
    for(auto it:arr)
        ans=max(ans,it);
    return ans;
}
