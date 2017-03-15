#include <iostream>
using namespace std;

int imax(int array[], int count)
{
	int max = 0;
	for(int i = 0; i < count; i++ )
	{
		if( array[i] > array[max] )
			max = i;
	}
	
	return array[max];
}

int imin(int array[], int count)
{
	int min = 0;
	for(int i = 0; i < count; i++ )
	{
		if( array[i] < array[min] )
			min = i;
	}
	
	return array[min];
}  

int main()
{
	int aa[100];
	int N;
	int max,min;
	
	cin >> N;
	
	for( int i = 0; i < N; i++)
	{
		cin >> aa[i];
	}
	
	max = imax(aa,N);
	min = imin(aa,N);
	
	cout << max << endl << min;

	
}
