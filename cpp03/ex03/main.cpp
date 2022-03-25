/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 11:25:39 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/25 13:06:46 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap a("Rob", "TOM");
	DiamondTrap c(a);
	DiamondTrap b("Wally");

	for (int i = 0; i < 52; i++)
		a.ScavTrap::attack("Wally");
	c.ScavTrap::attack("ROB");
	c.beRepaired(10);
	c.takeDamage(4);
	c.beRepaired(2147483647);
	c.takeDamage(11);
	c.beRepaired(2147483647);
	c.highFivesGuys();
	c.guardGate();
	c.whoAmI();
}
