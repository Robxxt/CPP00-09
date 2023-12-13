/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 10:45:33 by rdragan           #+#    #+#             */
/*   Updated: 2023/12/13 13:58:53 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <string>
# include <iostream>
# include "main.hpp"
class ScalarConverter
{
private:
	ScalarConverter();
	ScalarConverter(const ScalarConverter& s);
	ScalarConverter& operator=(const ScalarConverter& s);
public:
	static void	convert(const std::string& s);
	~ScalarConverter();
};

#endif