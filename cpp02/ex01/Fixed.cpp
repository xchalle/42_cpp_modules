/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 13:04:58 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/07 13:43:08 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	fp_number = 0;
	return ;
}

Fixed::Fixed(const int val) : fp_number(val << 8)
{
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const float fval) : fp_number(roundf(fval * 256))
{
	std::cout << "Float constructor called" << std::endl;
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
	return ;
}

Fixed	&Fixed::operator=( const Fixed &fixed)
{
	std::cout << "Copy assignement operator called" << std::endl;
	fp_number = fixed.getRawBits();
	return  *this;
}

std::ostream&	operator<<(std::ostream& stream, const Fixed &fixed)
{
	stream << fixed.toFloat();
	return (stream);
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

int	Fixed::toInt() const
{
	return (fp_number/256);
}

float	Fixed::toFloat() const
{
	return ((float)fp_number/256);
}
