/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:43:04 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/14 17:43:14 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria default constructor called" << std::endl;
	return ;
}

AMateria::AMateria( std::string const & type)
{
	std::cout << "AMateria constructor called" << std::endl;
	this.type = type;
	return ;
}

AMateria::AMateria(const AMateria &rhs)
{
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = rhs;
	return ;
}

AMateria	&AMateria::operator=( const AMateria &rhs)
{
	std::cout << "AMateria copy assignement operator called" << std::endl;
	return  *this;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
	return ;
}

std::string const & AMateria::getType() const
{
	return type;
}

void AMateria::use( ICharacter& target )
{
	std::cout << "Materia without type can't be use..." << std::endl;
	return ;
}
