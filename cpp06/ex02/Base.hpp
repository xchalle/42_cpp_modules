/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:50:54 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/23 17:17:46 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef _BASE_H_
#define _BASE_H_

#include <iostream>
#include <string>

class Base
{
	public:

	virtual ~Base() {};
	protected:
	private:
};


class A : public Base
{
	public:
	A() { std::cout << "A type base create" << std::endl;};
	virtual ~A() {};
	protected:
	private:
};

class B : public Base
{
	public:
	
	B() { std::cout << "B type base create" << std::endl;};
	virtual ~B() {};
	protected:
	private:
};

class C : public Base
{
	public:

	C() { std::cout << "C type base create" << std::endl;}
	virtual ~C() {};
	protected:
	private:
};

#endif
