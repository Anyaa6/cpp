/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 10:49:32 by abonnel           #+#    #+#             */
/*   Updated: 2021/12/21 16:58:28 by abonnel          ###   ########.fr       */
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

#include <iostream>
#include <string>
#include <limits> //float a = std::numeric_limits<float>::infinity();
#include <math.h> // nan inff

bool	dot_and_f(std::string const &param, int size)
{
	bool	dot = false;
	bool	f = false;
	
	for (int i = 1; i < size; i++)
	{
		if (param[i] == '.')
			dot = true;
		if (param[i] == 'f')
			f = true;
	}
	return (f && dot);
}

bool	dot(std::string const &param, int size)
{
	bool	dot = false;
	
	for (int i = 1; i < size; i++)
	{
		if (param[i] == '.')
			dot = true;
	}
	return (dot);
}

//creer une classe data avec un char un int float double, tous init a 0 et on rempli la bonne avec detect type
char detect_type(std::string param)
{
	if (param == "-inff" || param == "+inff" || param == "nanf" || dot_and_f(param, param.size())) //float
		return 'f';
	else if (param == "-inf" || param == "+inf" || param == "nan" || dot(param, param.size())) //double
		return 'd';
	else if (param[0] >= 33 && param[0] <= 126) //char
		return 'c';
	else
		return 'i';
}

//STATIC
int main(int argc, char **argv)
{
	char 		type;
	float		fparam =0.0;

	if (argc != 2)
	{
		std::cout << "You need to input 1 arf of one of those types : char, int, float ou double." << std::endl;
		return 1;
	}
	
	std::string arg = std::string(argv[1]);
	type = detect_type(arg);
	if (type == 'f')
		fparam = stof(arg);
	
	void *paramvoid = &fparam;
	int *paramint = static_cast<int *>(paramvoid);
	int intparam = static_cast<int >(fparam);

	float ffff = reinterpret_cast<float>(*paramvoid);
	std::cout << *(static_cast<float *>(paramvoid)) << std::endl;
	std::cout << *paramint << std::endl;
	std::cout << intparam << std::endl;
	std::cout << *(static_cast<char *>(paramvoid)) << std::endl;
	std::cout << *(static_cast<double *>(paramvoid)) << std::endl;

	
	std::cout << static_cast<char >(fparam) << std::endl;
	std::cout << static_cast<int >(fparam) << std::endl;
	std::cout << static_cast<float >(fparam) << std::endl;
	std::cout << static_cast<double >(fparam) << std::endl;

/*	
	f = stof(argv[1])
	d = stod(argv[1])
	c = argv[1][0]
	i = stoi(argv[1])
*/
}

/*
	param = std::string(argv[1]);
	receive = stod(param);
	//type = detect_type(param);
	std::cout << receive << std::endl;
	std::cout << static_cast<float>(receive) << std::endl;
	//std::cout << std::numeric_limits<double>::infinity() << std::endl;
}*/