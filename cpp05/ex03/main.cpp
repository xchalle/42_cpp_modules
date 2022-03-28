#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int	main(void)
{
	std::cout << std::endl;
	std::cout << "------------ Test intern class ------------" << std::endl;
	std::cout << std::endl;

	Intern			joj;
	Bureaucrat		joblux("joblux", 1);
	AForm			*form;

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

	AForm			*form0;

	try
	{
		form0 = joj.makeForm("shrubbery creation", "joblux");
		std::cout << *form0 << std::endl;
		joblux.signForm(*form0);
		joblux.executeForm(*form0);
		delete form0;
	}
	catch(std::exception const & e)
	{
		std::cout << e.what() << std::endl;
	}

	AForm			*form1;

	try
	{
		form1 = joj.makeForm("robotomy request", "joblux");
		std::cout << *form1 << std::endl;
		joblux.signForm(*form1);
		joblux.executeForm(*form1);
		delete form1;
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
