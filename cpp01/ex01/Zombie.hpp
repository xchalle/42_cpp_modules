#include <iostream>
#include <string>

class   Zombie
{
    public:
        Zombie();
        ~Zombie();
        void    announce( void );

    private:
        std::string name;
};