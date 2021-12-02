/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariane <ariane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:36:17 by ariane            #+#    #+#             */
/*   Updated: 2021/12/02 16:19:49 by ariane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap Alex("Alex");
    ClapTrap Jean("Jean");

    Alex.attack(Jean.getName());
    Jean.takeDamage(Alex.getHitPts());
    Jean.beRepaired(20);

    ClapTrap Paul("Paul");
    Alex.beRepaired(20);
    Paul.attack(Alex.getName());
    Alex.takeDamage(Paul.getHitPts());
}