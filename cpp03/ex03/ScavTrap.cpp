
#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Scav default constructor called" << std::endl;
	name = "ScavTrap";
	hp = 100;
	ep = 50;
	ad = 20;
	return ;
}

ScavTrap::ScavTrap(const std::string newname)
{
	std::cout << "Scav newname constructor called" << std::endl;
	name = newname;
	hp = 100;
	ep = 50;
	ad = 20;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &rhs)
{
	std::cout << "Scav copy constructor called" << std::endl;
	*this = rhs;
	return ;
}

ScavTrap	&ScavTrap::operator=( const ScavTrap &rhs)
{
	std::cout << "Scav copy assignement operator called" << std::endl;
	name = rhs.name;
	hp = rhs.hp;
	ep = rhs.ep;
	ad = rhs.ad;
	return  *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scav destructor called" << std::endl;
	return ;
}

void	ScavTrap::attack( const std::string &target )
{
	if (hp == 0)
	{
		std::cout << "ScavTrap "<< name << " can't attacks " << target << ", Hit point = " << hp << std::endl;
		return ;
	}
	if (ep == 0)
	{
		std::cout << "ScavTrap "<< name << " can't attacks " << target << ", Energie point = " << ep << std::endl;
		return ;
	}
	std::cout << "ScavTrap "<< name << " attacks " << target << ", causing " << ad << " points of damage!" << std::endl;
	ep -= 1;
	return ;
}

void	ScavTrap::takeDamage( unsigned int amount )
{

	std::cout << "ScavTrap "<< name << " took " << amount << " damage" << std::endl;
	std::cout << hp << std::endl;
	if (amount > hp)
	{
		hp = 0;
		std::cout << "ScavTrap "<< name << " Hit point = " << hp << std::endl;
		return ;
	}
	hp -= amount;
	std::cout << "ScavTrap "<< name << " Hit point = " << hp << std::endl;
	return ;
}

void	ScavTrap::beRepaired( unsigned int amount )
{
	if (hp == 0 || hp == full_hp)
	{
		std::cout << "ScavTrap "<< name << " can't repaire himself, Hit point = " << hp << std::endl;
		return ;
	}
	if (ep == 0)
	{
		std::cout << "ScavTrap "<< name << " can't repaire himself, Energie point = " << ep << std::endl;
		return ;
	}
	if (amount + hp > full_hp)
	{
		std::cout << "ScavTrap "<< name << " repaired himself " << (full_hp - hp) << " Hit point!" << std::endl;
		std::cout << "ScavTrap "<< name << " is full HP!" << std::endl;
		hp = full_hp;
		ep -= 1;
		return ;
	}
	std::cout << "ScavTrap "<< name << " repaired himself " << amount << " Hit point!" << std::endl;
	hp += amount;
	ep -= 1;
	return ;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap "<< name << " enter Gate Keeper mode!" << std::endl;
	return ;
}

unsigned int ScavTrap::full_hp = 100;
