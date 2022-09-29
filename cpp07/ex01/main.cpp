/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 19:25:37 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/29 15:17:35 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	int				nbrs[3] = {1, 2, 3};
	std::string		strs[4] = {"magenta", "green", "blue", "rose"};

	iter(nbrs, 3, &printer);
	iter(strs, 4, &printer);
	return (0);
}
