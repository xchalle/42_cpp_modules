#include "Zombie.hpp"
#define N 10

int main()
{
	Zombie *z1;
	z1 = zombieHorde(N, "Lola");
	for (int i = 0; i < N; i++)
		z1[i].announce();
	delete[] z1;
	return (0);
}
