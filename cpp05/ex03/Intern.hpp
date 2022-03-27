
#ifndef INTERN_H
#define INTERN_H

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <iostream>
#include <string>

class PresidentialPardonForm;
class ShrubberyCreationForm;
class RobotomyRequestForm;
class AForm;

class Intern
{
	public:

	Intern();
	Intern(const Intern &rhs);
	~Intern();
	Intern &operator=(const Intern &rhs);
	
	AForm* makeForm(std::string name, std::string target);
	protected:
	private:
};

#endif
