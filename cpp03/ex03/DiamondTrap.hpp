/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 13:25:02 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/17 14:44:12 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	_DIAMONDTRAP_H_
# define _DIANONDTRAP_H_

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
		DiamondTrap();
		DiamondTrap(const std::string name);
		DiamondTrap(const DiamondTrap &rhs);
		DiamondTrap &operator=(const DiamondTrap &rhs);
		~DiamondTrap();
		
		void	ScavTrap::attack( const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void	highFivesGuys();
	private:
		std::string name;
		static unsigned int full_hp;
};

#endif
