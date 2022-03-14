/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 13:25:02 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/14 12:55:16 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	_FRAGTRAP_H_
# define _FRAGTRAP_H_

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const std::string name);
		FragTrap(const FragTrap &rhs);
		FragTrap &operator=(const FragTrap &rhs);
		virtual ~FragTrap();

		virtual void	attack( const std::string& target);
		virtual void	takeDamage(unsigned int amount);
		virtual void	beRepaired(unsigned int amount);

		void	highFivesGuys();
	private:
		static unsigned int full_hp;
};

#endif
