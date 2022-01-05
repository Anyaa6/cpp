//
// Created by Ariane on 29/12/2021.
//

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750

int main(int, char**)
{
	/*
	Array<int> intarr;
	Array<int> otherintarr(6);

	for (int i = 0; i < 6; i++)
		std::cout << otherintarr[i] << std::endl;

	try
	{
		otherintarr[12];
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;

	}

	try
	{
		otherintarr[-2];
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "size of intarr : " << intarr.getSize() << " and otherarr size : "
	<< otherintarr.getSize() << std::endl;
	*/

	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
//	SCOPE, need deep copy for it to work
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

//	for (int i = 0; i < MAX_VAL; i++)
//	{
//		if (mirror[i] != numbers[i])
//		{
//			std::cerr << "didn't save the same value!!" << std::endl;
//			return 1;
//		}
//	}
//	try
//	{
//		numbers[-2] = 0;
//	}
//	catch(const std::exception& e)
//	{
//		std::cerr << e.what() << '\n';
//	}
//	try
//	{
//		numbers[MAX_VAL] = 0;
//	}
//	catch(const std::exception& e)
//	{
//		std::cerr << e.what() << '\n';
//	}
//
//	for (int i = 0; i < MAX_VAL; i++)
//	{
//		numbers[i] = rand();
//	}
	delete [] mirror;//
	return 0;
}