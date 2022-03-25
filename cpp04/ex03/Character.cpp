/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <xchalle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:03:50 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/25 13:57:27 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(std::string name)
{
	this->name = name;
	for (int  i = 0; i < 4; i++)
		inventory[i] = NULL;
//	std::cout << name << " constructor called" << std::endl;
}

Character::Character(const Character &rhs)
{
//	std::cout << rhs.name << " Character copy constructor called" << std::endl;
	*this = rhs;
	return ;
}

Character	&Character::operator=( const Character &rhs)
{
//	std::cout << "Character copy assignement operator called" << std::endl;
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
//	std::cout << name << " destructor called" << std::endl;
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
	if (!m)
	{
		std::cout << name << " can't add a thing that isn't a Materia" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
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
	if (idx < 4 && idx > 0 && ((inventory[idx]) || (inventory[idx])))
		inventory[idx] = NULL;
	return ;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 4 || idx < 0)
	{
		std::cout << name <<" use on an invalid index" << std::endl;
		return ;
	}
	if (!(inventory[idx]))
	{
		std::cout << name <<" use on an empty slot" << std::endl;
		return ;
	}
	if (((inventory[idx]->getType()).compare("cure") == 0 || (inventory[idx]->getType()).compare("ice") == 0))
		inventory[idx]->use(target);
	return ;
}
