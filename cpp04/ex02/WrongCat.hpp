/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:20:34 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/14 13:21:13 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
#define WRONGCAT_H

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:

	WrongCat();
	WrongCat(const WrongCat &rhs);
	virtual ~WrongCat();
	WrongCat &operator=(const WrongCat &rhs);

	void		makeSound() const;
	std::string	getType() const;
	protected:
	private:
};

#endif
