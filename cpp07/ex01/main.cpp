//
// Created by Ariane on 29/12/2021.
//

#include <iostream>
#include "iter.hpp"

int main()
{
	int array[] = {1, 5, 7, 8};
	iter<int>(array, 4, &(add_2<int>));
	for (int i = 0; i < 4; i++)
	{
		std::cout << "array[" << i << "] = " << array[i] << std::endl;
	}
	std::cout << std::endl;

	float otherArray[] = {8.2, 4.7, 7.3, 9.0};
	for (int i = 0; i < 4; i++)
	{
		std::cout << "otherarray[" << i << "] = " << otherArray[i] << std::endl;
	}
	std::cout << std::endl;

	iter<float>(otherArray, 4, &(add_2<float>));

	for (int i = 0; i < 4; i++) {
		std::cout << "otherarray[" << i << "] = " << otherArray[i] << std::endl;
	}
}
