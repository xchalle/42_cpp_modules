/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 12:28:45 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/20 12:30:21 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include <iostream>
#include <string>

class RobotomyRequestForm
{
	public:

	RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &rhs);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);

	virtual void execute(Bureacrat const & executor) const;
	protected:
	private:
};

#endif
