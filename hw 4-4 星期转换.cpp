#include <iostream>
using namespace std;;
int main()
{
	enum Week{monday = 1, tuesday = 2, wednesday = 3, thursday = 4, friday = 5, saturday = 6, sunday = 7}week;
	int n;
	
	cin >> n;
	
	if( n<1 || n>7 )
	{
		cout << "invalid";
		return 0;
	}
	
	switch( (enum Week)n) 
	{
		case monday: cout << "monday"; break;
		case tuesday: cout << "tuesday"; break;
		case wednesday: cout << "wednesday"; break;
		case thursday: cout << "thursday"; break;
		case friday: cout << "friday"; break;
		case saturday: cout << "saturday"; break;
		case sunday: cout << "sunday"; break;
	}
}
