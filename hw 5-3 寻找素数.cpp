#include <iostream>
#include <cmath>
using namespace std;

#define N 1000
bool prime[N];		//将数组中素数元素对应位置设置为true，其余为false 

int isprime(int a)		//判断素数 
{
	if( a==1 )		//1不是素数 
		return 0;
	else
	{
		int i;
		for( i = 2; i <= sqrt(a); i++)		//只需判断到sqrt 
		{
			if(a%i == 0)
				break;
		}
		if( i > sqrt(a) )
			return 1;
		else
			return 0;
	}
	
} 

int main()
{
	int aa[N];
	int n = 0;
	int j = 0;
	
	do
	{
		cin >> aa[j];
		j++; 
	}while(aa[j-1] != 0);
	
	for( int i = 0; aa[i] != 0; i++ )	//判断 
	{
		if( isprime(aa[i]) )
		{
			prime[i] = true;
			n++; 
		} 
		else prime[i] = false;
	}
	
	//cout << prime[1];
	int count = 0;
	for( int i = 0; aa[i] != 0; i++ )
	{
	//	int count;
		if(prime[i])
		{
			cout << aa[i];
			count++;
			//cout << count;
			if(count<n)
				cout << " ";
		}
	}
}
