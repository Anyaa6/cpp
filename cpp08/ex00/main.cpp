/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariane <ariane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 18:03:44 by ariane            #+#    #+#             */
/*   Updated: 2022/01/10 18:03:51 by ariane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main()
{
	std::cout << "Created a vector of 12 ints, they all have value 2 except one "
				 "that has value 15" << std::endl;
	std::vector<int> array(12, 2);
	std::vector<int>::iterator it;
	int needle;
	array[3] = 15;

	needle = 2;
	it = easyfind(array, needle);
	if (it == array.end())
		std::cout << "value " << needle << " not found" << std::endl;
	else
		std::cout << "value " << needle << " found" << std::endl;

	needle = 3;
	it = easyfind(array, needle);
	if (it == array.end())
		std::cout << "value " << needle << " not found" << std::endl;
	else
		std::cout << "value " << needle << " found" << std::endl;

	needle = 15;
	it = easyfind(array, needle);
	if (it == array.end())
		std::cout << "value " << needle << " not found" << std::endl;
	else
		std::cout << "value " << needle << " found" << std::endl;

}