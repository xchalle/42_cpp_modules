/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:50:07 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/12 14:12:18 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H
# define KAREN_H

#include <iostream>
#include <string>

enum	level_e
{
	DEBUG,
	INFO,
	WARNING,
	ERROR
};

class	Karen
{
	public:
		
		Karen();
		~Karen();
		void	complain( std::string level );
	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
};

#endif
