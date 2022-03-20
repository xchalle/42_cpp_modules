/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 12:32:03 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/20 12:32:36 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include <iostream>
#include <string>

class ShrubberyCreationForm
{
	public:

	ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &rhs);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);

	virtual void execute(Bureacrat const & executor) const;
	protected:
	private:
};

#endif
