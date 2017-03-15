#include <iostream>

#define N 1000

using namespace std;

int count_word(char wordlist_tmp[])		//单词数计数函数 
{
	int i = 0;
	int state = 0;
	int count_tmp = 0;
		
	while(wordlist_tmp[i] != '\0') 
	{
		switch(state)		//两个状态，字符为字母或者其他，只有从字母到其他，count才加1 
		{
			case 0: {
				if((wordlist_tmp[i]>='a' && wordlist_tmp[i]<='z') || (wordlist_tmp[i]>='A' && wordlist_tmp[i]<='Z'))
				{
					state = 1;
					break;
				}
				else
				{
					state = 0;
					break;
				}
			}
			case 1: {
				if((wordlist_tmp[i]>='a' && wordlist_tmp[i]<='z') || (wordlist_tmp[i]>='A' && wordlist_tmp[i]<='Z'))
				{
					state = 1;
					break;
				}
				else
				{
					state = 0;
					count_tmp++;
					break;
				}
			}
		} 
		i++;
	}
	
	return count_tmp;
}

int main()
{
	char wordlist[N];
	int count;
	cin.getline(wordlist,N);
	count = count_word(wordlist);
	cout << count;
	
}
