/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <xchalle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 09:48:30 by xchalle           #+#    #+#             */
/*   Updated: 2022/03/23 12:07:07 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONVERT_H
# define	CONVERT_H

#include <iostream> 
#include <string> 
#include <climits> 
#include <cfloat> 
#include <limits> 

class Convert
{
	public:
	Convert();
	Convert(std::string & str);
	Convert(const Convert & rhs);
	Convert& operator=(const Convert &rhs);
	~Convert();

	void	scalaireConvert();
	void	isChar();
	void	isInt();
	void	isDouble();
	void	isFloat();
	private:
	std::string	_string;
};

#endif
