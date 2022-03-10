/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:50:07 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/10 16:38:19 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
