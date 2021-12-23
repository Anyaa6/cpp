/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 16:58:39 by abonnel           #+#    #+#             */
/*   Updated: 2021/12/23 16:18:06 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Votre programme doit détecter le type du littéral, acquérir ce littéral dans le bon type
(pour que ce ne soit plus une chaîne), puis le convertir explicitement en chacun des trois
autres types et afficher les résultats en utilisant le même formatage que ci-dessous. Si une
conversion n’a pas de sens ou qu’elle déborde, indiquez que la conversion est impossible.
Vous pouvez inclure n’importe quel header pour gérer les limites et les valeurs spéciales.
*/

//Pour nan inf... on peut les recuperer dans leur type correspondants,
//pour les char : il suffit de checker si static_cast<char>(infinity) = '\0'
//par contre pour les int il faut avoir un flag car sinon il imprime -2147483648 a chaque fois NON, 
//on va aussi de  baser sur le resultat du static cast en char : 
// - si inf nan etc, apres cast en char, char = '\0' alors que n'importe quel autre int, c != '\0'
/*
	int a = 50000000;
	char d = static_cast<char>(a);
	std::cout << "d = " << d << "size of d = " << sizeof(d) << " d == '\\0' ? " << (d == '\0') << std::endl;
*/

#include <iostream>
#include <string>
#include <limits> //try to remove to see if it still works without it with nan inf etc
#include <cmath> //try to remove to see if it still works without it with nan inf etc
#include "detect_type.cpp"

void display_conversions(char const c, int const i, float const f, double const d)
{
	if (c == '\0') //inf inff nan
		std::cout << "char : impossible" << std::endl << "int : impossible" << std::endl;
	else if (c < 32 || c == 127)
		std::cout << "char : Non displayable" << std::endl << "int : " << i << std::endl;
	else
		std::cout << "char : " << c << std::endl << "int : " << i << std::endl;
	std::cout << "float : " << f << "f" << std::endl;
	std::cout << "doub;e : " << d << std::endl;
}

//in convert_to_other_types(), get all var char, float, double... by a static_cast 
//if a double value entered by user is exceeding the float value then it will return inf or -inf when doing this "casting to float : " << static_cast<float>(haha)
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
		return ;
	}
}

//function that detects type and calls directly polymorphic convert function with, as a parameter, a sto..()
// Overflows : sto..() functions throw exceptions --> test_overflow() does try and catch
void detects_type_and_converts(std::string const &arg)
{
	char		c;
	int			i;
	float		f;
	double		d;
	
	if (is_char())
	{
		c = arg[0];
		display_conversions(c, static_cast<int>(c), static_cast<float>(c), static_cast<double>(c))
	}
	else if (is_int())
	{
		test_conversion_overflows(arg, "int");
		i = std::stoi(arg);
		display_conversions(static_cast<char>(i), i, static_cast<float>(i), static_cast<double>(d))
	}
	else if (is_float()) //contient inff -inff nanf
	{
		test_conversion_overflows(arg, "float");
		f = std::stof(arg);
		display_conversions(static_cast<char>(f), static_cast<int>(f), f, static_cast<double>(f))
	}
	else if (is_double())//contient inf -inf nan
	{
		test_conversion_overflows(arg, "double");
		d = std::stod(arg);
		display_conversions(static_cast<char>(d), static_cast<int>(d), static_cast<float>(d), d)
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
}



		
	/*Overflow
		double dd = std::stod("2147483648");

		std::cout << dd << std::endl;
		if (dd > std::numeric_limits<int>::max())
			std::cout << "Number is higher than int" <<std::endl; //will work
		std::cout << static_cast<int>(dd) << std::endl;
	*/

/*
	float f = std::stof("45.5f");
	void *ptr = &f;

	display(std::stof("45.5f"));
	display(std::stoi("1500"));

	double haha = -4.40282e+38;
	std::cout << haha << std::endl;
	std::cout << "casting to float : " << static_cast<float>(haha) << std::endl;
	
	int i = 50000;
	int z = static_cast<int>(i);
	std::cout << "i = " << i << " z = " << z << std::endl;

	double d = 45.56f;
	z = static_cast<int>(d);
	std::cout << "d = " << d << " z = " << z << std::endl;
	void *i_ptr = &i;
	
	int *f_ptr = static_cast<int *>(ptr);
	std::cout << *f_ptr << std::endl;
}
*/

	//detect type, returns letter for it
	//function that returns void*ptr based on the letter : stof stoi...
	
	//function that returns void * //NOAND set a char ptr to the type letter
	
/*
	float	infinity = atof(argv[1]);
	std::string     infinity3 = std::string(argv[1]);
	char c = static_cast<char>(infinity);
	int z = 600000;
	
	display(c);
	display(infinity);
	display(z);
	
	std::cout << "c = " << c << "size of c = " << sizeof(c) << " c == '\\0' ? " << (c == '\0') << std::endl;
	
	std::cout << infinity << std::endl;
	std::cout << static_cast<int>(infinity) << " int " << std::endl;
	std::cout << static_cast<double>(infinity) << " double " << std::endl;
	std::cout << static_cast<char>(infinity) << " char " << std::endl;
	std::cout << std::stof(argv[1]) << "float " << std::endl;

	
	// double	*naaan = static_cast<double>(argv[1]);
// 
	// std::cout << number << std::endl;
	// std::cout << static_cast<int>(number) << std::endl;
	// std::cout << static_cast<char>(number) << std::endl;
	// std::cout << static_cast<double>(number) << std::endl;
}*/

/*

void convert_to_other_types(char const c)
{
	std::cout << "char polymorphism : " << c << std::endl;
	int i = static_cast<int>(c);
	float f = static_cast<float>(c);
	double d = static_cast<double>(c);
	display(c, i, f, d);
}

void convert_to_other_types(int const i)
{
	std::cout << "Int polymorphism : " << i << std::endl;
	char c = static_cast<char>(i);
	float f = static_cast<float>(i);
	double d = static_cast<double>(i);
}

void convert_to_other_types(float const f)
{
	std::cout << "float polymorphism : " << f << std::endl;
	char c = static_cast<char>(f);
	int i = static_cast<int>(f);
	double d = static_cast<double>(f);
}

void convert_to_other_types(double const d)
{
	std::cout << "double polymorphism : " << d << std::endl;
	char c = static_cast<char>(d);
	int i = static_cast<int>(d);
	float f = static_cast<float>(d);
}
*/