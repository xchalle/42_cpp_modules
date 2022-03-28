
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

AForm*	Intern::presidential(std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm*	Intern::shrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}
AForm*	Intern::robotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm*	Intern::makeForm(std::string name, std::string target)
{
	int i = 0;
	std::string tmp[3] = {"presidential pardon", "shrubbery creation", "robotomy request"};
	AForm*	(Intern::*fct[3])(std::string) = { (&Intern::presidential), (&Intern::shrubbery), (&Intern::robotomy)};
	while (i < 3)
	{
		if (name == tmp[i])
			return (((*this).*fct[i])(target));
		i++;
	}
	throw std::invalid_argument("Form name doesn't exist");
}
