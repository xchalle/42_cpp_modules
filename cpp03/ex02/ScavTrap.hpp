/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 12:17:26 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/14 12:55:45 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	_SCAVTRAP_H_
# define _SCAVTRAP_H_

#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const std::string name);
		ScavTrap(const ScavTrap &rhs);
		ScavTrap &operator=(const ScavTrap &rhs);
		virtual ~ScavTrap();

		virtual void	attack( const std::string& target);
		virtual void	takeDamage(unsigned int amount);
		virtual void	beRepaired(unsigned int amount);

		void	guardGate( void );
	private:
		static unsigned int	full_hp;
};

#endif
