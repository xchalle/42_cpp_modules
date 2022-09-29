/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 19:17:44 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/29 14:55:44 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ITER_H
#define ITER_H

#include <iostream>
#include <string>

template< typename T >
void printer( T const & src)
{
	std::cout << src << std::endl;
	return ;
}

template< typename T >
void iter(T * array, size_t size, void(*f)(T const & ))
{
	for (size_t i = 0; i < size; i++)
		f(array[i]);
	return;
}

#endif
