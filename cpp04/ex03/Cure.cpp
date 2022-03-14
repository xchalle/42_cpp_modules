/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:36:06 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/14 17:45:48 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cure.hpp"

Cure::Cure()
{
	std::cout << "Cure default constructor called" << std::endl;
	return ;
}

Cure::Cure(std::string const & type)
{
	std::cout << "Cure constructor called" << std::endl;
	this.type = type;
	return ;
}

Cure::Cure(const Cure &rhs)
{
	std::cout << "Cure copy constructor called" << std::endl;
	*this = rhs;
	return ;
}

Cure	&Cure::operator=( const Cure &rhs)
{
	std::cout << "Cure copy assignement operator called" << std::endl;
	return  *this;
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
	return ;
}

Cure*	Cure::clone() const
{
	return (new Cure());
}

void Cure::use( ICharacter& target )
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	return ;
}
