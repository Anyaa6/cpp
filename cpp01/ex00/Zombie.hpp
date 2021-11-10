/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariane <ariane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 09:46:15 by ariane            #+#    #+#             */
/*   Updated: 2021/11/10 12:15:58 by ariane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie
{
public:
    Zombie(std::string const name);
    ~Zombie();
    void announce(void) const;
    
private:
    std::string const _name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif