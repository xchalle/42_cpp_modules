/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:53:06 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/23 17:31:23 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base	*generate(void)
{
	srand(time(NULL));
	int _rand = rand() % 3;
	if (_rand == 0)
		return (new A());
	if (_rand == 1)
		return (new B());
	if (_rand == 2)
		return (new C());
	return (NULL);
}

void	identify(Base* p)
{
	A*	a = dynamic_cast<A *>(p);
	B*	b = dynamic_cast<B *>(p);
	C*	c = dynamic_cast<C *>(p);

	if (a)
		std::cout << "true type of pointed object is A" << std::endl;
	if (b)
		std::cout << "true type of pointed object is B" << std::endl;
	if (c)
		std::cout << "true type of pointed object is C" << std::endl;
	return ;
}

void	identify(Base& p)
{
	try
	{
		A&	a = dynamic_cast<A &>(p);
		std::cout << "true type of referenced object is A" << std::endl;
	}
	catch (std::bad_cast &bc)
	{
	}
	try
	{
		B&	b = dynamic_cast<B &>(p);
		std::cout << "true type of referenced object is B" << std::endl;
	}
	catch (std::bad_cast &bc)
	{
	}
	try
	{
		C&	c = dynamic_cast<C &>(p);
		std::cout << "true type of referenced object is C" << std::endl;
	}
	catch (std::bad_cast &bc)
	{
	}
	return ;
}
int main()
{
	Base *base = generate();

	identify(base);	
	identify(*base);	

	delete base;
}
