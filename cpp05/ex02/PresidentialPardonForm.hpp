/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 12:20:13 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/20 12:28:07 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include <iostream>
#include <string>

class PresidentialPardonForm
{
	public:

	PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &rhs);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);

	virtual void execute(Bureacrat const & executor) const;
	protected:
	private:
};

#endif
