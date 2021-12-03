/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 17:39:04 by abonnel           #+#    #+#             */
/*   Updated: 2021/12/03 18:37:27 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

#include <iostream>
#include <string>

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"),  _name(name)
{
    std::cout << "DiamondTrap default Constructor for " << _name << std::endl;
	_hitpoints = FragTrap::_hitpoints;
	_energy_points = 50;
	_attack_damage = FragTrap::_attack_damage;
}

DiamondTrap::DiamondTrap(DiamondTrap const &to_copy): ClapTrap(to_copy._name + "_clap_name"), _name(to_copy._name)
{
    std::cout << "DiamondTrap Constructor by copy for " << _name << std::endl;
    _hitpoints = to_copy.getHitPts();
	_energy_points = to_copy.getEnergyPts();
    _attack_damage = to_copy.getDamage();
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const &to_copy)
{
    std::cout << "DiamondTrap Assignation overload" << std::endl;    
    _name = to_copy.DiamondTrap::_name;
	ClapTrap::_name = to_copy.ClapTrap::_name;
    _hitpoints = to_copy.getHitPts();
	_energy_points = to_copy.getEnergyPts();
    _attack_damage = to_copy.getDamage();
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap default Destructor for " << _name << std::endl;    
}

DiamondTrap::DiamondTrap()
{
    //default construcor non accessible
}

void DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name is : " << _name << " and ClapTrap name is : " << ClapTrap::_name << std::endl;
}