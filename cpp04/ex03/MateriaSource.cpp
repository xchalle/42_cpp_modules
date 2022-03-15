/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <xchalle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 13:25:19 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/15 14:00:18 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource constructor called" << std::endl;
	nbr_stock = 0;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete stock[i];
	std::cout << "MateriaSource destructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &rhs)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = rhs;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs)
{
	std::cout << "MateriaSource copy assignement operator called" << std::endl;
	return *this;
}

void learnMateria(AMateria* m)
{
	if (nbr_stock > 3)
	       return ;	
	stock[nbr_stock] = m;
	return ;
}

AMateria* createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (stock[i].getType() == type)
			return (stock[i]);
	}
	return (0);
}
