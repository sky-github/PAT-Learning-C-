#include <iostream>
using namespace std;

void transform(char a[], char b[])
{
	int i,j;
	i = j = 0;
	for( i = 0; a[i] != '\0'; i++ )
	{
		if( (a[i]>='A' && a[i]<='Z') || a[i] == ' ' )
		{
			b[j] = a[i];
			j++;
		}	
		else if( a[i]>='a' && a[i]<='z' )
		{
			b[j] = a[i] - 32;
			j++;
		}
	}
	b[j] = '\0';
}

int main()
{
	char aa[200],bb[200];
	
	cin.getline(aa,200);
	
	transform(aa,bb);
	
	cout << bb;
	
}
