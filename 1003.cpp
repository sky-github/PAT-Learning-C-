#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
int main()
{
	int n = 0;	//ȷ��������������
	char c[100];	//�������ַ���
	int count_A, count_P, count_T, pos_P, pos_T;
	scanf("%d\n", &n);
	//cin >> n;
	for( int i = 0; i < n; i++ )
	{
		count_A = count_P = count_T = pos_P = pos_T = 0; 		//��ʼ��
		gets(c);
		for( int j = 0; j < strlen(c); j++ )
		{
			if(c[j] == 'P')
			{
				count_P++;
				pos_P = j;
			}
			if(c[j] == 'T')
			{
				count_T++;
				pos_T = j;
			}
			if(c[j] == 'A')
				count_A++;
		}
		
		if(    ( (count_A + count_P + count_T) == strlen(c) ) 
			&& ( pos_P * ( pos_T - pos_P - 1 ) == ( strlen(c) - pos_T -1 ) ) 
			&& ( (pos_T - pos_P) > 1 )
			&& ( count_P == 1)
			&& ( count_T == 1)
		  )
			printf("YES\n");
			//cout << "YES" << endl;
		else
			printf("NO\n");
			//cout << "NO" << endl;
	}
	//return 0;
}
