#include <iostream>
#include <string.h>	//�����ʹ�õ������ַ������Ⱥ��� 
using namespace std;

void mystrrev(char str[])
{
	char str_re[100];
	int N = strlen(str);
	
	for(int i = 0; i < N; i++ )
	{
		str_re[i] = str[N-1-i];
	}
	
	str_re[N] = '\0';
	
	cout << str_re;
	
}

int main()
{
	char str0[100];
	cin.getline(str0,100);
	
	mystrrev(str0);
	
}
