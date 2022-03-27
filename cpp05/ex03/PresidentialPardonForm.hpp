/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 12:20:13 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/27 20:07:44 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include "AForm.hpp" 
#include <iostream>
#include <string>

class Bureaucrat;
class AForm;

class PresidentialPardonForm : public AForm
{
	public:

	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &rhs);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);

	virtual void execute(Bureaucrat const & executor) const;
	protected:
	private:
};

#endif
