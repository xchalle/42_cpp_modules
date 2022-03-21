/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:33:32 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/21 18:05:18 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice()
{
	std::cout << "Ice constructor called" << std::endl;
	this->type = "ice";
	return ;
}

Ice::Ice(const Ice &rhs)
{
	std::cout << "Ice copy constructor called" << std::endl;
	*this = rhs;
	return ;
}

Ice	&Ice::operator=( const Ice &rhs)
{
	std::cout << "Ice copy assignement operator called" << std::endl;
	this->type = rhs.type;
	return  *this;
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
	return ;
}

Ice*	Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use( ICharacter& target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() <<" *" << std::endl;
	return ;
}
