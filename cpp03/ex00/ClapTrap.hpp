/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 10:43:34 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/08 12:11:43 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CLAPTRAP_H_
# define _CLAPTRAP_H_

#include <iostream>
#include <string>

class	ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(const std::string name);
		ClapTrap(const ClapTrap &rhs);
		ClapTrap &operator=(const ClapTrap &rhs);
		~ClapTrap();
		
		void	attack( const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
	private:
		std::string		name;
		unsigned int		hp;
		unsigned int		ep;
		unsigned int		ad;
		static unsigned int	full_hp;
};

#endif
