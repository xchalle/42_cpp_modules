/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 10:54:25 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/08 13:20:45 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Clap default constructor called" << std::endl;
	name = "ClapTrap";
	hp = 10;
	ep = 10;
	ad = 0;
	return ;
}

ClapTrap::ClapTrap(const std::string newname)
{
	std::cout << "Clap newname constructor called" << std::endl;
	name = newname;
	hp = 10;
	ep = 10;
	ad = 0;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &rhs)
{
	std::cout << "Clap copy constructor called" << std::endl;
	*this = rhs;
	return ;
}

ClapTrap	&ClapTrap::operator=( const ClapTrap &rhs)
{
	std::cout << "Clap copy assignement operator called" << std::endl;
	name = rhs.name;
	hp = rhs.hp;
	ep = rhs.ep;
	ad = rhs.ad;
	return  *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Clap destructor called" << std::endl;
	return ;
}

void	ClapTrap::attack( const std::string &target )
{
	if (hp == 0)
	{
		std::cout << "ClapTrap "<< name << " can't attacks " << target << ", Hit point = " << hp << std::endl;
		return ;
	}
	if (ep == 0)
	{
		std::cout << "ClapTrap "<< name << " can't attacks " << target << ", Energie point = " << ep << std::endl;
		return ;
	}
	std::cout << "ClapTrap "<< name << " attacks " << target << ", causing " << ad << " points of damage!" << std::endl;
	ep -= 1;
	return ;
}

void	ClapTrap::takeDamage( unsigned int amount )
{

	std::cout << "ClapTrap "<< name << " took " << amount << " damage" << std::endl;
	if (amount > hp)
	{
		hp = 0;
		std::cout << "ClapTrap "<< name << " Hit point = " << hp << std::endl;
		return ;
	}
	hp -= amount;
	std::cout << "ClapTrap "<< name << " Hit point = " << hp << std::endl;
	return ;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (hp == 0 || hp == full_hp)
	{
		std::cout << "ClapTrap "<< name << " can't repaire himself, Hit point = " << hp << std::endl;
		return ;
	}
	if (ep == 0)
	{
		std::cout << "ClapTrap "<< name << " can't repaire himself, Energie point = " << ep << std::endl;
		return ;
	}
	if (amount + hp > full_hp)
	{
		std::cout << "ClapTrap "<< name << " repaired himself " << (full_hp - hp) << " Hit point!" << std::endl;
		std::cout << "ClapTrap "<< name << " is full HP!" << std::endl;
		hp = full_hp;
		ep -= 1;
		return ;
	}
	std::cout << "ClapTrap "<< name << " repaired himself " << amount << " Hit point!" << std::endl;
	hp += amount;
	ep -= 1;
	return ;
}

unsigned int ClapTrap::full_hp = 10;
