#include <iostream>
#include <cmath>
using namespace std;

#define N 1000
bool prime[N];		//������������Ԫ�ض�Ӧλ������Ϊtrue������Ϊfalse 

int isprime(int a)		//�ж����� 
{
	if( a==1 )		//1�������� 
		return 0;
	else
	{
		int i;
		for( i = 2; i <= sqrt(a); i++)		//ֻ���жϵ�sqrt 
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
	
	for( int i = 0; aa[i] != 0; i++ )	//�ж� 
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
