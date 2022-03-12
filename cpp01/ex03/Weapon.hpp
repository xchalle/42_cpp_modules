/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:26:07 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/12 14:01:05 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		WEAPON_H
# define	WEAPON_H

#include <iostream>
#include <string>

class	Weapon
{
	public:
		Weapon(std::string type);
		~Weapon();
		const std::string&	getType();
		void	setType(std::string name);
	private:

		std::string	type;
};

#endif
