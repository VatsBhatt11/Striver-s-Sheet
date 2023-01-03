#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int tl,ts;
    tl=k*l;
    ts=c*d;
    cout << min(min((tl/nl),ts),(p/np))/n << endl;
    return 0;
}
