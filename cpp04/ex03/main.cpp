/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:23:43 by abonnel           #+#    #+#             */
/*   Updated: 2021/12/15 15:33:12 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"


int main()
{
	MateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	for (int i = 0; i < NB_ITEMS_IN_INVENTORY; i++)
	{
		if (src->inventory[i])
			std::cout << src->inventory[i]->getType() << std::endl;
	}

	ICharacter* me = new Character("me");
	std::cout << me->getName() << std::endl;
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;

	//My tests
	std::cout << "\n\n\nMY TESTS" << std::endl;
	Character jean("Jean");
	
	jean.equip(new Ice());
	jean.equip(new Cure());
	jean.equip(new Cure());
	jean.equip(new Ice());
	jean.equip(new Ice());
	
	return 0;
}


// int main()
// {
// 	Character jean("Jean");

// 	jean.equip(new Ice());
// 	jean.equip(new Cure());
// 	jean.equip(new Ice());
// 	jean.equip(new Ice());
// 	jean.equip(new Ice());

// 	std::cout << "\n Pierre's inventory -> created by deep copy of jean" << std::endl;
// 	jean.unequip(1);
// 	Character pierre(jean);

// 	std::cout << "\n unequip" << std::endl;

// 	for (int i = 0; i < NB_ITEMS_IN_INVENTORY; i++)
// 	{
// 		if (pierre.inventory[i])
// 			std::cout << pierre.inventory[i]->getType() << std::endl;
// 	}

// 	pierre.use(2, jean);
// 	pierre.equip(new Cure());
// 	pierre.use(1, jean);
// }

