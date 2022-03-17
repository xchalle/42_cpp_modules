/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <xchalle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 13:25:19 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/17 12:10:56 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream> 

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource constructor called" << std::endl;
	nbr_stock = 0;
	for (int i = 0; i < 4; i++)
		stock[i] = NULL;
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
	for (int i = 0; i < rhs.nbr_stock; i++)
	{
		if (rhs.stock[i])
			stock[i] = rhs.stock[i]->clone();
	}
	nbr_stock = rhs.nbr_stock; 
	return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (nbr_stock > 3)
	       return ;	
	stock[nbr_stock] = m;
	nbr_stock++;
	return ;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if ((stock[i]->getType()).compare(type) == 0)
		{
			return stock[i]->clone();
		}
	}
	return (0);
}
