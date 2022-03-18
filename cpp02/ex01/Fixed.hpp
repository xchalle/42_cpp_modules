/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 12:47:58 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/18 11:55:21 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FIXED_H
# define	FIXED_H

#include <string>
#include <iostream>
#include <cmath>

class	Fixed
{
	public:
		Fixed();
		Fixed(const int val);
		Fixed(const float fval);
		Fixed(const Fixed &fixed);
		Fixed &operator=(const Fixed &fixed);
		~Fixed();
		int	getRawBits( void ) const;
		void	setRawBits( int const raw);
		float	toFloat( void ) const;
		int	toInt( void ) const;

	private:
		int	fp_number;
		static const int	nb_fra;
};

std::ostream	&operator<<(std::ostream &cout, const Fixed &fixed);

#endif
