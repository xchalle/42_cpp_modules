#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie *z1;

	z1 = new Zombie[N]();
	for (int i = 0; i < N; i++)
		z1[i].set_name(name);
	return z1;
}	
