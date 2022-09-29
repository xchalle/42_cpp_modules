/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 19:01:20 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/23 19:14:15 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WHATEVER_H
#define WHATEVER_H

#include <iostream>
#include <string>

template< typename T>
void swap( T & x, T & y)
{
	T tmp;
	tmp = y;
	y = x;
	x = tmp;
	return ;
}

template< typename T>
T max( T const & x, T const & y)
{
	return ((x > y) ? x : y);
}

template< typename T>
T min( T const & x, T const & y)
{
	return ((x < y) ? x : y);
}

#endif
