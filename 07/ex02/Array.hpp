
#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <string>

template< typename T >
class Array
{
	private:
	T * array;
	unsigned int _size;

	public:

	Array() {_size = 0;};
	Array(unsigned int n) { array = new T[n]();
_size = n;};
	Array(const Array &rhs)
	{
		*this = rhs;
	};
	~Array();
	Array &operator=(const Array &rhs)
	{
		//int o = 0;
		//while (rhs.array[o])
		//	o++;
		this->array = new T[rhs.size()]();
		for (int i = 0; i < rhs.size(); i++)
			this->array[i] = rhs.array[i];
		_size = rhs.size();
		return (*this);
	};
	unsigned int size()
	{
	//	int i = 0;
	//	while (array[i])
	//		i++;
		return (_size);
	};
	T& operator[](std::size_t idx)
	{
		try
		{
			if (idx >= size())
				throw std::invalid_argument("index too high for this array");
			else
				return array[idx];
		}
		catch (const std::invalid_argument& ia)
		{
			std::cout << "Error: " << ia.what() << std::endl;
		}
		return (*array);
	}
};

#endif
