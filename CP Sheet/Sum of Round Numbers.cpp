#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cnt,t,n,i;
    cin >> t;
    while(t--)
    {
        cin >> n;
        string s;
        cnt=0;
        s=to_string(n);
        for(i=0;i<s.length();i++)
        {
            if(s[i]!='0')
                cnt++;
        }
        cout << cnt << endl;
        for(i=0;i<s.length();i++)
        {
            if(s[i]!='0')
            {
                int x;
                cout << s[i];
                x=s.length()-i-1;
                while(x--)
                    cout << "0";
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
