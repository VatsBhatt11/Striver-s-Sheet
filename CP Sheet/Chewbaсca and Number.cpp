#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x;
    cin >> x;
    string s;
    s=to_string(x);
    for(int i=1;i<s.length();i++)
    {
        int y;
        y=s[i]-'0';
        if(y>=5)
            s[i]=48+(9-y);
    }
    int y=s[0]-'0';
    if(s[0]!='9')
    {
        if(y>=5)
            s[0]=48+(9-y);
    }
    cout << s;
    return 0;
}
