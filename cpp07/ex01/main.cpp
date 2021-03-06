/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariane <ariane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 18:03:06 by ariane            #+#    #+#             */
/*   Updated: 2022/01/10 18:03:10 by ariane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

int main()
{
	int array[] = {1, 5, 7, 8};

	std::cout << "Before iter" << std::endl;
	for (int i = 0; i < 4; i++)
		std::cout << "array[" << i << "] = " << array[i] << std::endl;

	iter<int>(array, 4, &(add_2<int>));
	std::cout << "\nAfter iter" << std::endl;
	for (int i = 0; i < 4; i++)
		std::cout << "array[" << i << "] = " << array[i] << std::endl;
	std::cout << std::endl;

	float otherArray[] = {8.2, 4.7, 7.3, 9.0};

	std::cout << "Before iter" << std::endl;
	for (int i = 0; i < 4; i++)
		std::cout << "otherarray[" << i << "] = " << otherArray[i] << std::endl;
	std::cout << std::endl;

	iter<float>(otherArray, 4, &(add_2<float>));
	std::cout << "\nAfter iter" << std::endl;
	for (int i = 0; i < 4; i++) {
		std::cout << "otherarray[" << i << "] = " << otherArray[i] << std::endl;
	}
	return 0;
}
