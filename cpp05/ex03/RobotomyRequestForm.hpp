/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 12:28:45 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/27 20:08:06 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include "AForm.hpp" 
#include <iostream>
#include <cstdlib>
#include <string>

//class Bureaucrat;
class AForm;

class RobotomyRequestForm : public AForm
{
	public:

	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &rhs);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);

	virtual void execute(Bureaucrat const & executor) const;
	protected:
	private:
};

#endif
