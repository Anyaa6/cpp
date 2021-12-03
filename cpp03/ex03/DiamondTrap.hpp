/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 17:39:17 by abonnel           #+#    #+#             */
/*   Updated: 2021/12/03 18:28:10 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>

class DiamondTrap : public ScavTrap, public FragTrap
{
    public :
        DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap const &to_copy);
        DiamondTrap & operator=(DiamondTrap const &to_copy);
        ~DiamondTrap();
		
        void attack(std::string const & target);
		void whoAmI();
        
    private :
        DiamondTrap();
		std::string		_name;
		
};

#endif
