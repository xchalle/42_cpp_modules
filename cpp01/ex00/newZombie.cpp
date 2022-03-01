#include "Zombie.hpp"

Zombie*  newZombie(std::string name)
{
	Zombie *z1;
	z1 = new Zombie();

	z1->set_name(name);
	return (z1);
}
