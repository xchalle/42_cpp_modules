/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:49:03 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/08 15:07:57 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef _CAT_H_
#define _CAT_H_

#include <iostream>
#include <string>

class Cat : public Animal
{
	public:

	Cat();
	Cat(const Cat &rhs);
	~Cat();
	Cat &operator=(const Cat &rhs);
	protected:
	private:
};

#endif
