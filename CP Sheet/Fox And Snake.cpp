#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,r,c;
    cin >> r >> c;
    for(i=0;i<r;i++)
    {
        if(i%2==0)
        {
            for(j=0;j<c;j++)
                cout << "#";
            cout << endl;
        }
        else if(i%4==1)
        {
            for(j=0;j<c-1;j++)
                cout << ".";
            cout << "#" << endl;
        }
        else
        {
            cout << "#";
            for(j=0;j<c-1;j++)
                cout << ".";
            cout << endl;
        }
    }
    return 0;
}
