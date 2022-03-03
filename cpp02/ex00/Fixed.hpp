/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 12:47:58 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/03 13:06:22 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		_FIXED_H_
# define	_FIXED_H_

#include <string>
#include <iostream>

class	Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &fixed);
		Fixed &operator=(const Fixed &fixed);
		~Fixed();
		int	getRawBits( void ) const;
		void	setRawBits( int const raw);
	private:
		int	fp_number;
		static const int	nb_fra = 8;
};

#endif
