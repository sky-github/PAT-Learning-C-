#include <iostream>
using namespace std;
int main()
{
	char in;
	char ch1,ch2;
	int n = 0;
	cin >> in;
	
	if( in>64 && in< 91)
	{
		n = in - 65;
		ch1 = ((n-1) % 26 + 26) % 26 + 65;		//防止余数为负 
		ch2 = (n+1) % 26 + 65;
	}
	else
	{
		n = in - 97;
		ch1 = ((n-1) % 26 + 26) % 26 + 97;		//防止余数为负 
		ch2 = (n+1) % 26 + 97;
	}
	
	cout << ch1 << in << ch2;
	
	return 0;
 } 
