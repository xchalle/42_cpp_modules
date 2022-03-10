/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:17:01 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/10 15:30:14 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
    public :

        PhoneBook();
        ~PhoneBook();
        int     set_contact();
        void    print_phonebook();
        void    print_index();

    private :

        Contact contact[8];
        void    print_sum();
        void    print_interline( int i );
	static unsigned int	total_idx;
	static unsigned	int	idx;
};

#endif
