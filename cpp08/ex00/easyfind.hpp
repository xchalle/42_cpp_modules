
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
	typename T::iterator it = std::find(src.begin(), src.end(), nbr);
	typename T::iterator ite = src.end();
	if (it == ite)
		throw NoMemberInContainer();
	return (*it);
}

#endif
