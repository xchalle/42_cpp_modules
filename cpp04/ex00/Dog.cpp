
#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	type = "Dog";
	return ;
}

Dog::Dog(const Dog &rhs)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = rhs;
	return ;
}

Dog	&Dog::operator=( const Dog &rhs)
{
	std::cout << "Dog copy assignement operator called" << std::endl;
	type = rhs.type;
	return  *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	return ;
}

