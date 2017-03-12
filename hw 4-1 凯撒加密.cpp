#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char str1[20],str2[20];
	
	cin >> str1;
	strcpy(str2, str1);
	
	for( int i = 0; str2[i] != '\0'; i++ )
	{
		if( str2[i]>='a' && str2[i]<='z' )		//Ð¡Ð´×ÖÄ¸¼ÓÃÜ 
		{
			str2[i] = (str2[i] - 97 + 3) % 26 + 65;
			//cout<<str2[i];
		}
		else if( str2[i]>='A' && str2[i]<='Z' )		//´óÐ´×ÖÄ¸¼ÓÃÜ
		{
			str2[i] = (str2[i] - 65 + 3) % 26 + 97;
			//cout<<str2[i];
		}		
	}
	
	cout << str2;
	
} 
