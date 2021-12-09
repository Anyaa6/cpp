/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:36:17 by ariane            #+#    #+#             */
/*   Updated: 2021/12/06 17:14:27 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "LastTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main()
{
    ClapTrap Alex("Alex");
    ScavTrap Jean("Jean");
	FragTrap Pierre("Pierre");
	LastTrap Paul("Paul");
	ClapTrap *clap_ptr = &Paul;
	ScavTrap *scav_ptr = &Paul;
	FragTrap *frag_ptr = &Paul;
	std::cout << std::endl;
	
	//Alex.attack("lol");
	//Jean.attack("lol");
	//Pierre.attack("lol");
	clap_ptr->attack("lol");
	scav_ptr->attack("lol");
	frag_ptr->attack("lol");
	std::cout << std::endl;
	return (0);
}

// ClapTrap *ptr = &Jean; // ne peux acceder qu'a la partie ClapTrap de Jean
// donc par ex ptr->guardGate() ne fonctionne pas car c'est un ptr sur CLAPTrap

// ScavTrap *ptr2 = &Jean;

// ptr->attack("lol");
// ptr2->guardGate();