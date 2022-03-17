/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:56:37 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/17 15:00:27 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(std::string type)
{
	this->type = type;
       return ;
}       

Weapon::~Weapon()
{
       return ;
}

const std::string&	Weapon::getType()
{
	return(type);
}
	
void		Weapon::setType(std::string name)
{
	type = name;
	return ;
}
