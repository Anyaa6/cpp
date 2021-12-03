/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 14:07:39 by abonnel           #+#    #+#             */
/*   Updated: 2021/12/03 18:26:46 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <string>

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    std::cout << "FragTrap default Constructor for " << this->getName() << std::endl;
	_hitpoints = 100;
	_energy_points = 100;
	_attack_damage = 30;
}

FragTrap::FragTrap(FragTrap const &to_copy): ClapTrap(to_copy.getName())
{
    std::cout << "FragTrap Constructor by copy for " << this->getName() << std::endl;
    _hitpoints = to_copy.getHitPts();
	_energy_points = to_copy.getEnergyPts();
    _attack_damage = to_copy.getDamage();
}

FragTrap & FragTrap::operator=(FragTrap const &to_copy)
{
    std::cout << "FragTrap Assignation overload" << std::endl;    
    _name = to_copy.getName();
    _hitpoints = to_copy.getHitPts();
	_energy_points = to_copy.getEnergyPts();
    _attack_damage = to_copy.getDamage();
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap default Destructor for " << getName() << std::endl;    
}

FragTrap::FragTrap()
{
    std::cout << "FragTrap default Constructor " << std::endl; 
	_hitpoints = 100;
	_energy_points = 100;
	_attack_damage = 30;  
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << getName() << " wants to high five" << std::endl;    
}

void FragTrap::attack(std::string const & target)
{
	std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " \
    << _hitpoints << " points of damage!" << std::endl;
}
