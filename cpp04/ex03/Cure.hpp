#ifndef _CURE_H_
#define _CURE_H_

#include "AMateria.hpp"

class Cure
{
	public:

	Cure();
	Cure(const Cure &rhs);
	~Cure();
	Cure &operator=(const Cure &rhs);
	Cure* clone() const;
	void use(ICharacter& target);
	protected:
	private:
};

#endif
