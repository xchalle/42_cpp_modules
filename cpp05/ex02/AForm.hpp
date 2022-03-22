/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:32:43 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/22 17:42:19 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
#define AFORM_H

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

class Bureaucrat;

class AForm
{
	public:

	AForm();
	AForm( std::string name, unsigned int new_s_grade, unsigned int new_e_grade);
	AForm( const std::string &name, unsigned int new_s_grade, unsigned int new_e_grade, const std::string &target);
	AForm(const AForm &rhs);
	virtual ~AForm();
	AForm &operator=(const AForm &rhs);

	class GradeTooHighException : public std::exception
	{
		public:
		virtual const char* what() const throw()
		{
			return ("grade too high for this");
		}
	};
	class GradeTooLowException : public std::exception
	{
		public:
		virtual const char* what() const throw()
		{
			return ("grade too low for this");
		}
	};

	const std::string&	getName() const;
	unsigned int	getGrade_s() const;
	unsigned int	getGrade_e() const;
	bool	isSigned() const;
	void	beSigned(Bureaucrat& bureaucrat);
	virtual void	execute(Bureaucrat const & executor) = 0;

	protected:
	private:

	const std::string	name;
	bool			_signed;
	const unsigned int	s_grade;
	const unsigned int	e_grade;
	const std::string	target;
};

std::ostream& operator<<(std::ostream& stream, const AForm &form);

#endif
