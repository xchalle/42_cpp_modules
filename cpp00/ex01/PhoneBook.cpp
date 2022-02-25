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
    std::ostringstream o_tmp;
    std::string tmp;   
    int nbr;

    o_tmp << idx;
    tmp = o_tmp.str();
    std::cout << tmp << std::endl;
    std::cout << "INDEX NEEDED:" << std::endl;
    std::cin >> cmd;
    while(cmd.compare("") == 0 || (cmd.compare("0") < 0 || cmd.compare(tmp) >= 0))
    {
        std::cout << "INDEX NOT VALID !" << std::endl;
        std::cout << "INDEX NEEDED:" << std::endl;
        std::cin >> cmd;
    }
    std::cout << "FDLSKFLSKFLDKS:" << std::endl;
    nbr = atoi(cmd.c_str());
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