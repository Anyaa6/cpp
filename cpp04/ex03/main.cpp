/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:23:43 by abonnel           #+#    #+#             */
/*   Updated: 2021/12/15 10:46:44 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main()
{
	Character jean("Jean");

	jean.equip(new Ice());
	jean.equip(new Cure());
	jean.equip(new Ice());

	std::cout << "\n Pierre's inventory -> created by deep copy of jean" << std::endl;
	Character pierre(jean);

	for (int i = 0; i < NB_ITEMS_IN_INVENTORY; i++)
	{
		if (pierre.inventory[i])
			std::cout << pierre.inventory[i]->getType() << std::endl;
	}

	std::cout << "\n Creation of Paul" << std::endl;
	Character paul("paul");

	paul.equip(new Ice());

	for (int i = 0; i < NB_ITEMS_IN_INVENTORY; i++)
	{
		if (paul.inventory[i])
			std::cout << paul.inventory[i]->getType() << std::endl;
		else
			std::cout << "no inventory for paul" << std::endl;
	}

	std::cout << "\n Paul = Pierre" << std::endl;
	paul = pierre;

	for (int i = 0; i < NB_ITEMS_IN_INVENTORY; i++)
	{
		if (paul.inventory[i])
			std::cout << paul.inventory[i]->getType() << std::endl;
		else
			std::cout << "no inventory for paul" << std::endl;
	}
	
	
	// 	inventory[i] = nullptr;
	//std::cout << pierre.getName() << std::endl;
}

// int main()
// {
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());

// 	ICharacter* me = new Character("me");
// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);

// 	ICharacter* bob = new Character("bob");
// 	me->use(0, *bob);
// 	me->use(1, *bob);
	
// 	delete bob;
// 	delete me;
// 	delete src;
// 	return 0;
// }