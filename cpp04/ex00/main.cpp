/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:51:40 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/21 14:35:51 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* k = new WrongCat();

	std::cout << "animal type= " << meta->getType() << " " << std::endl;
	std::cout << "dog type= " << j->getType() << " " << std::endl;
	std::cout << "cat type= " << i->getType() << " " << std::endl;
	std::cout << "wrongcat type= " << k->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	k->makeSound();
	meta->makeSound();

	delete k;
	delete i;
	delete j;
	delete meta;
	Animal b;
	Cat a;
	Dog c;
	WrongCat d;
	WrongAnimal e;

	std::cout << "animal type= " << b.getType() << " " << std::endl;
	std::cout << "dog type= " << c.getType() << " " << std::endl;
	std::cout << "cat type= " << a.getType() << " " << std::endl;
	std::cout << "wrongcat type= " << d.getType() << " " << std::endl;
	std::cout << "wronganimal type= " << e.getType() << " " << std::endl;
	b.makeSound(); //will output the cat sound!
	c.makeSound();
	a.makeSound();
	d.makeSound();
	e.makeSound();
	return 0;
}
