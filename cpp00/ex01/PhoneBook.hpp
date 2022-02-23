#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
    public :

        PhoneBook();
        ~PhoneBook();
        int     set_contact(int idx);
        void    print_phonebook(int idx);
        void    print_index(int idx);

    private :

        Contact contact[8];
};