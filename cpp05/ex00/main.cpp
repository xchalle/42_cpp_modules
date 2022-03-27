#include "Bureaucrat.hpp"

int	main(void)
{
	std::cout << std::endl;
	std::cout << "------------ Test upper limit ------------" << std::endl;
	std::cout << std::endl;

	Bureaucrat		xchalle("xchalle", 3);

	for (int i = 0; i < 3; i++)
	{
		try
		{
			xchalle.incrGrade();
			std::cout << xchalle << std::endl;
		}
		catch (std::exception const & e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << std::endl;
	std::cout << "------------ Test lower limit ------------" << std::endl;
	std::cout << std::endl;

	Bureaucrat		dylan("dylan", 148);

	for (int i = 0; i < 3; i++)
	{
		try
		{
			dylan.decrGrade();
			std::cout << dylan << std::endl;
		}
		catch (std::exception const & e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << std::endl;
	std::cout << "------------ Test invalid contructor value ------------" << std::endl;
	std::cout << std::endl;

	try
	{
		Bureaucrat		uncle("uncle", 1000);
		std::cout << uncle << std::endl;
	}
	catch (std::exception const & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat		uncle("uncle", 0);
		std::cout << uncle << std::endl;
	}
	catch (std::exception const & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
