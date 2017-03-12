#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a[10];
	double mean = 0;
	int min,max;
	
	cin >> a[0]	>> a[1] >> a[2] >> a[3] >> a[4] >> a[5] >> a[6] >> a[7] >> a[8] >> a[9] ; 
	
	for (int i = 0; i <= 9; i++ )
	{
		if( a[i]<0 || a[i]>100 )
		{
			cout << "the score is invalid." ;
			return 0; 
		}	
	}
	
	for (int i = 0; i <= 9; i++ )
	{
		if( a[i] < a[min])
			min = i;
		if( a[i] > a[max])
			max = i;
	}
	
	a[min] = a[max] = 0;
	
	for (int i = 0; i <= 9; i++)
	{
		mean = mean + a[i];
	}
	
	mean = mean / 8;
	cout << mean;
} 
