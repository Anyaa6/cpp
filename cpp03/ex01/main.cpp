/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:36:17 by ariane            #+#    #+#             */
/*   Updated: 2021/12/14 12:45:33 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main()
{
    ClapTrap Alex("Alex");
    ScavTrap Jean("Jean");
	
	std::cout << std::endl;
    Alex.attack(Jean.getName());
    Jean.takeDamage(Alex.getHitPts());
    Jean.attack("Louis");
    Jean.ClapTrap::attack("Louis");
    Jean.guardGate();
    Alex.beRepaired(20);
	std::cout << std::endl;
	return (0);
}

// ClapTrap *ptr = &Jean; // ne peux acceder qu'a la partie ClapTrap de Jean
// donc par ex ptr->guardGate() ne fonctionne pas car c'est un ptr sur CLAPTrap

// ScavTrap *ptr2 = &Jean;

// ptr->attack("lol");
// ptr2->guardGate();