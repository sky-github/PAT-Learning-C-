#include <iostream>
using namespace std;
int main()
{
	int n;
	int i,j,k;
	int flag = 0;
	
	cin >> n;
	
	for ( i = 0; i <= n; i++ )
	{
		for ( j = 0; j <= n-i; j++ )
		{
			k = n - i - j;
			if( (i*4 + j*3 + k/2.0) == n )
			{
				cout << "men" << i << endl;
				cout << "women" << j << endl;
				cout << "children" << k << endl;
				flag = 1;
			}
		} 
	}
	
	if(flag == 0)
		cout << "no result!" ;
 } 
