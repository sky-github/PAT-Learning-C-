#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
	double in,out;
	cin >> in;
	out = sin( in*in ) / ( 1- cos(in) );
	cout << out << endl;
}
