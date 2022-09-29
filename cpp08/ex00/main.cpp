#include <vector>
#include <list>
#include <iostream>
#include <algorithm>
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
			std::cout << *ite2<< std::endl;
		
		for (it2 = test.begin(); it2 != ite2; it2++)	
		{
			std::cout << *it2<< std::endl;
		}
		std::cout << easyfind(test, 97) << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::list<int>	test2;
		test2.push_back(1);
		test2.push_back(15);
		test2.push_back(91);
		test2.push_back(81);
		std::list<int>::iterator	it;
		std::list<int>::iterator	ite = test2.end();
		std::cout << *ite<< std::endl;
		for (it = test2.begin(); it != ite; it++)	
		{
			std::cout << *it<< std::endl;
		}
		std::cout << easyfind(test2, 97) << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
