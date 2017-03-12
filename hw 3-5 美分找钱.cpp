#include <iostream>
using namespace std;
int main()
{
	int n;
	int i,j,k;
	int count = 0;
	
	cin >> n;
	if ( n < 0 || n > 99 )
	{
		cout << "the money is invalid!" ;
		return 0;
	}
	
	for( i = 0; i <= n/25; i++)
	{
		for( j = 0; j <= n/10; j++ )
		{
			for ( k = 0; k <= n/5; k++ )
			{
				if(25*i + 10*j + 5*k <= n)
				{
					count++;
				}
			}
		}
	}
//	cout << count;

	if(n==0) count =0;
	cout << count;
	
	return 0;
} 
