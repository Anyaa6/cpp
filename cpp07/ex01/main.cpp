//
// Created by Ariane on 29/12/2021.
//

#include <iostream>
#include "iter.hpp"

int main()
{
//	int array[] = {1, 5, 7, 8};
//	float farray[4] = {1.5, 5.3, 7.7, 8.9};

	int *otherArray = new int[4]();
	otherArray[0] = 8;
	otherArray[1] = 4;
	otherArray[2] = 7;
	otherArray[3] = 9;
	iter<int>(otherArray, 4, &(add_2<int>));

	for (int i = 0; i < 4; i++)
	{
		std::cout << "array[" << i << "] = " << otherArray[i] << std::endl;
	}
}

//void iter(int **array)