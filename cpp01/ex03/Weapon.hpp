/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:26:07 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/01 17:33:17 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		_WEAPON_H_
# define	_WEAPON_H_

#include <iostream>
#include <string>

class	Weapon
{
	public:
		Weapon(std::string type);
		~Weapon();
		std::string&	getType();
		void	setType(std::string name);
	private:

		std::string	type;
};

#endif
