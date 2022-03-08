
#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat default constructor called" << std::endl;
	return ;
}

WrongCat::WrongCat(const WrongCat &rhs)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = rhs;
	return ;
}

WrongCat	&WrongCat::operator=( const WrongCat &rhs)
{
	std::cout << "WrongCat copy assignement operator called" << std::endl;
	return  *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
	return ;
}

