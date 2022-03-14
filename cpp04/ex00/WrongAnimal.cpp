/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:21:30 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/14 13:21:56 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &rhs)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = rhs;
	return ;
}

WrongAnimal	&WrongAnimal::operator=( const WrongAnimal &rhs)
{
	std::cout << "WrongAnimal copy assignement operator called" << std::endl;
	return  *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
	return ;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal make no sound..." << std::endl;
	return ;
}

std::string	WrongAnimal::getType() const
{
	return type;
}
