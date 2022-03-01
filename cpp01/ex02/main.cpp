#include <string>
#include <iostream>

int main()
{
	std::string	original = "HI THIS IS BRAIN";
	std::string	*stringPTR = &original;
	std::string	&stringREF = original;

	std::cout << &original <<std::endl;
	std::cout << stringPTR <<std::endl;
	std::cout << &stringREF <<std::endl;

	std::cout << original <<std::endl;
	std::cout << *stringPTR <<std::endl;
	std::cout << stringREF <<std::endl;
	return (0);
}
