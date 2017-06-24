#include "PrettyPrint.h"
#include <iostream>

std::string PrettyPrint::conclusion()
{
	std::string s = str + "." + str1;;
	return s;
}


std::string PrettyPrint::substitution(std::string str)
{
	for (int i = 0; i <= str.length(); ++i)
	{
		if (str[i] == 'o') { str[i] = 'a'; }
	}
	std::cout << "\n" << str;
	return str;
}

std::string PrettyPrint::revolString(std::string str)
{
	for (int i = 0, j = str.length() - 1; i <= str.length() / 2; ++i, --j)
	{
		char tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
	}
	std::cout << "\n" << str << std::endl;
	return str;
}

PrettyPrint::~PrettyPrint()
{
}
