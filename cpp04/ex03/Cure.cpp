/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:36:06 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/17 12:06:00 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure()
{
	std::cout << "Cure constructor called" << std::endl;
	this->type = "cure";
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
	this->type = rhs.type;
	return  *this;
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
	return ;
}

Cure*	Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use( ICharacter& target )
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	return ;
}
