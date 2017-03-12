#include <iostream>
#include <cstring>
using namespace std;
struct Song{
	char name[50];
	char singer[20];
	int freq;
};

int main()
{
	Song song[5];
	for( int i = 0; i < 5; i++ )
	{
		cin >> song[i].name;
		cin >> song[i].singer;
		cin >> song[i].freq;
	}
	
	for( int i = 0; i < 4; i++ )		//选择排序 
	{
		int max = i; 
		Song tmp;
		for( int j = i+1; j < 5; j++ ) 
		{
			if( song[j].freq > song[max].freq )
				max = j;
		}
		if( max != i )		//假如i不是最大，则交换位置 
		{
			tmp = song[i];
			song[i] = song[max];
			song[max] = tmp;
		}
		
	}
	
	for( int i = 0; i < 5; i++ )
	{
		cout << song[i].name << " ";
		cout << song[i].singer << " ";
		cout << song[i].freq << endl;
	} 
} 
