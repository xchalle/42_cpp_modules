/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <xchalle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 09:46:51 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/23 11:54:51 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int	main(int ac, char **argv)
{
	std::string str;
	float i= 422222222222222222222.22222222222222222222;
	std::cout << i << std::endl;
	if (ac != 2)
	{
		std::cout << "Please enter only one arguement" << std::endl;
		return (-1);
	}
	str = argv[1];
	Convert conv(str);
	conv.scalaireConvert();
	return (1);
}
