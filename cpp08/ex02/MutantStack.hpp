
#ifndef _MutantStack_H_
#define _MutantStack_H_

#include <iostream>
#include <string>
#include <stack>

template < typename T >
class MutantStack : public std::stack<T>
{
	public:

	iterator begin();
	iterator end();
	protected:
	private:
};

#endif
