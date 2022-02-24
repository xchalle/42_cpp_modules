#include "Contact.hpp"
#include <iostream>
#include <cstring>


Contact::Contact()
{
    // std::cout << "contact builder" << std::endl;
    return ;
}

Contact::~Contact()
{
    // std::cout << "contact destructor" << std::endl;
    return ;
}

int Contact::set_contact()
{
    std::string cmd;

    std::cout << "FIRST NAME:" <<std::endl;
    while(cmd.compare("") == 0)
        std::cin >> cmd;
    info[0] = cmd;
    cmd = "";
    std::cout << "LAST NAME:" <<std::endl;
    while(cmd.compare("") == 0)
        std::cin >> cmd;
    info[1] = cmd;
    cmd = "";
        std::cout << "NICNAME:" <<std::endl;
    while(cmd.compare("") == 0)
        std::cin >> cmd;
    info[2] = cmd;
    cmd = "";
        std::cout << "NUMBER:" <<std::endl;
    while(cmd.compare("") == 0)
        std::cin >> cmd;
    info[3] = cmd;
    cmd = "";
        std::cout << "DARKEST SECRET:" <<std::endl;
    while(cmd.compare("") == 0)
        std::cin >> cmd;
    info[4] = cmd;
    cmd = "";
    return (0);
}

std::string    Contact::give_info(int idx)
{
    return (info[idx]);
}

void        Contact::print_tab(int idx)
{
    int i;
    std::string tmp;

    i = 0;
    // std::cout << info[idx].length() << std::endl;
    if (info[idx].length() > 10)
    {
        tmp = info[idx];
        tmp.resize(9);
        tmp.push_back('.');
        std::cout << tmp;
    }
    else
    {
        // std::cout.width(10);
        std::cout << info[idx];
    }
}
