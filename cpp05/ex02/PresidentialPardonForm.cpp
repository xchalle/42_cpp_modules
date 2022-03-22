
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target ) : AForm("PresidentialPardon", 25, 5, target)
{
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &rhs)
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	*this = rhs;
	return ;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=( const PresidentialPardonForm &rhs)
{
	std::cout << "PresidentialPardonForm copy assignement operator called" << std::endl;
	return  *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
	return ;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor)
{
	if (this->isSigned() == false)
		throw std::invalid_argument("Can't execute " + name + "cause file ain't signed");
	if (this->getGrade_e() > executor.getGrade())
		throw std::invalid_argument("Can't execute " + name + "cause file ain't signed");
	else
		std::cout << target << "was forgiven by Zaphod Beeblebrox" << std::endl;
}
