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

int     PhoneBook::set_contact(int idx)
{
    if (contact[idx].set_contact() == 1)
        return (-1);
    idx++;
    return (idx);
}

void    PhoneBook::print_phonebook(int idx)
{
    int i;

    i = 0;
    while (i < idx)
    {
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
        i++;
    }
    return ;
}

void    PhoneBook::print_index(int idx)
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
    if (nbr >= idx)
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