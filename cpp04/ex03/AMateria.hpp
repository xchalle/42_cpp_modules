/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:12:18 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/14 17:16:53 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class AMateria
{
	public:

	AMateria(std::string const & type);
	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);	
	protected:

	std::string type;
};
