/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:20:27 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/10 15:26:04 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int i;
    int j;
    char c;

    i = 1;
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    while (av[i])
    {
        j = 0;
        while (av[i][j])
        {
            c = std::toupper(av[i][j]);
            std::cout << c;
            j++;
        }
        i++;
    }
    std::cout << std::endl;
}
