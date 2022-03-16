/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <xchalle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:09:54 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/16 12:04:17 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
#define CURE_H

#include "AMateria.hpp"

class ICharacter;

class Cure : public AMateria
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
