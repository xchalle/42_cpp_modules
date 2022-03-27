#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int	main(void)
{
	std::cout << std::endl;
	std::cout << "------------ Test intern class ------------" << std::endl;
	std::cout << std::endl;

	Intern			joj;
	AForm			*form;
	Bureaucrat		joblux("joblux", 1);

	try
	{
		form = joj.makeForm("presidential pardon", "joblux");
		std::cout << *form << std::endl;
		joblux.signForm(*form);
		joblux.executeForm(*form);
		delete form;
	}
	catch(std::exception const & e)
	{
		std::cout << e.what() << std::endl;
	}

	AForm			*form2;
	try
	{	
		form2 = joj.makeForm("wrong request", "joblux");
		std::cout << *form2 << std::endl;
		delete form2;
	}
	catch(std::exception const & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
