/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <xchalle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:03:50 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/21 18:08:11 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(std::string name)
{
	this->name = name;
	for (int  i = 0; i < 4; i++)
		inventory[i] = NULL;
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
	name = rhs.name;
	for (int i = 0; i < 4; i++)
	{
		if (rhs.inventory[i])
			inventory[i] = rhs.inventory[i]->clone();
	}
	return  *this;
}

Character::~Character()
{
	std::cout << name << " destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
	//	if (inventory[i])
			delete inventory[i];
	}
	return ;
}

std::string const & Character::getName() const
{
	return (name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
	//	if ((inventory[i]->getType()).compare("ice") != 0 && (inventory[i]->getType()).compare("cure") != 0)
		if (inventory[i] == NULL)
		{
			inventory[i] = m;
			std::cout << m->getType() << " added to the inventory" << std::endl;
			return ;
		}
	}
	return ;
}

void Character::unequip(int idx)
{
	if (idx < 4 && idx > 0 && ((inventory[idx]/*->getType()).compare("ice") == 0*/) || (inventory[idx]/*->getType()).compare("ice") == 0*/)))
	{
		delete inventory[idx];
		inventory[idx] = NULL;
	}	
	return ;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 4 && idx <= 0)
	       return ;
	if (!(inventory[idx]))
	       return ;
	if (((inventory[idx]->getType()).compare("cure") == 0 || (inventory[idx]->getType()).compare("ice") == 0))
	{
		inventory[idx]->use(target);
		delete inventory[idx];
		inventory[idx] = NULL;
	}
	return ;
}
