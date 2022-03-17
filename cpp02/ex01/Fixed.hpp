/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 12:47:58 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/17 18:31:09 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		_FIXED_H_
# define	_FIXED_H_

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
