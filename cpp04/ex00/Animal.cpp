/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:47:06 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/08 14:47:19 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
	return ;
}

Animal::Animal(const Animal &rhs)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = rhs;
	return ;
}

Animal	&Animal::operator=( const Animal &rhs)
{
	std::cout << "Animal copy assignement operator called" << std::endl;
	return  *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
	return ;
}

