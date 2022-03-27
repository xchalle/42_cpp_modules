/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:35:15 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/27 20:24:54 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target ) : AForm("ShrubberyCreation", 25, 5, target)
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &rhs) : AForm(rhs.getName(), rhs.getGrade_s(), rhs.getGrade_e())
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	*this = rhs;
	return ;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=( const ShrubberyCreationForm &rhs)
{
	std::cout << "ShrubberyCreationForm copy assignement operator called" << std::endl;
	setTarget(rhs.getTarget()); 
	setSigned(rhs.isSigned()); 
	return  *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm default destructor called" << std::endl;
	return ;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (isSigned() != true)
		throw std::invalid_argument("form not signed");
	if (this->getGrade_e() < executor.getGrade())
		throw AForm::GradeTooLowException();
	std::ofstream	new1; 
	const std::string	tmp = this->getTarget() + "_shrubbery"; 
	new1.open(tmp.c_str(), std::ofstream::out);
	if (!new1)
	{
		std::cout  << "Error opening " << this->getTarget() << "_shrubbery" << std::endl;
		return ;
	}
	new1 <<"       _-_" << std::endl << \
	"    /~~   ~~\\" << std::endl << \
	" /~~         ~~\\" << std::endl << \
	"{               }" << std::endl << \
	" \\  _-     -_  /" << std::endl << \
	"   ~  \\\\ //  ~" << std::endl << \
	"_- -   | | _- _" << std::endl << \
	"  _ -  | |   -_" << std::endl << \
	"      // \\\\" << std::endl << std::endl;
			new1 <<"       _-_" << std::endl << \
	"    /~~   ~~\\" << std::endl << \
	" /~~         ~~\\" << std::endl << \
	"{               }" << std::endl << \
	" \\  _-     -_  /" << std::endl << \
	"   ~  \\\\ //  ~" << std::endl << \
	"_- -   | | _- _" << std::endl << \
	"  _ -  | |   -_" << std::endl << \
	"      // \\\\" << std::endl << std::endl;
			new1 <<"       _-_" << std::endl << \
	"    /~~   ~~\\" << std::endl << \
	" /~~         ~~\\" << std::endl << \
	"{               }" << std::endl << \
	" \\  _-     -_  /" << std::endl << \
	"   ~  \\\\ //  ~" << std::endl << \
	"_- -   | | _- _" << std::endl << \
	"  _ -  | |   -_" << std::endl << \
	"      // \\\\" << std::endl << std::endl;
	new1.close();
}

