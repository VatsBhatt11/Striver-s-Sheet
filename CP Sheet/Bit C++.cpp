#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,cnt=0;
    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        if(s=="++X" || s=="X++")
            cnt++;
        else
            cnt--;
    }
    cout << cnt << endl;
    return 0;
}
