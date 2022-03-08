
#ifndef _DOG_H_
#define _DOG_H_

#include <iostream>
#include <string>

class Dog : public Animal
{
	public:

	Dog();
	Dog(const Dog &rhs);
	~Dog();
	Dog &operator=(const Dog &rhs);
	protected:
	private:
};

#endif
