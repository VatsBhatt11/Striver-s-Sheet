int findCelebrity(int n) {
	stack<int>st;
	for(int i=0;i<n;i++)
		st.push(i);
	while(st.size()>1)
	{
		int x=st.top();
		st.pop();
		int y=st.top();
		st.pop();
		if(knows(x,y))
			st.push(y);
		else
			st.push(x);
	}
	int ans=st.top();
	for(int i=0;i<n;i++)
	{
		if(knows(ans,i))
			return -1;
	}
	for(int i=0;i<n;i++)
	{
		if(i!=ans && !knows(i,ans))
			return -1;
	}
	return ans;
}