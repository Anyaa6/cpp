/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 17:05:28 by abonnel           #+#    #+#             */
/*   Updated: 2021/12/15 10:41:29 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Character.hpp"

/*
The Character possesses an inventory of 4 Materia at most, empty at the start. He’ll
equip the Materia in slots 0 to 3, in this order.

In case we try to equip a Materia in a full inventory, or use/unequip a nonexistent
Materia, don’t do a thing.

The unequip method must NOT delete Materia!

The use(int, ICharacter&) method will have to use the Materia at the idx slot,
and pass target as parameter to the AMateria::use method.

Of course, you’ll have to be able to support ANY AMateria in a
Character’s inventory.

Votre Character doit avoir un constructeur qui prend son nom en paramètre. 
L’assignation par copie doit être une deepcopy, bien entendu. L’ancienne Materia du Character
doit être supprimée (donc si on fait jean = paul, si jean avait des materia alors il faut les suppr). 
De même lors de la destruction d’un Character.
*/


#include <iostream>

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
		else
			break;
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
		else
			break;
	}
	
	//do deep copy
	for (int i = 0; i < NB_ITEMS_IN_INVENTORY; i++)
	{
		if (to_copy.inventory[i])
			this->inventory[i] = to_copy.inventory[i]->clone();
		else
			break;
	}

	return (*this);
}

Character::~Character() //delete inventory
{
	for (int i = 0; i < NB_ITEMS_IN_INVENTORY; i++)
	{
		if (inventory[i])
			delete inventory[i];
		else
			break;
	}
}

std::string const & Character::getName() const
{
	return _name;
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < NB_ITEMS_IN_INVENTORY; i++)
	{
		if (!inventory[i])
		{
			inventory[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{

}

void Character::use(int idx, ICharacter& target)
{

}

Character::Character()
{
	for (int i = 0; i < NB_ITEMS_IN_INVENTORY; i++)
		inventory[i] = nullptr;
}


	// for (int i = 0; i < NB_ITEMS_IN_INVENTORY; i++)
	// {
	// 	if (inventory[i] == NULL)
	// 		std::cout << "null inventory"<< std::endl;
	// }
	// 	inventory[i] = nullptr;