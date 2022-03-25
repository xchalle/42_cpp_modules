#include "AMateria.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int	main(void)
{
	
	std::cout << "------------Test 1------------" << std::endl;
	std::cout << std::endl;

	IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	
	std::cout << std::endl;
	std::cout << "------------Test 2------------" << std::endl;
	std::cout << std::endl;

	MateriaSource* s = new MateriaSource();

	ICharacter* joj = new Character("joj");
	ICharacter* joblux = new Character("joblux");

	AMateria*		tmp_materia;

	for (int i = 0; i < 4; i++)
	{
		if ((i % 2) == 0)
			tmp_materia = new Ice();
		else
			tmp_materia = new Cure();
		s->learnMateria(tmp_materia);
	}
	tmp_materia = new Ice();
	s->learnMateria(tmp_materia); //inventory is full
	delete tmp_materia;

	std::cout << std::endl;

	AMateria* fire = s->createMateria("fire");
	joj->equip(fire);
	joj->use(0, *joblux);

	std::cout << std::endl;

	AMateria* ice = s->createMateria("ice");

	joj->equip(ice);
	joj->use(0, *joblux);
	joj->use(9, *joblux);
	joj->use(1, *joblux);

	AMateria* cure = s->createMateria("cure");

	joj->equip(cure);
	joj->use(1, *joblux);
	joj->unequip(1);

	joblux->equip(cure);
	joblux->use(0, *joj);

	delete s;
	delete joj;
	delete joblux;

	return (0);
}
