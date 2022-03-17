/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <xchalle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 11:12:43 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/17 13:33:43 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H


#include "ICharacter.hpp"

class AMateria;

class Character : public ICharacter
{
	public:
		Character(std::string name);
		Character( const Character & rhs);
		Character &operator=(const Character &rhs);
		virtual ~Character();
		virtual	std::string const & getName() const;
		virtual	void equip(AMateria* m);
		virtual	void unequip(int idx);
		virtual	void use(int idxm, ICharacter& target);
	private:
		std::string	name;
		AMateria*	inventory[4];

};

#endif
