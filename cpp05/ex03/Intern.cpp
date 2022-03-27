
#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern default constructor called" << std::endl;
	return ;
}

Intern::Intern(const Intern &rhs)
{
	std::cout << "Intern copy constructor called" << std::endl;
	*this = rhs;
	return ;
}

Intern	&Intern::operator=( const Intern &rhs)
{
	std::cout << "Intern copy assignement operator called" << std::endl;
	(void)rhs;
	return  *this;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
	return ;
}

AForm*	Intern::makeForm(std::string name, std::string target)
{
	int i = 0;
	std::string tmp[3] = {"presidential pardon", "shrubbery creation", "robotomy request"};
	while (i < 3)
	{
		if (name == tmp[i])
			break;
		i++;
	}
	switch(i)
	{
		case 0:
			return (new PresidentialPardonForm(target));
		case 1:
			return (new ShrubberyCreationForm(target));
		case 2:
			return (new RobotomyRequestForm(target));
		default:
			throw std::invalid_argument("Form name doesn't exist");
	}	
}
