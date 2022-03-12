#include "Zombie.hpp"

int main()
{
	Zombie Woody = Zombie("Woody"); 
	Zombie Buzz = Zombie("Buzz");
	Zombie *Jessy = newZombie("Jessy"); 
	Zombie *Rex = newZombie("Rex"); 

	std::cout << "Woody & Buzz are non-dynamic object from Zombie Class" << std::endl; 
	Woody.announce(); 
	Buzz.announce(); 

	std::cout << "Jessy & Rex are dynamic object from Zombie Class build by newZombie" << std::endl; 
	Jessy->announce();
	Rex->announce();
	std::cout << "Now we create non-dynamic object into a function : Mr. Potatos && ZigZag, they did quickly because they exists only in the function" << std::endl;
	randomChump("Mr.potatos");
	randomChump("ZigZag"); 
	std::cout << "At the end we need to delete Jessy & Rex, because there a dynamic objects" << std::endl; 
	delete Jessy; 
	delete Rex;
	    std::cout << "After this line we have the main return, so the destructor of Woody & Buzz will be called" << std::endl; 
	return (0);
}
