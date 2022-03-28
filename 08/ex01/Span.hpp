
#ifndef SPAN_H
#define SPAN_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <string>

class Span
{
	public:

		Span(unsigned int N);
		Span(const Span &rhs);
		~Span();
		Span &operator=(const Span &rhs);
		
		void	addNumber(long long int nbr);
		void	addLotNumber(unsigned int range, long long int nbr); //PAS FINI (EXCEPTION END)
		long long int longestSpan(); //pas fini (exception range vide ou 1 exception)
		long long int shortestSpan(); //pas fini (exception range vide ou 1 exception)
	protected:
	private:

		std::vector<long long int> _array;
		std::vector<long long int>::iterator _it;
		std::vector<long long int>::iterator _ite;
		unsigned int _total_nbr;
};

#endif
