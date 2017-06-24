#pragma once
#include <string>

class PrettyPrint
{
public:
	   std::string str;
	   std::string str1;
	PrettyPrint(const std::string newstr, const std::string newstr1) { str = newstr;  str1 = newstr1;};
	PrettyPrint(std::string str){};
	std::string conclusion();
	std::string substitution(std::string str);
	std::string revolString(std::string str);
	~PrettyPrint();
};

