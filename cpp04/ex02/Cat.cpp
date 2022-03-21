/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:41:17 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/21 17:14:57 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	type = "Cat";
	brain = new Brain();
	for (int i = 0; i < 100; i++)
		brain->setIdeas(i, "we fill rule the world...");	
	return ;
}

Cat::Cat(const Cat &rhs)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = rhs;
	return ;
}

Cat	&Cat::operator=( const Cat &rhs)
{
	std::string *tmp;
	std::cout << "Cat copy assignement operator called" << std::endl;
	type = rhs.type;
	brain = new Brain();
	tmp = rhs.getIdeas();
	for (int i = 0; i < 100; i++)
		brain->setIdeas(i, tmp[i]);
	return  *this;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destructor called" << std::endl;
	return ;
}

void	Cat::makeSound() const
{
	std::cout << "MEOW MEOW i am a cat..." << std::endl;
	return ;
}

std::string	Cat::getType() const
{
	return type;
}

void	Cat::setIdeas(unsigned int idea_nb, std::string new_idea)
{
	if (idea_nb > 99)
	{
		std::cout << "can't change this idea" << std::endl;
		return ;
	}
	brain->setIdeas(idea_nb, new_idea);
	return ;
}

std::string*	Cat::getIdeas() const
{
	return brain->getIdeas();
}
