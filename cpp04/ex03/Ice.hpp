/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:27:39 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/14 17:32:16 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef _ICE_H_
#define _ICE_H_

#include "AMateria.hpp"

class Ice
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
