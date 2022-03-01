#include <iostream>
#include <string>

class   Zombie
{
    public:
        Zombie();
        ~Zombie();
        void    announce( void );
        void    set_name( std::string give_name);

    private:
        std::string name;
};

Zombie*	zombieHorde( int N, std::string name );
