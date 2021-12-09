/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 14:07:42 by abonnel           #+#    #+#             */
/*   Updated: 2021/12/06 17:16:32 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : public ClapTrap
{
    public :
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const &to_copy);
        ScavTrap & operator=(ScavTrap const &to_copy);
        ~ScavTrap();
		
		void guardGate();
        void attack(std::string const & target);
        
    protected :
        ScavTrap();
};

#endif