/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:41:10 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/21 16:25:19 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BRAIN_H
# define BRAIN_H

#include <iostream>
#include <string>

class Brain
{
	public:
	
		Brain();
		Brain(const Brain &rhs);
		virtual ~Brain();
		Brain &operator=(const Brain &rhs);

		virtual	std::string* getIdeas();
		virtual	void setIdeas(unsigned int idea_nb, std::string new_idea);
	protected:
	private:

		std::string ideas[100];
};

#endif
