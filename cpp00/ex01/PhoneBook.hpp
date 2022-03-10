#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
    public :

        PhoneBook();
        ~PhoneBook();
        int     set_contact();
        void    print_phonebook();
        void    print_index();
        void    print_sum();
        void    print_interline( int i );

    private :

        Contact contact[8];
	static unsigned int	total_idx;
	static unsigned	int	idx;
};
