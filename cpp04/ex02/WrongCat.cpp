/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:22:32 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/14 13:22:36 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat default constructor called" << std::endl;
	type = "WrongCat";
	return ;
}

WrongCat::WrongCat(const WrongCat &rhs)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = rhs;
	return ;
}

WrongCat	&WrongCat::operator=( const WrongCat &rhs)
{
	std::cout << "WrongCat copy assignement operator called" << std::endl;
	type = rhs.type;
	return  *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
	return ;
}

void	WrongCat::makeSound() const
{
	std::cout << "MEOW MEOW i am a cat..." << std::endl;
	return ;
}

std::string	WrongCat::getType() const
{
	return type;
}
