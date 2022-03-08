
#ifndef _WRONGCAT_H_
#define _WRONGCAT_H_

#include <iostream>
#include <string>

class WrongCat
{
	public:

	WrongCat();
	WrongCat(const WrongCat &rhs);
	~WrongCat();
	WrongCat &operator=(const WrongCat &rhs);
	protected:
	private:
};

#endif
