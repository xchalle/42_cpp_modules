#include <iostream>
#include <string>

class Contact
{
    public :

        Contact();
        ~Contact();
        int     set_contact();
        std::string give_info(int idx);
        void        print_tab(int idx);
    
    private :

        std::string  info[5];
};