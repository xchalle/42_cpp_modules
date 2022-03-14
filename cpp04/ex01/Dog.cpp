/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:42:14 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/14 15:43:31 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	type = "Dog";
	brain = new Brain();
	for (int i = 0; i < 100; i++)
		brain->setIdeas(i, "I am a friendly dog Bark...");	
	return ;
}

Dog::Dog(const Dog &rhs)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = rhs;
	return ;
}

Dog	&Dog::operator=( const Dog &rhs)
{
	std::cout << "Dog copy assignement operator called" << std::endl;
	type = rhs.type;
	return  *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete brain;
	return ;
}

void	Dog::makeSound() const 
{
	std::cout << "BARK BARK i am a dog..." << std::endl;
	return ;
}

std::string	Dog::getType() const
{
	return type;
}

void	Dog::setIdeas(unsigned int idea_nb, std::string new_idea)
{
	if (idea_nb > 99)
	{
		std::cout << "can't change this idea" << std::endl;
		return ;
	}
	brain->setIdeas(idea_nb, new_idea);
	return ;
}

std::string*	Dog::getIdeas() const
{
	return brain->getIdeas();
}
