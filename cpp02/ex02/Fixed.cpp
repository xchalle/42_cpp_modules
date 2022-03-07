/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 13:04:58 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/07 16:20:23 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	//std::cout << "Default constructor called" << std::endl;
	fp_number = 0;
	return ;
}

Fixed::Fixed(const int val) : fp_number(val << nb_fra)
{
	//std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const float fval)
{
	int tmp = 1;
	for (int i = 0; i < nb_fra; i++)
		tmp *= 2;
	fp_number = roundf(fval * tmp);
	//std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
	fp_number = 0;
	return ;
}

Fixed::Fixed( const Fixed &fixed)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
	return ;
}

Fixed	&Fixed::operator=( const Fixed &fixed)
{
	//std::cout << "Copy assignement operator called" << std::endl;
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
	//std::cout << "setRawBits member function called" << std::endl;
	fp_number = raw;
	return ;
}

int	Fixed::getRawBits( void ) const
{
	//std::cout << "getRawBits member function called" << std::endl;
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

bool Fixed::operator ==(const Fixed &b) const
{
	if (fp_number == b.fp_number)
		return (true);
	return (false);
}

bool Fixed::operator !=(const Fixed &b) const
{
	if (fp_number != b.fp_number)
		return (true);
	return (false);
}

bool Fixed::operator <(const Fixed &b) const
{
	if (fp_number < b.fp_number)
		return (true);
	return (false);
}

bool Fixed::operator >(const Fixed &b) const
{
	if (fp_number > b.fp_number)
		return (true);
	return (false);
}

bool Fixed::operator <=(const Fixed &b) const
{
	if (fp_number <= b.fp_number)
		return (true);
	return (false);
}

bool Fixed::operator >=(const Fixed &b) const
{
	if (fp_number >= b.fp_number)
		return (true);
	return (false);
}

Fixed Fixed::operator+(const Fixed &b) const
{
	return (Fixed(toFloat() + b.toFloat()));
}

Fixed Fixed::operator-(const Fixed &b) const
{
	return (Fixed(toFloat() - b.toFloat()));
}

Fixed Fixed::operator*(const Fixed &b) const
{
	return (Fixed(toFloat() * b.toFloat()));
}

Fixed Fixed::operator/(const Fixed &b) const 
{
	return (Fixed(toFloat() / b.toFloat()));
}
Fixed& Fixed::operator++()
{
	fp_number++;
	return (*this);
}
Fixed& Fixed::operator--()
{
	fp_number--;
	return (*this);
}
Fixed Fixed::operator++(int)
{
	Fixed	result;
	result.setRawBits(fp_number);
	++(*this);
	return (result);
}
Fixed Fixed::operator--(int) 
{
	Fixed	result(fp_number);
	result.setRawBits(fp_number);
	--(*this);
	return (result);

}
Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	if (a > b)
		return (b);
	return (a);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b) 
{
	if (a < b)
		return (a);
	if (a > b)
		return (b);
	return (a);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a < b)
		return (b);
	if (a > b)
		return (a);
	return (a);

}
const Fixed	&Fixed::max(const Fixed &a, const Fixed &b) 
{
	if (a < b)
		return (b);
	if (a > b)
		return (a);
	return (a);
}
