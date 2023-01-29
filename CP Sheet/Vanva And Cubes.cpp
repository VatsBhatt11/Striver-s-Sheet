#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i=1;
    cin >> n;
    while(n>=(i*(i+1)/2))
    {
        n-=i*(i+1)/2;
        i++;
    }
    cout << i-1 << endl;
    return 0;
}
