#include <iostream>
using namespace std;
int main()
{
	int a[5][5];
	int N;
	
	cin >> N;
	
	if( N<1 || N>5 )
	{
		cout << "matrix order error";
		return 0;
	}
	
	for( int i = 0; i < N; i++ )
	{
		for( int j = 0; j < N; j++ )
		{
			a[i][j] = 0;
			cin >> a[i][j];
		}
	}
	
	for( int i = 0; i < N-1; i++ )
	{
		for( int j = i+1; j < N; j++ )
		{
			int tmp;
			tmp = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = tmp;
		}
	} 
	
	for( int i = 0; i < N; i++ )
	{
		for( int j = 0; j < N; j++ )
		{
			cout << a[i][j];
			if(j<N-1)
				cout << " ";
		}
		cout << "\n";
		
	}
	
} 
