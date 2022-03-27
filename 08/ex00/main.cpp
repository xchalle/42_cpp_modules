#include <vector>
#include <iostream>
#include "easyfind.hpp"

int main()
{
	try
	{
		std::vector<int>	test;
		test.push_back(1);
		test.push_back(15);
		test.push_back(91);
		test.push_back(81);
		std::vector<int>::iterator	it2;
		std::vector<int>::iterator	ite2 = test.end();
		
		for (it2 = test.begin(); it2 != ite2; it2++)	
		{
			std::cout << *it2<< std::endl;
		}
		std::cout << easyfind(test, 971) << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
