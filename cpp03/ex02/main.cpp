/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 11:25:39 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/21 12:41:32 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap a("Rob");
	FragTrap c(a);
	FragTrap b("Wally");
	ClapTrap *test = new FragTrap("salut");

	test->attack("Wally");
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
	b.attack("ROB");
	b.attack("ROB");
	b.attack("ROB");
	b.attack("ROB");
	b.attack("ROB");
	b.beRepaired(10);
	b.takeDamage(4);
	b.beRepaired(2147483647);
	b.takeDamage(11);
	b.beRepaired(2147483647);
	b.highFivesGuys();
	delete test;
}
