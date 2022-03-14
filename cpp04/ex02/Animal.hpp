/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:58:31 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/14 16:52:31 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class AAnimal
{
	public:
		AAnimal();
		AAnimal(const AAnimal &rhs);
		virtual ~AAnimal();
		AAnimal &operator=(const AAnimal &rhs);

		virtual void		makeSound() const = 0;
		virtual std::string	getType() const;
	protected:
		std::string	type;
	private:
};

#endif
