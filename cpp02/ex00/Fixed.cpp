/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 13:04:58 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/03 13:20:11 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	fp_number = 0;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	fp_number = 0;
	return ;
}

Fixed::Fixed( const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
	//fp_number = fixed.fp_number;
	//nb_fra = fixed.nb_fra;
	return ;
}

Fixed	&Fixed::operator=( const Fixed &fixed)
{
	std::cout << "Copy assignement operator called" << std::endl;
	fp_number = fixed.getRawBits();
	return  *this;
}

void	Fixed::setRawBits( int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	fp_number = raw;
	return ;
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (fp_number);
}
