/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariane <ariane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 18:03:26 by ariane            #+#    #+#             */
/*   Updated: 2022/01/10 18:03:30 by ariane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750

int main(int, char**)
{
	std::cout << "Testing empty array constructor and access through [] operator" << std::endl;
	Array<int> empty;
	try {
		std::cout << empty[0] << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
		//commented line belows shows values of numbers and mirror
		//std::cout << "number[" << i << "] = " << numbers[i] << "\nmirror[" << i << "] = " << mirror[i] << std::endl;
	}
//	SCOPE, tests copy constructors and overload of = operator
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\nShow deep copy, first, values are equal : " << std::endl;
	Array<int> copied(numbers);
	for (int i = 0; i < 3; i++) //shows deep copy
		std::cout << "number[" << i << "] = " << numbers[i] << "\ncopied[" << i << "] = " << copied[i] << std::endl;

	std::cout << "\nThen values of number are each modified with rand() and we can see it has not modified values in copied : " << std::endl;
	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	for (int i = 0; i < 3; i++) //shows deep copy
		std::cout << "number[" << i << "] = " << numbers[i] << "\ncopied[" << i << "] = " << copied[i] << std::endl;

	delete [] mirror;//
	return 0;
}