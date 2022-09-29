/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:35:29 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/23 17:49:11 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream> 

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main()
{
	Data	*test = new Data();
	test = deserialize(serialize(test));
	std::cout << test->a << std::endl;
	std::cout << test->b << std::endl;
	std::cout << test->c << std::endl;

	delete test;
	return (0);
}
