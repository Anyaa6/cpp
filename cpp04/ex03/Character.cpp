/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 17:05:28 by abonnel           #+#    #+#             */
/*   Updated: 2021/12/15 12:26:24 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Character.hpp"
#include "AMateria.hpp"

/*
The use(int, ICharacter&) method will have to use the Materia at the idx slot,
and pass target as parameter to the AMateria::use method.
*/

Character::Character(std::string name): _name(name), inventory() //inventory() set inventory to null ptrs
{
}

//for Character by copy, it does not have any materia on him bc he did not exist before
Character::Character(Character const &to_copy): _name(to_copy._name), inventory()
{
	//do deep copy
	for (int i = 0; i < NB_ITEMS_IN_INVENTORY; i++)
	{
		if (to_copy.inventory[i])
			this->inventory[i] = to_copy.inventory[i]->clone();
	}
}

Character & Character::operator=(Character const &to_copy)
{
	_name = to_copy._name;

	//delete existing materias in inventory
	for (int i = 0; i < NB_ITEMS_IN_INVENTORY; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
	
	//do deep copy
	for (int i = 0; i < NB_ITEMS_IN_INVENTORY; i++)
	{
		if (to_copy.inventory[i])
			this->inventory[i] = to_copy.inventory[i]->clone();
	}
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < NB_ITEMS_IN_INVENTORY; i++)
	{
		if (inventory[i])
			delete inventory[i];
	}
}

std::string const & Character::getName() const
{
	return _name;
}

void Character::equip(AMateria* m)
{
	int 	i;
	
	for (i = 0; i < NB_ITEMS_IN_INVENTORY; i++)
	{
		if (!inventory[i])
		{
			inventory[i] = m;
			break;
		}
	}
	if (i == 4)
		delete m;
}

void Character::unequip(int idx)
{
	if (inventory[idx])
		inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (inventory[idx])
		inventory[idx]->use(target);
}

Character::Character(): inventory()
{
}


	// for (int i = 0; i < NB_ITEMS_IN_INVENTORY; i++)
	// {
	// 	if (inventory[i] == NULL)
	// 		std::cout << "null inventory"<< std::endl;
	// }
	// 	inventory[i] = nullptr;