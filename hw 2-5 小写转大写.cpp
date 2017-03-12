#include <iostream>
using namespace std;
int main()
{
	char ch;
	cin >> ch;
	if ( (ch>96) && (ch<123) )	
	 ch = ch - 32;
	cout << ch;
} 
