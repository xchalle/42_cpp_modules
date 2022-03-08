
#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	type = "Cat";
	return ;
}

Cat::Cat(const Cat &rhs)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = rhs;
	return ;
}

Cat	&Cat::operator=( const Cat &rhs)
{
	std::cout << "Cat copy assignement operator called" << std::endl;
	type = rhs.type;
	return  *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	return ;
}

