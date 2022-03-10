/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:18:18 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/10 17:31:29 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <sstream>

PhoneBook::PhoneBook()
{
    // std::cout << "phonebook builder" << std::endl;
    return ;
}

PhoneBook::~PhoneBook()
{
    // std::cout << "phonebook destructor" << std::endl;
    return ;
}

int     PhoneBook::set_contact()
{
	if (idx == 8)
		idx = 0;
	if (contact[idx].set_contact() == 1)
		return (-1);
	idx++;
	if (total_idx < 8)
		total_idx++;
	return (idx);
}

void    PhoneBook::print_interline(int i)
{
	if (i == total_idx - 1)
		std::cout << "\u2514";
	else
		std::cout << "\u251C";
	for (int o = 0; o < 43; o++)
	{
		if (o == 10 || o == 21 || o == 32)
		{
			if (i == total_idx - 1)
				std::cout << "\u2534";
			else
				std::cout << "\u253C";
		}
		else
			std::cout << "\u2500";
	}
	if (i == total_idx - 1)
		std::cout << "\u2518";
	else 
		std::cout << "\u2524";
        std::cout << std::endl;
}

void    PhoneBook::print_sum()
{
	std::cout << "\u250C";
	for (int o = 0; o < 43; o++)
	{
		if (o == 10 || o == 21 || o == 32)
			std::cout << "\u252C";
		else
			std::cout << "\u2500";
	}
	std::cout << "\u2510";
	std::cout << std::endl;
        std::cout << "|";
        std::cout.width(10);
        std::cout << "INDEX" << "|";
        std::cout.width(10);
        std::cout << "FIRST NAME" << "|";
        std::cout.width(10);
        std::cout << "LAST NAME" << "|";
        std::cout.width(10);
        std::cout << "NICKNAME" << "|";
        std::cout << std::endl;
	if (total_idx == 0)
		std::cout << "\u2514";
	else
		std::cout << "\u251C";
	for (int o = 0; o < 43; o++)
	{
		if (o == 10 || o == 21 || o == 32)
		{
			if (total_idx == 0)
				std::cout << "\u2534";
			else
				std::cout << "\u253C";
		}
		else
			std::cout << "\u2500";
	}
	if (total_idx == 0)
		std::cout << "\u2518";
	else 
		std::cout << "\u2524";
        std::cout << std::endl;
}

void    PhoneBook::print_phonebook()
{
    int i;

    i = 0;
        std::cout.width(31);
        std::cout <<"=== PHONEBOOK ===" << std::endl;
	print_sum();
    while (i < total_idx)
    {
        std::cout << "|";
        std::cout.width(10);
        std::cout << i << "|";
        std::cout.width(10);
        contact[i].print_tab(0);
        std::cout << "|";
        std::cout.width(10);
        contact[i].print_tab(1);
        std::cout << "|";
        std::cout.width(10);
        contact[i].print_tab(2);
        std::cout <<"|" << std::endl;
	print_interline(i);
        i++;
    }
    return ;
}

void    PhoneBook::print_index()
{
    std::string cmd;
    int nbr;

    std::cout << "INDEX NEEDED:" << std::endl;
    while(cmd.compare("") == 0 && (!(std::cin.eof())))
    	std::getline(std::cin, cmd);
    if (std::cin.eof())
        return ;
    if (cmd.find_first_not_of("0123456789") < 2147483647)
    {
        std::cout << "INDEX NOT VALID" << std::endl << "BACK TO MAIN MENU:" << std::endl;
        return ;
    }
    nbr = atoi(cmd.c_str());
    if (nbr >= total_idx)
    {
        std::cout << "INDEX NOT VALID" << std::endl << "BACK TO MAIN MENU:" << std::endl;
        return ;
    }
    std::cout << "FIRST NAME: ";
    std::cout << contact[nbr].give_info(0) << std::endl;
    std::cout << "LAST NAME: ";
    std::cout << contact[nbr].give_info(1) << std::endl;
    std::cout << "NICKNAME: ";
    std::cout << contact[nbr].give_info(2) << std::endl;
    std::cout << "NUMBER: ";
    std::cout << contact[nbr].give_info(3) << std::endl;
    std::cout << "DARKEST SECRET: ";
    std::cout << contact[nbr].give_info(4) << std::endl;
}

unsigned int PhoneBook::total_idx=0;
unsigned int PhoneBook::idx=0;
