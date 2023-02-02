#include "Parser.h"
#include <iostream>


Type* Parser::parseString(std::string str)
{
	if (str.length() > 0)
	{
		std::cout << str << std::endl;
	}

	if (str[0] == ' ' || str[0] == '\t')
	{
		throw IndentationException();
	}
	/*for (auto i : str)
	{
		if (i == '\t')
		{
			throw IndentationException();
		}
	}*/
	

	return nullptr;
}


