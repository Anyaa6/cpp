/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariane <ariane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:17:40 by ariane            #+#    #+#             */
/*   Updated: 2021/12/02 16:22:24 by ariane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name): _name(name)
{
    std::cout << "ClapTrap default Constructor for " << _name << std::endl; 
    _hitpoints = 10;
    _energy_points = 10;
    _attack_damage = 0;
}

ClapTrap::ClapTrap(ClapTrap const &to_copy)
{
    std::cout << "ClapTrap Constructor by copy for " << _name << std::endl;
    _name = to_copy._name;    
    _hitpoints = to_copy._hitpoints;
    _energy_points = to_copy._energy_points;
    _attack_damage = to_copy._attack_damage;
}

ClapTrap & ClapTrap::operator=(ClapTrap const &to_copy)
{
    std::cout << "ClapTrap Assignation overload" << std::endl;    
    this->_name = to_copy._name;    
    this->_hitpoints = to_copy._hitpoints;
    this->_energy_points = to_copy._energy_points;
    this->_attack_damage = to_copy._attack_damage;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap default Destructor for " << _name << std::endl;    
}

/*
** GAMEPLAY FUNCTIONS
*/

void ClapTrap::attack(std::string const & target)
{
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " \
    << _hitpoints << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "Claptrap " << _name << " takes " << amount << " points of damage." << std::endl;
    _energy_points -= amount;
    if (_energy_points <= 0)
        std::cout << "ClapTrap " << _name << " is dead." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energy_points <= 0)
        std::cout << "Claptrap " << _name << " is dead, it cannot be repaired" << std::endl;
    else
    {
        std::cout << "Claptrap " << _name << " is repaired by " << amount << " points." << std::endl;
        _energy_points += amount;
    }
}

/*
** GETTERS & SETTERS
*/

void ClapTrap::setHitPts(int pts)
{
    _hitpoints = pts;
}

int ClapTrap::getHitPts() const
{
    return _hitpoints;
}

void ClapTrap::setEnergyPts(int pts)
{
    _energy_points = pts;
}

int ClapTrap::getEnergyPts() const
{
    return _energy_points;
}

void ClapTrap::setDamage(int pts)
{
    _attack_damage = pts;
}

int ClapTrap::getDamage() const
{
    return _attack_damage;
}

std::string ClapTrap::getName() const
{
    return _name;
}

ClapTrap::ClapTrap()
{
    //default construcor non accessible
}