/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 13:39:42 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/08 13:45:15 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Frag default constructor called" << std::endl;
	name = "FragTrap";
	hp = 100;
	ep = 100;
	ad = 30;
	return ;
}

FragTrap::FragTrap(const std::string newname)
{
	std::cout << "Frag newname constructor called" << std::endl;
	name = newname;
	hp = 100;
	ep = 100;
	ad = 30;
	return ;
}

FragTrap::FragTrap(const FragTrap &rhs)
{
	std::cout << "Frag copy constructor called" << std::endl;
	*this = rhs;
	return ;
}

FragTrap	&FragTrap::operator=( const FragTrap &rhs)
{
	std::cout << "Frag copy assignement operator called" << std::endl;
	name = rhs.name;
	hp = rhs.hp;
	ep = rhs.ep;
	ad = rhs.ad;
	return  *this;
}

FragTrap::~FragTrap()
{
	std::cout << "Frag destructor called" << std::endl;
	return ;
}

void	FragTrap::attack( const std::string &target )
{
	if (hp == 0)
	{
		std::cout << "FragTrap "<< name << " can't attacks " << target << ", Hit point = " << hp << std::endl;
		return ;
	}
	if (ep == 0)
	{
		std::cout << "FragTrap "<< name << " can't attacks " << target << ", Energie point = " << ep << std::endl;
		return ;
	}
	std::cout << "FragTrap "<< name << " attacks " << target << ", causing " << ad << " points of damage!" << std::endl;
	ep -= 1;
	return ;
}

void	FragTrap::takeDamage( unsigned int amount )
{

	std::cout << "FragTrap "<< name << " took " << amount << " damage" << std::endl;
	if (amount > hp)
	{
		hp = 0;
		std::cout << "FragTrap "<< name << " Hit point = " << hp << std::endl;
		return ;
	}
	hp -= amount;
	std::cout << "FragTrap "<< name << " Hit point = " << hp << std::endl;
	return ;
}

void	FragTrap::beRepaired( unsigned int amount )
{
	if (hp == 0 || hp == full_hp)
	{
		std::cout << "FragTrap "<< name << " can't repaire himself, Hit point = " << hp << std::endl;
		return ;
	}
	if (ep == 0)
	{
		std::cout << "FragTrap "<< name << " can't repaire himself, Energie point = " << ep << std::endl;
		return ;
	}
	if (amount + hp > full_hp)
	{
		std::cout << "FragTrap "<< name << " repaired himself " << (full_hp - hp) << " Hit point!" << std::endl;
		std::cout << "FragTrap "<< name << " is full HP!" << std::endl;
		hp = full_hp;
		ep -= 1;
		return ;
	}
	std::cout << "FragTrap "<< name << " repaired himself " << amount << " Hit point!" << std::endl;
	hp += amount;
	ep -= 1;
	return ;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "Gimme a high five !" << std::endl;
	return ;
}

unsigned int FragTrap::full_hp = 100;
