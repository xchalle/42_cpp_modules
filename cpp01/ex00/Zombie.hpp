/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <xchalle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 14:13:06 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/12 14:13:34 by xchalle          ###   ########.fr       */
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

Zombie*	newZombie(std::string zom);
void	randomChump( std::string name );

#endif
