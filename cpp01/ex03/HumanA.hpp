/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:58:44 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/17 15:14:10 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		HUMANA_H
# define	HUMANA_H

#include "Weapon.hpp"

class	HumanA
{
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void	attack();
	private:
		Weapon&		weapon;
		std::string	name;
};

#endif
