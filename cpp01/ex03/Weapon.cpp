/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 18:31:12 by ariane            #+#    #+#             */
/*   Updated: 2021/11/12 14:01:53 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon_type) : _type(weapon_type)
{
	
}

Weapon::~Weapon()
{
	
}

std::string&    Weapon::getType()
{
	return (this->_type);
}

void            Weapon::setType(std::string type)
{
	this->_type = type;
}