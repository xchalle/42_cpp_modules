
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target ) : AForm("PresidentialPardon", 25, 5, target)
{
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &rhs) : AForm(rhs.getName(), rhs.getGrade_s(), rhs.getGrade_e())
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	*this = rhs;
	return ;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=( const PresidentialPardonForm &rhs)
{
	std::cout << "PresidentialPardonForm copy assignement operator called" << std::endl;
	setTarget(rhs.getTarget()); 
	setSigned(rhs.isSigned()); 
	return  *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
	return ;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (isSigned() != true)
		throw std::invalid_argument("form not signed");
	if (this->getGrade_e() < executor.getGrade())
		throw AForm::GradeTooLowException();
	std::cout << this->getTarget() << " was forgiven by Zaphod Beeblebrox" << std::endl;
}
