#include "PhoneBook.hpp"
#include <iostream>


int main()
{
    std::string cmd;
    PhoneBook   book;
    int         idx;
    int         compteur;

    idx = 0;
    compteur = 0;
    while (true)
    {
        std::cout << ">" << std::flush;
        std::getline(std::cin, cmd);
        if (idx == 8)
            idx = 0;
        if (std::cin.eof())
        {
            std::cout << "EXIT" << std::endl;
            return (0);
        }
        if (cmd.compare("ADD") == 0)
        {
            idx = book.set_contact(idx);
            if (compteur < 8)
                compteur++;
        }
        else if (cmd.compare("SEARCH") == 0)
        {
            book.print_phonebook(compteur);
            book.print_index(compteur);
        }
        else if (cmd.compare("EXIT") == 0 || cmd.compare("") == 0)
        {
            std::cout << "EXIT" << std::endl;
            return (0);
        }
        else
            std::cout << "ADD, SEARCH or EXIT" << std::endl;
    }
    return (0);
}