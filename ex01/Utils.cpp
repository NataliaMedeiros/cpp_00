#include <iostream>

static std::string	GetFieldInput(std::string fieldName)
{
	std::string	fieldValue;

	while(fieldValue.empty())
	{
		std::cout << fieldName << ": ", std::getline(std::cin, fieldValue);
		if (fieldValue.empty())
			std::cout << fieldName << " cannot be empty. Please try again." << std::endl;
	}
	return (fieldValue);
}

static void	Resize(std::string str)
{
	int len = str.size();

	if (len > 10)
	{
		str.resize(10);
		str[9] = '.';
		std::cout << str;
	}
	else
	{
		for (int i = 10 - len; i > 0; i--)
		{
			std::cout << " ";
		}
		std::cout << str;
	}
}
