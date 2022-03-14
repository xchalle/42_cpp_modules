/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:58:31 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/14 12:58:38 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class Animal
{
	public:
		Animal();
		Animal(const Animal &rhs);
		virtual ~Animal();
		Animal &operator=(const Animal &rhs);

		virtual void		makeSound() const;
		virtual std::string	getType() const;
	protected:
		std::string	type;
	private:
};

#endif
