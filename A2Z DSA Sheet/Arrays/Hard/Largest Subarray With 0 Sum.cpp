#include<bits/stdc++.h>
#define ll long long int

int getLongestZeroSumSubarrayLength(vector<int> &arr){
	int ans=0;
	ll sum=0;
	unordered_map<ll,int>m;
	for(int i=0;i<arr.size();i++)
	{
		sum+=arr[i];
		if(sum==0)
			ans=max(ans,i);
		else if(m.count(sum))
			ans=max(ans,i-m[sum]);
		else
			m[sum]=i;
	}
	return ans;
}