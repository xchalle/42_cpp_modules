/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 11:25:39 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/08 13:11:38 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap a("Rob");
	ScavTrap c(a);
	ScavTrap b("Wally");

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
}
