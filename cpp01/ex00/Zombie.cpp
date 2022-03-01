#include "Zombie.hpp"

Zombie::Zombie()
{
    return ;
}

Zombie::~Zombie()
{
    std::cout << name << " died" << std::endl;
    return ;
}

void    Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}

void	Zombie::set_name( std::string give_name)
{
	this->name = give_name;
	return ;
}
