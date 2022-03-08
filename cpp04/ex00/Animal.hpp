
#ifndef _ANIMAL_H_
#define _ANIMAL_H_

#include <iostream>
#include <string>

class Animal
{
	public:

	Animal();
	Animal(const Animal &rhs);
	~Animal();
	Animal &operator=(const Animal &rhs);

	void	makeSound();
	protected:
	std::string	type;
	private:
};

#endif
