#include <iostream>
using namespace std;
int main()
{
	char mw[30];	//明文字符串 
	char a1[] = {'a','b','c','d','e'};	//待插入字符串
	char code[60];	//密文字符串 
	int N;
	
	cin.getline(mw,30);		//输入 
	cin >> N; 
	
	int i,j,k;	//i用于wm; j用于code; k用于a1 
	i = j = k = 0;
	
	code[j] = mw[i];
	i++;
	j++;
	
	while( mw[i] != '\0' )		//插入字符，然后保存在code 
	{
		if( i%N == 0 )		//判断是否达到N间隔 
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

	code[j] = a1[k];	//末尾补充其他字符 
	code[j+1] = '\0';
	
	
	cout << code;

}
