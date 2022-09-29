
#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <string>
#include <cstdlib>

template< typename T >
class Array
{
	private:
	T * array;
	unsigned int _size;

	public:

	Array() : _size(0) {array = new T[0]();};
	Array(unsigned int n) { array = new T[n]();
_size = n;};
	Array(const Array &rhs)
	{
		*this = rhs;
	};
	~Array()
	{
		delete [] array;
	};
	Array &operator=(const Array &rhs)
	{
		_size = rhs._size;
		this->array = new T[this->_size]();
		for (unsigned int i = 0; i < this->_size; i++)
			this->array[i] = rhs.array[i];
		return (*this);
	};
	unsigned int size()
	{
		return (_size);
	};
	T& operator[](std::size_t idx)
	{
			if (idx >= size() || idx < 0)
				throw std::invalid_argument("index invalid for this array");
			else
				return array[idx];
		return (*array);
	}
};

#endif
