#include<iostream>
using namespace std;

int main() {
	char ch;
	cin >> ch;
	if(isupper(ch))
		cout << 1;
	else if(islower(ch))
		cout << 0;
	else
		cout << -1;
	
}
