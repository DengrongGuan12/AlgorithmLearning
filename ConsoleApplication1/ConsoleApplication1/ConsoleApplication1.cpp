// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	printf("sdfsdfsdf");
	
	char a, b, c;
	std::cout << "Enter three letters:";
	std::cin.get(a).get(b).get(c);
	std::cout << "a:" << a << "\nb:" << b << "\nc:" << c <<std::endl;
	system("pause");
	return 0;
}

