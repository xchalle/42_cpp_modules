/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:56:45 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/21 16:53:19 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
	return ;
}

Brain::Brain(const Brain &rhs)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = rhs;
	return ;
}

Brain	&Brain::operator=( const Brain &rhs)
{
	std::cout << "Brain copy assignement operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = rhs.ideas[i];
	return  *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
	return ;
}

void Brain::setIdeas(unsigned int idea_nb, std::string new_idea)
{
	if (idea_nb > 99)
	{
		std::cout << "can't change this idea" << std::endl;
		return ;
	}
	ideas[idea_nb] = new_idea;
	return ;
}

std::string*	Brain::getIdeas()
{
	return ideas;
}
