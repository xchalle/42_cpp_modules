/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 16:06:21 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/17 15:32:09 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
	return ;
}

Karen::~Karen()
{
	return ;
}

void	Karen::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
	return ;
}

void	Karen::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
	return ;
}

void	Karen::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last mounth." << std::endl;
	return ;
}

void	Karen::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	return ;

}
void	Karen::complain( std::string level)
{
	int i = 0;
	std::string tab[4] = { "DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Karen::*fct[4])() = { (&Karen::debug), (&Karen::info), (&Karen::warning), (&Karen::error)};
	while(i < 4)
	{
		if (level.compare(tab[i]) == 0)
			break;
		i++;
	}
	switch (i)
	{
		case DEBUG:
			((*this).*fct[DEBUG])();
			((*this).*fct[INFO])();
			((*this).*fct[WARNING])();
			((*this).*fct[ERROR])();
			break ;
		case INFO:
			((*this).*fct[INFO])();
			((*this).*fct[WARNING])();
			((*this).*fct[ERROR])();
			break ;
		case WARNING:
			((*this).*fct[WARNING])();
			((*this).*fct[ERROR])();
			break ;
		case ERROR:
			((*this).*fct[ERROR])();
			break ;
		default :
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
	return ;

}

