/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:51:40 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/21 17:26:51 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

#define N 9 

int	main(void)
{
//	AAnimal test;
	std::string *printer;
	Cat in;
	in.setIdeas(0, "salut");
	const Cat* cop = new Cat(in);
	const Cat* test_cop = new Cat(*cop);
	printer = cop->getIdeas();
	in.setIdeas(0, "bye");
	std::cout << std::endl <<"--------print check deep copy--------" << std::endl;
	for (int i = 0; i < 99; i++)
		std::cout << printer[i] << std::endl;

	Dog in2;
	in2.setIdeas(0, "salut");
	//const Dog* cop2 = new Dog(in2);
	Dog cop2(in2);
	printer = cop2.getIdeas();
	//printer = cop2->getIdeas();
	in2.setIdeas(0, "bye");
	std::cout << std::endl <<"--------print check deep copy--------" << std::endl;
	for (int i = 0; i < 99; i++)
		std::cout << printer[i] << std::endl;

	delete cop;
	//delete cop2;
	printer = test_cop->getIdeas();
	std::cout << std::endl <<"--------print after delete the one he copied--------" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << printer[i] << std::endl;

	delete test_cop;

	std::cout << std::endl <<"--------last exercice test--------" << std::endl;
//	const AAnimal* meta = new AAnimal();
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
	std::cout << std::endl <<"--------array of animal--------" << std::endl;
	const AAnimal* array[N];
	
	for (int i = 0; i < N/2; i++)
		array[i] = new Cat();
	for (int i = N/2; i < N; i++)
		array[i] = new Dog();
	for (int i = 0; i < N; i++)
		delete array[i];

	std::cout << std::endl <<"--------check dog and cat brain--------" << std::endl;
	Cat *felix = new Cat();
	Dog *brutus = new Dog();

	printer = felix->getIdeas();
	for (int i = 0; i < 5; i++)
		std::cout << printer[i] << std::endl;
	std::cout << std::endl << "-----CHANGE A CELL OF THE CAT BRAIN-----" << std::endl;
	felix->setIdeas(1, "change cat's mind");
	printer = felix->getIdeas();
	for (int i = 0; i < 5; i++)
		std::cout << printer[i] << std::endl;
	
	printer = brutus->getIdeas();
	for (int i = 0; i < 5; i++)
		std::cout << printer[i] << std::endl;
	std::cout << std::endl<< "-----CHANGE A CELL OF THE DOG BRAIN------" << std::endl;
	brutus->setIdeas(1, "change dog's mind");
	printer = brutus->getIdeas();
	for (int i = 0; i < 5; i++)
		std::cout << printer[i] << std::endl;
	delete felix;
	delete brutus;


	std::cout << std::endl<< "-----Delete instantiate in main------" << std::endl;
	return 0;
}
