#include "PhoneBook.hpp"
#include <iostream>


int main()
{
    std::string cmd;
    PhoneBook   book;
    int         idx;

    idx = 0;
    while (true)
    {
        std::cin >> cmd;
        // std::cout << cmd <<std::endl;
        if (std::cin.eof())
        {
            std::cout << "exit" << std::endl;
            return (0);
        }
        if (cmd.compare("ADD") == 0)
            idx = book.set_contact(idx);
        else if (cmd.compare("SEARCH") == 0)
        {
            book.print_phonebook(idx);
            book.print_index(idx);
        }
        else if (cmd.compare("EXIT") == 0 || cmd.compare("") == 0)
        {
            std::cout << "exit" << std::endl;
            return (0);
        }
        else
            std::cout << "ADD, SEARCH or EXIT" << std::endl;
    }
    return (0);
}