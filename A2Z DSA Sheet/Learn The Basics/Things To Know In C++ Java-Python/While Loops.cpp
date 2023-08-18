#include<iostream>

using namespace std;

 

int main() 

{

    // Write your code here

    int even=0;

    int odd=0;

    int n;

    cin>>n;

    int r=0;

 

    while(n>0)

    {

        r=n%10;  //here we will get the last digit 

        n=n/10;  // now we are updating the no. to find the other digits 

 

        if(r%2 ==0)

        {

            even+=r;    //if the digit is even then it will get added to even 

        }

        else

        {

            odd+=r;     // else the digit will get added to odd

        }

    }

 

    cout<<even<<" "<<odd;

    return 0;

 

}