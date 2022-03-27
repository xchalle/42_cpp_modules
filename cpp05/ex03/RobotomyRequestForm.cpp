/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:37:14 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/27 20:25:18 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( std::string target) : AForm("RobotomyRequest", 25, 5, target)
{
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rhs) : AForm(rhs.getName(), rhs.getGrade_s(), rhs.getGrade_e())
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	*this = rhs;
	return ;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=( const RobotomyRequestForm &rhs)
{
	std::cout << "RobotomyRequestForm copy assignement operator called" << std::endl;
	setTarget(rhs.getTarget()); 
	setSigned(rhs.isSigned()); 
	return  *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
	return ;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (isSigned() != true)
		throw std::invalid_argument("form not signed");
	if (this->getGrade_e() < executor.getGrade())
		throw AForm::GradeTooLowException();
	std::cout << "*drill noises" << std::endl;
	srand(time(NULL));
	if (rand() % 2 == 0)
		std::cout << "SUCCESS! " << this->getTarget() << " is now a robot" << std::endl;
	else
		std::cout << "FAILURE! " << this->getTarget() << " is still a human" << std::endl;
}
