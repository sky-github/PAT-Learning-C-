//#include "stdafx.h"
#include <iostream>

int main()
{
	std::cout << "Enter a number:" << std::endl;
	int n = 0;
	std::cin >> n;
	if (n == 1)
	{
		std::cout << "0" << std::endl;
		return 0;
	}
	int count = 0;
	while (n > 1)
	{
		if (n % 2 == 0)
			n = n / 2;
		else
		{
			n = (3 * n - 1) / 2;
		}
		count ++;
	}
	std::cout << count << std::endl;

	
	return 0;
}

