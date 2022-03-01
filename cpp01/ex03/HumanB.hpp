/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:03:45 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/01 17:55:35 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		_HUMANB_H_
# define	_HUMANB_H_

#include "Weapon.hpp"

class	HumanB
{
	public:
		HumanB(std::string name);
		~HumanB();
		void	setWeapon(Weapon &weapon);
		void	attack();
	private:
		Weapon		*weapon;
		std::string	name;
};

#endif
