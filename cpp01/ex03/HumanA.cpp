/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:09:54 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/01 18:04:37 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
	this->name = name;
	this->weapon = &weapon;
	return ;
}

HumanA::~HumanA()
{
	return ;
}

void	HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	return ;
}
