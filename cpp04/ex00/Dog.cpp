/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:42:14 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/14 13:10:14 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	type = "Dog";
	return ;
}

Dog::Dog(const Dog &rhs)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = rhs;
	return ;
}

Dog	&Dog::operator=( const Dog &rhs)
{
	std::cout << "Dog copy assignement operator called" << std::endl;
	type = rhs.type;
	return  *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	return ;
}

void	Dog::makeSound() const 
{
	std::cout << "BARK BARK i am a dog..." << std::endl;
	return ;
}

std::string	Dog::getType() const
{
	return type;
}
