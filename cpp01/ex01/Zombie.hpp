/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <xchalle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 14:13:45 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/12 14:14:25 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>

class   Zombie
{
    public:
        Zombie();
	Zombie( std::string newname );
        ~Zombie();
        void    announce( void );
        void    set_name( std::string give_name);

    private:
        std::string name;
};

Zombie*	zombieHorde( int N, std::string name );

#endif
