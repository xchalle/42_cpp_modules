/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:44:53 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/14 13:09:29 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"

class Dog : public Animal
{
	public:

	Dog();
	Dog(const Dog &rhs);
	Dog &operator=(const Dog &rhs);
	virtual ~Dog();

	virtual void		makeSound() const;
	virtual std::string	getType() const;
	protected:
	private:
};

#endif
