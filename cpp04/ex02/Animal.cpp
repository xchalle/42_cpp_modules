/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:47:06 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/14 16:53:30 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"

AAnimal::AAnimal()
{
	std::cout << "Animal default constructor called" << std::endl;
	return ;
}

AAnimal::AAnimal(const AAnimal &rhs)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = rhs;
	return ;
}

AAnimal	&AAnimal::operator=( const AAnimal &rhs)
{
	std::cout << "Animal copy assignement operator called" << std::endl;
	return  *this;
}

AAnimal::~AAnimal()
{
	std::cout << "Animal destructor called" << std::endl;
	return ;
}

std::string	AAnimal::getType() const
{
	return type;
}
