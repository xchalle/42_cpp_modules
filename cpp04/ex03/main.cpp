/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <xchalle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:04:11 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/17 13:34:30 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	IMateriaSource* src2;
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src2 = src;
	Character* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* me2 = new Character(*me);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << "attack m2" << std::endl;
	me2->use(0, *bob);
	me2->use(1, *bob);
	std::cout << "end m2" << std::endl;
	delete bob;
	delete me;
	delete src;
	return 0;
}
