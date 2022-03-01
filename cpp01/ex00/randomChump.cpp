#include "Zombie.hpp"

void    randomChump( std::string name )
{
    Zombie  *z1;

    z1 = newZombie(name);
    z1->announce();
    delete z1;
    return ;
}
