
#ifndef EASYFIND_H
#define EASYFIND_H

#include <iostream>
#include <string>
#include <exception>

class NoMemberInContainer : public std::exception
{
	public:
	virtual const char* what() const throw()
	{
		return ("not this integer in the container");
	}
};

template < typename T>
int	easyfind(T & src, int nbr)
{
	typename T::iterator it;
	typename T::iterator ite = src.end();
	for (it = src.begin() ; it != ite; it++)
	{
		if (*it == nbr)
			return (*it);
	}
	throw NoMemberInContainer();
}

#endif
