/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 11:25:39 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/17 14:37:57 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap a("Rob");
	DiamondTrap c(a);
	DiamondTrap b("Wally");

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
