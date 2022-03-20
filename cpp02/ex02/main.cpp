/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 13:05:06 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/20 13:21:35 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

void	compare(Fixed d, Fixed e)
{
	if (d < e)
		std::cout << "d < e" << std::endl;
	if (d > e)
		std::cout << "d > e" << std::endl;
	if (d >= e)
		std::cout << "d >= e" << std::endl;
	if (d <= e)
		std::cout << "d <= e" << std::endl;
	if (d == e)
		std::cout << "d == e" << std::endl;
	if (d != e)
		std::cout << "d != e" << std::endl;
	std::cout << Fixed::min(d, e)  << " is the min" << std::endl;
	std::cout << Fixed::max(d, e)  << " is the max" << std::endl;
	return ;
}

int main( void ) 
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const c( Fixed( 16.06f ) / Fixed( 4.6f ) );
	Fixed d;
	Fixed e;
	Fixed te;

	te.setRawBits(50);
	std::cout << "te = " << te << std::endl;
	d = b + c;	
	e = (Fixed(10.5898f) + Fixed(9));
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << "e = " << e << std::endl;
	compare(d, e);
	d = d + Fixed(6);
	std::cout << "d = " << d << std::endl;
	std::cout << "e = " << e << std::endl;
	compare(d, e);
	d = d * Fixed(6);
	std::cout << "d = " << d << std::endl;
	std::cout << "e = " << e << std::endl;
	compare(d, e);
	std::cout << b << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	return 0;
}
