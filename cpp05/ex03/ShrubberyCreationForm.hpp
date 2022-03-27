/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 12:32:03 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/27 20:08:30 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include "AForm.hpp" 
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

//class Bureaucrat;
class AForm;

class ShrubberyCreationForm : public AForm
{
	public:

	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &rhs);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);

	virtual void execute(Bureaucrat const & executor) const;
	protected:
	private:

	ShrubberyCreationForm();
};

#endif
