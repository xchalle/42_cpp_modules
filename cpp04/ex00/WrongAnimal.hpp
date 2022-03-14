/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:58:31 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/14 13:19:54 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>
#include <string>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &rhs);
		virtual ~WrongAnimal();
		WrongAnimal &operator=(const WrongAnimal &rhs);

		void		makeSound() const;
		std::string	getType() const;
	protected:
		std::string	type;
	private:
};

#endif
