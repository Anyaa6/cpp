/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariane <ariane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 16:58:39 by abonnel           #+#    #+#             */
/*   Updated: 2021/12/27 14:09:41 by ariane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "detect_type.hpp"

void display_conversions(char const c, int const i, float const f, double const d)
{
	if (c == '\0') //inf inff nan
		std::cout << "char : impossible" << std::endl << "int : impossible" << std::endl;
	else if (c < 32 || c == 127)
		std::cout << "char : Non displayable" << std::endl << "int : " << i << std::endl;
	else
		std::cout << "char : '" << c << "'" << std::endl << "int : " << i << std::endl;
	std::cout << "float : " << std::fixed << f << "f" << std::endl;
	std::cout << "double : " << d << std::endl;
}

void test_conversion_overflows(std::string const &arg, std::string type)
{
	try
	{
		if (type == "int")
			std::stoi(arg);
		else if (type == "float")
			std::stof(arg);
		else if (type == "double")
			std::stod(arg);
	}
	catch(const std::exception& e)
	{
		std::cout << "Issue when converting string to " << type << " : " << e.what() << std::endl;
		exit(1);
	}
}

void detects_type_and_converts(std::string const &arg)
{
	char		c;
	int			i;
	float		f;
	double		d;
	
	if (is_char(arg))
	{
		std::cout << "Char detected" << std::endl;
		c = arg[0];
		display_conversions(c, static_cast<int>(c), static_cast<float>(c), static_cast<double>(c));
	}
	else if (is_int(arg))
	{
		std::cout << "Int detected" << std::endl;
		test_conversion_overflows(arg, "int");
		i = std::stoi(arg);
		display_conversions(static_cast<char>(i), i, static_cast<float>(i), static_cast<double>(i));
	}
	else if (is_float(arg))
	{
		std::cout << "Float detected" << std::endl;
		test_conversion_overflows(arg, "float");
		f = std::stof(arg);
		display_conversions(static_cast<char>(f), static_cast<int>(f), f, static_cast<double>(f));
	}
	else if (is_double(arg))//contient inf -inf nan
	{
		std::cout << "Double detected" << std::endl;
		test_conversion_overflows(arg, "double");
		d = std::stod(arg);
		display_conversions(static_cast<char>(d), static_cast<int>(d), static_cast<float>(d), d);
	}
	else
		std::cout << "Type not recognized" << std::endl;
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "You need to input ONE argument" << std::endl;
		return 1;
	}
	detects_type_and_converts(argv[1]);
	return 0;
}
