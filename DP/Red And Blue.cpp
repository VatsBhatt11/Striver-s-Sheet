#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
            cin >> a[i];
        cin >> m;
        vector<int>b(m);
        for(int i=0;i<m;i++)
            cin >> b[i];
        vector<int>p1(n),p2(m);
        p1[0]=a[0];
        p2[0]=b[0];
        for(int i=1;i<n;i++)
            p1[i]=a[i]+p1[i-1];
        for(int i=1;i<m;i++)
            p2[i]=b[i]+p2[i-1];
        int m1=*max_element(p1.begin(),p1.end());
        int m2=*max_element(p2.begin(),p2.end());
        cout << max(0,m1) + max(0,m2) << endl;
    }
    return 0;
}