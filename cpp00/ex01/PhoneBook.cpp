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

void    PhoneBook::print_phonebook()
{
    int i;

    i = 0;
        std::cout.width(30);
        std::cout <<"===PHONEBOOK===" << std::endl;
	for (int o = 0; o < 45; o++)
		std::cout << "=";
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
	for (int o = 0; o < 45; o++)
		std::cout << "=";
        std::cout << std::endl;
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
	for (int o = 0; o < 45; o++)
		std::cout << "-";
        std::cout << std::endl;
        i++;
    }
    return ;
}

void    PhoneBook::print_index()
{
    std::string cmd;
    int nbr;

    std::cout << "INDEX NEEDED:" << std::endl;
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
