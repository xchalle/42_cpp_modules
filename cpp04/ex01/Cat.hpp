/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:49:03 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/21 16:24:04 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:

	Cat();
	Cat(const Cat &rhs);
	virtual ~Cat();
	Cat &operator=(const Cat &rhs);

	virtual void		makeSound() const;
	virtual std::string	getType() const;
	std::string*	getIdeas() const;
	void		setIdeas(unsigned int idea_nb, std::string new_idea);
	protected:
	private:

	Brain *brain;
};

#endif
