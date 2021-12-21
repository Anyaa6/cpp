/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 10:32:46 by abonnel           #+#    #+#             */
/*   Updated: 2021/12/21 16:07:12 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdint>
#include <iostream>

struct Data {
	int random;	
};

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main()
{
	Data	instance;
	Data	*instanceptr;
	
	instance.random = 12;
	instanceptr = deserialize(serialize(&instance));
	std::cout << "instance.random = " << instanceptr->random << std::endl;

	if (&instance == instanceptr)
		std::cout << "Pointers are equal" << std::endl;
	return 0;
}