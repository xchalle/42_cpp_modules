/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:09:54 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/01 18:12:41 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	return ;
}

HumanB::~HumanB()
{
	return ;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
	return ;
}

void	HumanB::attack()
{
//	if ((weapon->getType()))
//		return ;
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	return ;
}
