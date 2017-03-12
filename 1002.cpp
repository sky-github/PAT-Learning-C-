#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
    char a[100];    //保存输入数据，用字符串表示
    int b[5];       //保存输出数据，用数组表示
    char pinyin[][9] = { "ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};      //用于最后以规定格式输出结果
    int n = 0;      //用于记录输出结果位数
    int sum = 0;        //计算和
    gets(a);        //输入数据
    for(int i = 0; i < strlen(a); i++)
        sum = sum + a[i] - 48;      //循环计算和
    while(sum != 0)
    {
        b[n] = sum % 10;
        sum = sum / 10;
        n++ ;
    }
    //printf("%s", pinyin[ b[n-1] ]);
    cout << pinyin[b[n-1]];
    for( int j = n-2; j >= 0; j-- )
        //printf(" %s", pinyin[b[j]]);
        cout << " " << pinyin[b[j]];

}



