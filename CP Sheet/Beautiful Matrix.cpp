#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,x,y,z;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin >> z;
            if(z==1)
            {
                x=i+1;
                y=j+1;
            }
        }
    }
    cout << abs(3-x)+abs(3-y) << endl;
    return 0;
}
