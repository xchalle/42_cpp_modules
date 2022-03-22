/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:37:14 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/22 17:55:45 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("PresidentialPardon", 25, 5, target)
{
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rhs)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	*this = rhs;
	return ;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=( const RobotomyRequestForm &rhs)
{
	std::cout << "RobotomyRequestForm copy assignement operator called" << std::endl;
	return  *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
	return ;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor)
{
	if (this->isSigned() == false)
		throw std::invalid_argument("Can't execute " + name + "cause file ain't signed");
	if (this->getGrade_e() > executor.getGrade())
		throw std::invalid_argument("Can't execute " + name + "cause file ain't signed");
	else
	{
		std::cout << "*drill noises" << std::endl;
		if (std::rand() % 2 == 0)
			std::cout << "SUCCESS! " << target << " is now a robot" << std::endl;
		else
			std::cout << "FAILURE! " << target << " is still a human" << std::endl;
	}
}
