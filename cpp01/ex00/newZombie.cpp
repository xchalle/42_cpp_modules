#include "Zombie.hpp"

Zombie*  Zombie::newZombie(std::string zom)
{
    Zombie *z1;

    z1->name = zom;
    return (z1);
}
