#include <iostream>
using namespace std;
int main()
{
	int in; 
	int c50, c20, c10, c5, c1;
	c50 = c20 = c10 = c5 = c1 = 0;
	cin >> in;
	
	c50 = in / 50;
	in = in % 50;
	c20 = in / 20;
	in = in % 20;
	c10 = in /10;
	in = in % 10;
	c5 = in / 5;
	in = in % 5;
	c1 = in / 1;

	cout << c50 << " " << c20 << " " << c10 << " " << c5 << " " << c1 << endl;
}
