#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    int d=1;
    reverse(arr.begin(),arr.end());
    reverse(arr.begin(),arr.end()-d);
    return arr;
}
