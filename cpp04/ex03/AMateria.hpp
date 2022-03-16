/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:12:18 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/16 12:35:22 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

#include <string>
#include <iostream>

class ICharacter;

class AMateria
{
	public:

	AMateria(std::string const & type);
	AMateria(const AMateria & rhs);
	AMateria &operator=(const AMateria & rhs);
	virtual ~AMateria();
	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);	
	protected:

	std::string type;
};

#endif
