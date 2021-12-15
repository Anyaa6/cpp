/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:43:25 by abonnel           #+#    #+#             */
/*   Updated: 2021/12/15 15:29:42 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): inventory()
{
}

MateriaSource::MateriaSource(MateriaSource const &to_copy): inventory()
{
	//do deep copy
	for (int i = 0; i < NB_ITEMS_IN_INVENTORY; i++)
	{
		if (to_copy.inventory[i])
			this->inventory[i] = to_copy.inventory[i]->clone();
	}
}

MateriaSource & MateriaSource::operator=(MateriaSource const &to_copy)
{
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

void MateriaSource::learnMateria(AMateria* m)
{
	int		i;
	
	for (i = 0; i < NB_ITEMS_IN_INVENTORY; i++)
	{
		if (inventory[i] == NULL)
		{
			inventory[i] = m;
			break;
		}
	}
	if (i == 4)
		delete m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < NB_ITEMS_IN_INVENTORY; i++)
	{
		if (inventory[i]->getType() == type)
			return (inventory[i]->clone());
	}
	return NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < NB_ITEMS_IN_INVENTORY; i++)
	{
		if (inventory[i])
			delete inventory[i];
	}
}