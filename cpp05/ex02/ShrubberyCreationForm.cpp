/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:35:15 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/22 18:17:22 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("PresidentialPardon", 25, 5, target)
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &rhs)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	*this = rhs;
	return ;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=( const ShrubberyCreationForm &rhs)
{
	std::cout << "ShrubberyCreationForm copy assignement operator called" << std::endl;
	return  *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm default destructor called" << std::endl;
	return ;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
	if (this->isSigned() == false)
		throw std::invalid_argument("Can't execute " + name + "cause file ain't signed");
	if (this->getGrade_e() > executor.getGrade())
		throw std::invalid_argument("Can't execute " + name + "cause file ain't signed");
	else
	{
		std::ofstream	new1; 
		new1.open(target + "_shrubbery", std::ofstream::out);
		if (!new1)
		{
			std::cout  << "Error opening " << target << "_shrubbery" << std::endl;
			return (0);
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
}

