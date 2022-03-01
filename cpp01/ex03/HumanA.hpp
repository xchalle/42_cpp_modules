/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:58:44 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/01 17:51:42 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		_HUMANA_H_
# define	_HUMANA_H_

#include "Weapon.hpp"

class	HumanA
{
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void	attack();
	private:
		Weapon	*weapon;
		std::string name;
};

#endif
