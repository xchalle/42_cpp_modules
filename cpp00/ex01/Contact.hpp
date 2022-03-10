/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:16:06 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/10 15:16:43 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <string>
#include <stdlib.h>

class Contact
{
    public :

        Contact();
        ~Contact();
        int     set_contact();
        std::string give_info(int idx);
        void        print_tab(int idx);
    
    private :

        std::string  info[5];
};

#endif
