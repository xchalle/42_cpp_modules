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

Zombie*	newZombie(std::string zom);
void	randomChump( std::string name );
