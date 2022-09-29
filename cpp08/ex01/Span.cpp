
#include "Span.hpp"

Span::Span(unsigned int N)
{
	std::cout << "Span default constructor called" << std::endl;
	_array.reserve(N);
	_it = _array.begin();
	_ite = _array.end();
	_total_nbr = N;
	return ;
}

Span::Span(const Span &rhs)
{
	std::cout << "Span copy constructor called" << std::endl;
	*this = rhs;
	return ;
}

Span	&Span::operator=( const Span &rhs)
{
	std::cout << "Span copy assignement operator called" << std::endl;
	_total_nbr = rhs._total_nbr;
	_array = rhs._array;
	return  *this;
}

Span::~Span()
{
	std::cout << "Span destructor called" << std::endl;
	return ;
}

void	Span::addNumber(long long int nbr) //PAS FINI (EXCEPTION END)
{
	_array.push_back(nbr);
}

void	Span::addLotNumber(unsigned int range, long long int nbr) //PAS FINI (EXCEPTION END)
{
	for(unsigned int i = 0; i < range ; i++)
		_array.push_back(nbr);
}
long long int Span::shortestSpan()
{
	long long int	min;
	std::vector<long long int>::iterator it;
	std::vector<long long int>::iterator it2;
	std::vector<long long int>::iterator ite = _array.end();
	min = longestSpan();
	for (it = _array.begin(); it != ite; it++)
	{
		for (it2 = _array.begin(); it2 != ite; it2++)
		{
			if (it != it2 && std::llabs(*it - *it2) < min)
				min = std::llabs(*it - *it2);
		}		
	}
	return (min);
}

long long int Span::longestSpan() //pas fini (exception range vide ou 1 exception)
{
	std::vector<long long int>::iterator it = std::min_element(_array.begin(), _array.end());
	std::vector<long long int>::iterator ite = std::max_element(_array.begin(), _array.end());
	return (*ite - *it);
}
