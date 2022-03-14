/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 11:25:39 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/14 12:45:17 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap a("Rob");
	ScavTrap c(a);
	ScavTrap b("Wally");
	ClapTrap *test = new ScavTrap("test");

	for (int i = 0; i < 50 ; i++)
		test->attack("lautre");
	test->attack("lautre");
	test->beRepaired(10);
	test->takeDamage(4);
	test->beRepaired(2147483647);
	test->takeDamage(11);
	test->beRepaired(2147483647);
	a.attack("Wally");
	a.attack("Wally");
	a.attack("Wally");
	a.attack("Wally");
	a.attack("Wally");
	a.attack("Wally");
	a.attack("Wally");
	a.attack("Wally");
	a.attack("Wally");
	a.attack("Wally");
	a.attack("Wally");
	a.attack("Wally");
	a.attack("Wally");
	c.attack("ROB");
	c.attack("ROB");
	c.attack("ROB");
	c.attack("ROB");
	c.attack("ROB");
	c.beRepaired(10);
	c.takeDamage(4);
	c.beRepaired(2147483647);
	c.takeDamage(11);
	c.beRepaired(2147483647);
	delete test;
}
