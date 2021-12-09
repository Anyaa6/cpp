/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LastTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 14:07:39 by abonnel           #+#    #+#             */
/*   Updated: 2021/12/06 17:15:17 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "LastTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <string>

LastTrap::LastTrap(std::string name): FragTrap(name)
{
    std::cout << "LastTrap default Constructor for " << this->getName() << std::endl;
	_hitpoints = 100;
	_energy_points = 100;
	_attack_damage = 30;
}

LastTrap::LastTrap(LastTrap const &to_copy): FragTrap(to_copy.getName())
{
    std::cout << "LastTrap Constructor by copy for " << this->getName() << std::endl;
    _hitpoints = to_copy.getHitPts();
	_energy_points = to_copy.getEnergyPts();
    _attack_damage = to_copy.getDamage();
}

LastTrap & LastTrap::operator=(LastTrap const &to_copy)
{
    std::cout << "LastTrap Assignation overload" << std::endl;    
    _name = to_copy.getName();
    _hitpoints = to_copy.getHitPts();
	_energy_points = to_copy.getEnergyPts();
    _attack_damage = to_copy.getDamage();
    return (*this);
}

LastTrap::~LastTrap()
{
    std::cout << "LastTrap default Destructor for " << getName() << std::endl;    
}

LastTrap::LastTrap()
{
    //default construcor non accessible
}

void LastTrap::attack(std::string const & target)
{
	std::cout << "LastTrap " << this->_name << " attacks " << target << ", causing " \
    << _hitpoints << " points of damage!" << std::endl;
}
