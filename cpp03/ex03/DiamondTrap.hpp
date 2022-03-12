/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 13:25:02 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/09 16:02:44 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	_FRAGTRAP_H_
# define _FRAGTRAP_H_

#include "ClapTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
		DiamondTrap();
		DiamondTrap(const std::string name);
		DiamondTrap(const DiamondTrap &rhs);
		DiamondTrap &operator=(const DiamondTrap &rhs);
		~DiamondTrap();
		
		void	attack( const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void	highFivesGuys();
	private:
		static unsigned int full_hp;
};

#endif
