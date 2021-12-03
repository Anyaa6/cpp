/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:36:17 by ariane            #+#    #+#             */
/*   Updated: 2021/12/03 15:20:09 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main()
{
    ClapTrap Alex("Alex");
    ScavTrap Jean("Jean");
	FragTrap Pierre("Pierre");
	
	std::cout << std::endl;
    Alex.attack(Jean.getName());
    Jean.takeDamage(Alex.getHitPts());
    Jean.attack("Louis");
    Jean.ClapTrap::attack("Louis");
    Jean.guardGate();
	Pierre.highFivesGuys();
	Pierre.attack(Alex.getName());
	Alex.takeDamage(Pierre.getHitPts());
    Alex.beRepaired(20);
	std::cout << std::endl;
	return (0);
}

// ClapTrap *ptr = &Jean; // ne peux acceder qu'a la partie ClapTrap de Jean
// donc par ex ptr->guardGate() ne fonctionne pas car c'est un ptr sur CLAPTrap

// ScavTrap *ptr2 = &Jean;

// ptr->attack("lol");
// ptr2->guardGate();