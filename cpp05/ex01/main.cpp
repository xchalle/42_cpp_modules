/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 13:24:46 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/22 16:26:02 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat alain("Alain", 140);
		Bureaucrat alain2;
		Form	form;
		Form	testform("testform", 1, 1);

			
		alain2 = alain;
		alain.decrGrade();
		std::cout << alain <<std::endl;
		std::cout << alain2 <<std::endl;
		Bureaucrat john("John", 1);
		std::cout << testform << std::endl;
		john.signForm(form);
		std::cout << form << std::endl;
		alain.signForm(form);
		alain.signForm(testform);
//	john.incrGrade();
	//	std::cout << john <<std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
