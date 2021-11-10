/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariane <ariane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 09:50:24 by ariane            #+#    #+#             */
/*   Updated: 2021/11/10 17:33:09 by ariane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string const name) : _name(name)
{
}

Zombie::Zombie( void )
{
}

Zombie::~Zombie(void)
{
    std::cout << '<' << this->_name << "> is destroyed" << std::endl;
}

void Zombie::setName(std::string name)
{
    this->_name = name;
}

void Zombie::announce(void) const
{
    std::cout << '<' << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}