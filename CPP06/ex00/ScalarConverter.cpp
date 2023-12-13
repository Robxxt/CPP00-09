/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 10:45:31 by rdragan           #+#    #+#             */
/*   Updated: 2023/12/13 16:19:07 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& s) { (void)s; }

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& s)
{
	(void)s;
	return *this;
}

ScalarConverter::~ScalarConverter() {}

void	ScalarConverter::convert(std::string s)
{
	char	*end;

	double	nDouble = static_cast<double>(strtod(s.c_str(), &end));
	(void)nDouble;

	if (isSpecial(s) == true)
	{
		printSpecial(s);
		return ;
	}
	if (*end != '\0')
	{
		if (s.length() == 1)
		{
			display_one_char(s);
			return ;
		}
		else if (inputIsFloatFormat(s))
		{
			s.erase(s.size() - 1);
		}
		else
		{
			std::cerr << "[ERROR] INVALID INPUT" << std::endl;
			return ;
		}
	}
	printNormal(s);
}