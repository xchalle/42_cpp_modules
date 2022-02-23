#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook()
{
    std::cout << "phonebook builder" << std::endl;
    return ;
}

PhoneBook::~PhoneBook()
{
    std::cout << "phonebook destructor" << std::endl;
    return ;
}

int     PhoneBook::set_contact(int idx)
{
    contact[idx].set_contact();
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
        contact[i].print_tab(0);
        std::cout << "|";
        contact[i].print_tab(1);
        std::cout << "|";
        contact[i].print_tab(2);
        std::cout <<"|" << std::endl;
        i++;
    }
    return ;
}

void    PhoneBook::print_index(int idx)
{
    
}