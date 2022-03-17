/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:26:10 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/17 15:33:16 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main()
{
	Karen	test;

	test.complain("DEBUG");
	test.complain("INFO");
	test.complain("WARNING");
	test.complain("ERROR");
	test.complain("fkdlsakf");
	return (0);
}
