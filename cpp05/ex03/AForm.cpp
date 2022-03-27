/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <xchalle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 21:22:32 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/27 19:43:26 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AForm.hpp"

AForm::AForm() : name("default name") , s_grade(1) , e_grade(1)

{
	std::cout << "AForm default constructor called" << std::endl;
	this->_signed = false;
	return ;
}

AForm::AForm( const std::string& name, unsigned int new_s_grade, unsigned int new_e_grade) : name(name) , s_grade(new_s_grade) , e_grade(new_e_grade)
{
	std::cout << "AForm constructor called" << std::endl;
	if (new_s_grade < 1 || new_e_grade < 1)
		throw AForm::GradeTooHighException();
	if (new_s_grade > 150 || new_e_grade > 150)
		throw AForm::GradeTooLowException();
	else
		this->_signed = false;
	return ;
}

AForm::AForm( const std::string& name, unsigned int new_s_grade, unsigned int new_e_grade, std::string &target) : name(name) , s_grade(new_s_grade) , e_grade(new_e_grade), target(target)
{
	std::cout << "AForm constructor called" << std::endl;
	if (new_s_grade < 1 || new_e_grade < 1)
		throw AForm::GradeTooHighException();
	if (new_s_grade > 150 || new_e_grade > 150)
		throw AForm::GradeTooLowException();
	else
		this->_signed = false;
	return ;
}

AForm::AForm(const AForm &rhs) : name(rhs.name), s_grade(rhs.s_grade) , e_grade(rhs.e_grade) 
{
	std::cout << "AForm copy constructor called" << std::endl;
	*this = rhs;
	return ;
}

AForm	&AForm::operator=( const AForm &rhs)
{
	std::cout << "AForm copy assignement operator called" << std::endl;
	_signed = rhs._signed;
	return  *this;
}

AForm::~AForm()
{
	std::cout << "AForm destructor called" << std::endl;
	return ;
}

const std::string&	AForm::getName() const
{
	return (name);
}

std::string	AForm::getTarget() const
{
	return (target);
}

void	AForm::setTarget(std::string target)
{
	this->target = target;
}
unsigned int AForm::getGrade_s() const
{
	return (s_grade);
}

unsigned int AForm::getGrade_e() const
{
	return (e_grade);
}

bool	AForm::isSigned() const
{
	return (_signed);
}

void	AForm::setSigned(bool val)
{
	_signed = val;
}
void	AForm::beSigned(Bureaucrat& bureaucrat)
{	
	if (isSigned() == true)
		throw std::invalid_argument("form signed yet");
	if ((bureaucrat.getGrade()) <= s_grade)
		_signed = true;
	else
		throw AForm::GradeTooLowException();
}

std::ostream&	operator<<(std::ostream& stream, const AForm &form)
{
	stream << form.getName() << ", form grade for execute : " << form.getGrade_e() << " grade for signed : " << form.getGrade_e() << " signed status " << form.isSigned();
	return (stream);
}
