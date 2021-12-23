/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 16:58:39 by abonnel           #+#    #+#             */
/*   Updated: 2021/12/23 12:12:26 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Ecrivez un programme qui prend en paramètre une chaîne de caractères réprésentant
une valeur littérale de C ++ (sous sa forme la plus courante). Cette valeur doit appartenir à l’un des types scalaires suivants : char, int, float ou double. Seule la notation
décimale sera utilisée.

Exemples de valeurs littérales de char : ’c’, ’a’...
Pour simplifier, veuillez noter que : les caractères non affichables ne peuvent pas être
passés en paramètre à votre programme et si une conversion en char ne peut pas être
affichée, renvoyez un message d’erreur.
Exemples de valeurs littérales int : 0, -42, 42...
Exemples de valeurs littérales float : 0.0f, -4.2f, 4.2f... Vous accepterez également
ces pseudo-littéraux, vous savez, pour la science : -inff, + inff et nanf.
Exemples de valeurs littérales double : 0.0, -4.2, 4.2... Vous accepterez également
ces pseudo-littéraux, vous savez, pour le plaisir ... : -inf, + inf et nan.


Votre programme doit détecter le type du littéral, acquérir ce littéral dans le bon type
(pour que ce ne soit plus une chaîne), puis le convertir explicitement en chacun des trois
autres types et afficher les résultats en utilisant le même formatage que ci-dessous. Si une
conversion n’a pas de sens ou qu’elle déborde, indiquez que la conversion est impossible.
Vous pouvez inclure n’importe quel header pour gérer les limites et les valeurs spéciales.
*/

//choper peu importe le type en double
//choper l'arg dans le bon type et ensuite utiliser le polymorphisme de fonction pour l'affichage
//une fonction qui prend un int en param, autre double... Une fois que notre objet est typé

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

void display(int i)
{
	std::cout << "Int polymorphism : " << i << std::endl;
}

void display(float i)
{
	std::cout << "float polymorphism : " << i << std::endl;
}

void display(char i)
{
	std::cout << "char polymorphism : " << i << std::endl;
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Need an arg" << std::endl;
		return 1;
	}

	//function that detects type and calls directly polymorphic display function with, as a parameter, a sto..()
	//how to check wether value overlows :
	// sto..() functions throw exceptions if out of range
	//-> If the value read is out of the range of representable values by a long int, either an invalid_argument or an out_of_range exception is thrown.
	//if a double value entered by user is exceeding the float value then it will return inf or -inf when doing this "casting to float : " << static_cast<float>(haha)
		//if (int)
		//	{
		//		try
		//		{
		//			stoi(std::string(argv[1]));
		//			display(stoi(std::string(argv[1])))
		//		}
		//		catch (std::exception &e)
		//			std::cout << "Issue when converting string to int : " << e.what() << std::endl;
		//			AND STOP THE PROGRAM THERE
		//	}
	//in display(), get all var char, float, double... by a static_cast : 
	// char c = static_cast<char>(param);
	// int i = static_cast<i>(param);
	// double d = static_cast<d>(param);
	// float f = static_cast<float>(param);
	//and then print everyone of them in a print(char c, int i, float f, double d) function
		//for char and int if char = '\0' --> impossible pour char ET int
		//for char if not displayable -> "not displayable"
		//for float --> add an f at the end
		//for double -> nothing special

		
	/*Overflow
		double dd = std::stod("2147483648");

		std::cout << dd << std::endl;
		if (dd > std::numeric_limits<int>::max())
			std::cout << "Number is higher than int" <<std::endl; //will work
		std::cout << static_cast<int>(dd) << std::endl;
	*/
	
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