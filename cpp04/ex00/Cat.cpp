/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:41:17 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/14 12:06:45 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	type = "Cat";
	return ;
}

Cat::Cat(const Cat &rhs)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = rhs;
	return ;
}

Cat	&Cat::operator=( const Cat &rhs)
{
	std::cout << "Cat copy assignement operator called" << std::endl;
	type = rhs.type;
	return  *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	return ;
}

void	Cat::makeSound() const
{
	std::cout << "MEOW MEOW i am a cat..." << std::endl;
	return ;
}

std::string	Cat::getType() const
{
	return type;
}
