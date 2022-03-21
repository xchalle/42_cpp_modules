/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <xchalle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:04:11 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/21 18:09:29 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	IMateriaSource* src2;
	std::cout << std::endl << "-------add Materia to MateriaSource-------" << std::endl;
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src2 = src;
	Character* me = new Character("me");
	AMateria* tmp;
	std::cout << std::endl << "-------add Materia to Character-------" << std::endl;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* me2 = new Character(*me);
	ICharacter* bob = new Character("bob");
	std::cout << std::endl << "-------attack me2-------" << std::endl;
	me->use(0, *bob);
	me->unequip(1);
	me->use(2, *bob);
	ICharacter* me3 = new Character(*me);
	std::cout << std::endl << "-------attack me2-------" << std::endl;
	me2->use(0, *bob);
	me2->use(1, *bob);
	std::cout << std::endl << "------attack me3-------" << std::endl;
	me3->use(0, *bob);
	me3->use(1, *bob);
	delete me3;
	delete bob;
	delete me2;
	delete me;
	delete src;
	return 0;
}
