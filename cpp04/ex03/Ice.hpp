/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:27:39 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/16 12:06:59 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ICE_H
#define ICE_H

#include "AMateria.hpp"

class ICharacter;

class Ice : public AMateria
{
	public:

	Ice();
	Ice(const Ice &rhs);
	~Ice();
	Ice &operator=(const Ice &rhs);
	Ice* clone() const;
	void use(ICharacter& target);
	protected:
	private:
};

#endif
