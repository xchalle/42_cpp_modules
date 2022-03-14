/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:51:40 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/14 16:51:24 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

#define N 9 

int main()
{
	//const Animal* meta = new Animal();
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	const WrongAnimal* k = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	k->makeSound();
//	meta->makeSound();

	delete k;
	delete i;
	delete j;
//	delete meta;
	const AAnimal* array[N];
	
	for (int i = 0; i < N/2; i++)
		array[i] = new Cat();
	for (int i = N/2; i < N; i++)
		array[i] = new Dog();
	for (int i = 0; i < N; i++)
		delete array[i];

	Cat *felix = new Cat();
	Dog *brutus = new Dog();
	std::string *printer;

	printer = felix->getIdeas();
	for (int i = 0; i < 5; i++)
		std::cout << printer[i] << std::endl;
	std::cout << "CHANGE A CELL OF THE CAT BRAIN" << std::endl;
	felix->setIdeas(1, "change cat's mind");
	printer = felix->getIdeas();
	for (int i = 0; i < 5; i++)
		std::cout << printer[i] << std::endl;
	printer = brutus->getIdeas();
	for (int i = 0; i < 5; i++)
		std::cout << printer[i] << std::endl;
	std::cout << "CHANGE A CELL OF THE DOG BRAIN" << std::endl;
	brutus->setIdeas(1, "change dog's mind");
	printer = brutus->getIdeas();
	for (int i = 0; i < 5; i++)
		std::cout << printer[i] << std::endl;
	delete felix;
	delete brutus;

	return 0;
}
