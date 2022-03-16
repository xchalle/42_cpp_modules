/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <xchalle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 13:25:19 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/16 17:06:28 by xchalle          ###   ########.fr       */
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
	{
		std::cout << "test" << std::endl;
		delete stock[i];
	}
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
		std::cout << (stock[i]->getType()) << std::endl;
		if ((stock[i]->getType()).compare(type) == 0)
			return (stock[i]);
	}
	return (0);
}
