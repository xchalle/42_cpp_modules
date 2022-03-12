/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 13:39:42 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/09 16:20:07 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "Diamond default constructor called" << std::endl;
	name = "DiamondTrap";
	hp = 100;
	ep = 50;
	ad = 30;
	return ;
}

DiamondTrap::DiamondTrap(const std::string newname)
{
	std::cout << "Diamond newname constructor called" << std::endl;
	name = newname;
	hp = 100;
	ep = 50;
	ad = 30;
	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap &rhs)
{
	std::cout << "Diamond copy constructor called" << std::endl;
	*this = rhs;
	return ;
}

DiamondTrap	&DiamondTrap::operator=( const DiamondTrap &rhs)
{
	std::cout << "Diamond copy assignement operator called" << std::endl;
	name = rhs.name;
	hp = rhs.hp;
	ep = rhs.ep;
	ad = rhs.ad;
	return  *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Diamond destructor called" << std::endl;
	return ;
}

void	DiamondTrap::attack( const std::string &target )
{
	if (hp == 0)
	{
		std::cout << "DiamondTrap "<< name << " can't attacks " << target << ", Hit point = " << hp << std::endl;
		return ;
	}
	if (ep == 0)
	{
		std::cout << "DiamondTrap "<< name << " can't attacks " << target << ", Energie point = " << ep << std::endl;
		return ;
	}
	std::cout << "DiamondTrap "<< name << " attacks " << target << ", causing " << ad << " points of damage!" << std::endl;
	ep -= 1;
	return ;
}

void	DiamondTrap::takeDamage( unsigned int amount )
{

	std::cout << "DiamondTrap "<< name << " took " << amount << " damage" << std::endl;
	if (amount > hp)
	{
		hp = 0;
		std::cout << "DiamondTrap "<< name << " Hit point = " << hp << std::endl;
		return ;
	}
	hp -= amount;
	std::cout << "DiamondTrap "<< name << " Hit point = " << hp << std::endl;
	return ;
}

void	DiamondTrap::beRepaired( unsigned int amount )
{
	if (hp == 0 || hp == full_hp)
	{
		std::cout << "DiamondTrap "<< name << " can't repaire himself, Hit point = " << hp << std::endl;
		return ;
	}
	if (ep == 0)
	{
		std::cout << "DiamondTrap "<< name << " can't repaire himself, Energie point = " << ep << std::endl;
		return ;
	}
	if (amount + hp > full_hp)
	{
		std::cout << "DiamondTrap "<< name << " repaired himself " << (full_hp - hp) << " Hit point!" << std::endl;
		std::cout << "DiamondTrap "<< name << " is full HP!" << std::endl;
		hp = full_hp;
		ep -= 1;
		return ;
	}
	std::cout << "DiamondTrap "<< name << " repaired himself " << amount << " Hit point!" << std::endl;
	hp += amount;
	ep -= 1;
	return ;
}

void	DiamondTrap::highFivesGuys()
{
	std::cout << "Gimme a high five !" << std::endl;
	return ;
}

unsigned int DiamondTrap::full_hp = 100;
