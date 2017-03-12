#include <iostream>
using namespace std;
int main()
{
	int a,b,c,sum,mean_int;
	double mean;
	cin >> a >> b >> c;
	sum = a + b + c;
	mean = sum / 3.0;
	mean_int = mean+0.5;
	cout << sum << endl << mean << endl << mean_int << endl;
} 
