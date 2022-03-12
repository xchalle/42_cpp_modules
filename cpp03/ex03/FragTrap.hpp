/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 13:25:02 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/09 16:00:39 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	_FRAGTRAP_H_
# define _FRAGTRAP_H_

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const std::string name);
		FragTrap(const FragTrap &rhs);
		FragTrap &operator=(const FragTrap &rhs);
		~FragTrap();
		
		void	attack( const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void	highFivesGuys();
	private:
		static unsigned int full_hp;
};

#endif
