#include <iostream>
using namespace std;
int main()
{
	char mw[30];	//�����ַ��� 
	char a1[] = {'a','b','c','d','e'};	//�������ַ���
	char code[60];	//�����ַ��� 
	int N;
	
	cin.getline(mw,30);		//���� 
	cin >> N; 
	
	int i,j,k;	//i����wm; j����code; k����a1 
	i = j = k = 0;
	
	code[j] = mw[i];
	i++;
	j++;
	
	while( mw[i] != '\0' )		//�����ַ���Ȼ�󱣴���code 
	{
		if( i%N == 0 )		//�ж��Ƿ�ﵽN��� 
		{
			code[j] = a1[k];
			j++;
			k++;
			k = k % 5;
		} 
		code[j] = mw[i];
		j++;
		i++;
				
	}

	code[j] = a1[k];	//ĩβ���������ַ� 
	code[j+1] = '\0';
	
	
	cout << code;

}
