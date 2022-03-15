/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <xchalle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:03:50 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/15 12:49:02 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name)
{
	this.name = name;
	std::cout << name << " constructor called" << std::endl;
}

Character::Character(const Character &rhs)
{
	std::cout << rhs.name << " Character copy constructor called" << std::endl;
	*this = rhs;
	return ;
}

Character	&Character::operator=( const Character &rhs)
{
	std::cout << "Character copy assignement operator called" << std::endl;
	type = rhs.type;
	return  *this;
}

Character::~Character()
{
	std::cout << name << " destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		delete inventory[i];
	return ;
}

std::string const & Charater::getName() const
{
	return (name);
}
void equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if ((inventory[i],getType()).compare("ice") != 0 && (inventory[i],getType()).compare("cure") != 0)
		{
			inventory[i] = m;
			std::cout << m.getType() << " added to th inventory" << std::endl;
		}
	}
	return ;
}
void unequip(int idx)
{
	if (idx < 4 && idx > 0 && ((inventory[idx].getType()).compare("ice") == 0 || (inventory[idx].getType()).compare("ice") == 0))
		delete inventory[idx];
	return ;
}
void use(int idx, ICharacter& target)
{
	if (idx < 4 && idx > 0 && ((inventory[idx].getType()).compare("ice") == 0 || (inventory[idx].getType()).compare("ice") == 0))
	{
		inventory[idx].use(target);
		delete inventory[idx];
	}
	return ;
}
