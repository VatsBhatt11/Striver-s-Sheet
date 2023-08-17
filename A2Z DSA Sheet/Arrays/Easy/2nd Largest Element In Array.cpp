int getMax2(vector<int>a,int n)
{
    int mx1=a[0],mx2=-1;
    for(int i=1;i<n;i++)
    {
      if (a[i] > mx1)
      {
        mx2 = mx1;
        mx1 = a[i];
      }
      else if (a[i] < mx1 && a[i] > mx2)
        mx2 = a[i];
    }
    return mx2;
}

int getMin2(vector<int>a,int n)
{
    int mn1=a[0],mn2=INT_MAX;
    for(int i=1;i<n;i++)
    {
        if(a[i]<mn1)
        {
            mn2=mn1;
            mn1=a[i];
        }
        else if(a[i]>mn1 && a[i]<mn2)
            mn2=a[i];
    }
    return mn2;
}

vector<int> getSecondOrderElements(int n, vector<int> a) {
    return {getMax2(a,n),getMin2(a,n)};
}
