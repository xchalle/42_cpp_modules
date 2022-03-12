/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:56:37 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/12 13:57:03 by xchalle          ###   ########.fr       */
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
	this->type = type;
       return ;
}

const std::string&	Weapon::getType()
{
	std::string	&tmp=type;
	return(tmp);
}
	
void		Weapon::setType(std::string name)
{
	type = name;
	return ;
}
