int removeDuplicates(vector<int> &arr, int n) {
	int ind=1,ans=1;
	for(int i=1;i<n;i++)
	{
		if(arr[i]!=arr[i-1])
		{
			ans++;
			arr[ind++]=arr[i];
		}
	}
	// for(auto it:arr)
	// 	cout << it << " ";
	return ans;
}