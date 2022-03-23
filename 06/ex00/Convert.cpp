/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <xchalle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 09:53:45 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/23 17:47:26 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert() : _string("")
{
	return ;
}

Convert::Convert(std::string & str) : _string(str)
{
	return ;
}

Convert::Convert(const Convert &rhs)
{
        std::cout << "Convert copy constructor called" << std::endl;
        *this = rhs;
        return ;
}

Convert      &Convert::operator=( const Convert &rhs)
{
        std::cout << "Convert copy assignement operator called" << std::endl;
	_string = rhs._string;
        return  *this;
}

Convert::~Convert()
{
	return ;
}

void	Convert::isChar()
{
	char	c;
	c = static_cast<char>(_string[0]);
	std::cout << "char : " << c << std::endl;
	std::cout << "int : " << static_cast<int>(c) << std::endl;
	std::cout << "float : " << static_cast<float>(c) << std::endl;
	std::cout << "double : " << static_cast<double>(c) << std::endl;
}

void	Convert::print_out_of_range()
{
	std::cout << "char : out of range" << std::endl;
	std::cout << "int : out of range" << std::endl;
	std::cout << "float : out of range" << std::endl;
	std::cout << "double : out of range" << std::endl;
}

void	Convert::print_nan()
{
	std::cout << "char : impossible" << std::endl;
	std::cout << "int : impossible" << std::endl;
	std::cout << "float : nanf" << std::endl;
	std::cout << "double : nan" << std::endl;
}

void	Convert::print_ninf()
{
	std::cout << "char : impossible" << std::endl;
	std::cout << "int : impossible" << std::endl;
	std::cout << "float : -inff" << std::endl;
	std::cout << "double : -inf" << std::endl;
}

void	Convert::print_inf()
{
	std::cout << "char : impossible" << std::endl;
	std::cout << "int : impossible" << std::endl;
	std::cout << "float : +inff" << std::endl;
	std::cout << "double : +inf" << std::endl;
}

void	Convert::isFloat()
{
	float	c;
	bool	test = true;
	c = strtof(_string.c_str(), NULL);
	if (errno == ERANGE || c > 2147483647.0 || c < -2147483648.0)
	{
		test = false;
	}
	if (errno == ERANGE || c > FLT_MAX || c < FLT_MIN) 
	{
		print_out_of_range();
		return;
	}
	std::cout << "char : ";
	if (c < 0 || c > 127)
	{
		std::cout << "impossible" << std::endl;
	}
	else if (!(isprint(c)))
	{
		std::cout << "Non displayable" << std::endl;
	}
	else
		std::cout << static_cast<char>(c) << std::endl;
	std::cout << "int : ";
	if (test == false)
		std::cout << "out of range" << std::endl;
	else
		std::cout << static_cast<int>(c) << std::endl;
	std::cout << "float : ";
	std::cout << static_cast<float>(c) << std::endl;
	std::cout << "double : " << c << std::endl;
}

void	Convert::isDouble()
{
	double	c;
	bool	test = true;
	bool	test2 = true;
	c = strtod(_string.c_str(), NULL);
	if (errno == ERANGE || c > DBL_MAX || c < DBL_MIN)
	{
		print_out_of_range();
		return ;
	}
	if (errno == ERANGE || c > INT_MAX || c < INT_MIN)
	{
		test = false;
	}
	if (errno == ERANGE || c > FLT_MAX || c < FLT_MIN) 
	{
		test2 = false;
	}
	std::cout << "char : ";
	if (c < 0 || c > 127)
	{
		std::cout << "impossible" << std::endl;
	}
	else if (!(isprint(c)))
	{
		std::cout << "Non displayable" << std::endl;
	}
	else
		std::cout << static_cast<char>(c) << std::endl;
	std::cout << "int : ";
	if (test == false)
		std::cout << "out of range" << std::endl;
	else
		std::cout << static_cast<int>(c) << std::endl;
	std::cout << "float : ";
	if (test2 == false)
		std::cout << "out of range" << std::endl;
	else
		std::cout << static_cast<float>(c) << std::endl;
	std::cout << "double : " << c << std::endl;
}

void	Convert::isInt()
{
	long int	c;
	bool	test = true;
	c = strtol(_string.c_str(), NULL, 10);
	if (errno == ERANGE || c > INT_MAX || c < INT_MIN)
	{
		print_out_of_range();
		return ;
	}
	std::cout << "char : ";
	if (c < 0 || c > 127)
	{
		std::cout << "impossible" << std::endl;
	}
	else if (!(isprint(c)))
	{
		std::cout << "Non displayable" << std::endl;
	}
	else
		std::cout << static_cast<char>(c) << std::endl;
	std::cout << "int : ";
	if (test == false)
		std::cout << "out of range" << std::endl;
	else
		std::cout << c << std::endl;
	std::cout << "float : " << static_cast<float>(c) << std::endl;
	std::cout << "double : " << static_cast<double>(c) << std::endl;
}

void	Convert::scalaireConvert()
{
	if (_string.compare("nanf") == 0 || _string.compare("nan") == 0 )
		print_nan();
	else if (_string.compare("inff") == 0  || _string.compare("inf") == 0  || _string.compare("+inff") == 0  || _string.compare("+inf") == 0 )
		print_inf();
	else if (_string.compare("-inff") == 0  || _string.compare("-inf") == 0 )
		print_ninf();
	else if (_string.length() == 1 && _string.find_first_of("0123456789") == std::string::npos)
		isChar();
	else if (_string.find_first_not_of("0123456789") == std::string::npos || (_string.find_first_not_of("0123456789") == 0 && _string[0] == '-'))
		isInt();
	else if (_string.find_first_not_of("0123456789.") == std::string::npos || (_string.find_first_not_of("0123456789.") == 0 && _string[0] == '-'))
		isDouble();
	else if (_string.find_first_not_of("0123456789.f") == std::string::npos || (_string.find_first_not_of("0123456789.f") == 0 && _string[0] == '-'))
		isFloat();
	else 
		std::cout << "Can't get the input type" << std::endl;
	return;
}
