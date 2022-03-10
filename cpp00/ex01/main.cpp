/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:17:55 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/10 15:17:57 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
        if (std::cin.eof())
        {
            std::cout << "EXIT" << std::endl;
            return (0);
        }
        if (cmd.compare("ADD") == 0)
        {
            if (book.set_contact()== -1)
                {
                    std::cout << "EXIT" << std::endl;
                    return (0); 
                }
        }
        else if (cmd.compare("SEARCH") == 0)
        {
            book.print_phonebook();
            book.print_index();
        }
        else if (cmd.compare("EXIT") == 0)
        {
            std::cout << "EXIT" << std::endl;
            return (0);
        }
        else
            std::cout << "ADD, SEARCH or EXIT" << std::endl;
    }
    return (0);
}
