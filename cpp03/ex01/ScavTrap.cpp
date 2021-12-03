/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 14:07:39 by abonnel           #+#    #+#             */
/*   Updated: 2021/12/03 15:07:40 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <string>

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    std::cout << "ScavTrap default Constructor for " << this->getName() << std::endl;
	_hitpoints = 100;
	_energy_points = 50;
	_attack_damage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &to_copy): ClapTrap(to_copy.getName())
{
    std::cout << "ScavTrap Constructor by copy for " << this->getName() << std::endl;
    _hitpoints = to_copy.getHitPts();
	_energy_points = to_copy.getEnergyPts();
    _attack_damage = to_copy.getDamage();
}

ScavTrap & ScavTrap::operator=(ScavTrap const &to_copy)
{
    std::cout << "ScavTrap Assignation overload" << std::endl;    
    _name = to_copy.getName();
    _hitpoints = to_copy.getHitPts();
	_energy_points = to_copy.getEnergyPts();
    _attack_damage = to_copy.getDamage();
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap default Destructor for " << getName() << std::endl;    
}

ScavTrap::ScavTrap()
{
    //default construcor non accessible
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << getName() << " has entered Gate keeper mode" << std::endl;    
}

void ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " \
    << _hitpoints << " points of damage!" << std::endl;
}
