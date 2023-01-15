class Solution{
public:	
	int print2largest(int arr[], int n) {
	    int i,m1=0,m2=0;
	    for(i=0;i<n;i++)
	    {
	        if(m1<arr[i])
	            m1=arr[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        if(m2<arr[i] && arr[i]!=m1)
	            m2=arr[i];
	    }
	    if(m2==0)
	        return -1;
	    else
	        return m2;
	}
};
