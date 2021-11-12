/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 11:34:21 by abonnel           #+#    #+#             */
/*   Updated: 2021/11/12 13:48:43 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "iostream"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
}

HumanA::~HumanA()
{
	
}

void HumanA::attack(void)
{
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}