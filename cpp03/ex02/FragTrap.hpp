/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 14:07:42 by abonnel           #+#    #+#             */
/*   Updated: 2021/12/03 15:17:02 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_HPP
#define FragTrap_HPP

#include "ClapTrap.hpp"
#include <string>

class FragTrap : public ClapTrap
{
    public :
        FragTrap(std::string name);
        FragTrap(FragTrap const &to_copy);
        FragTrap & operator=(FragTrap const &to_copy);
        ~FragTrap();
		
        void attack(std::string const & target);
		void highFivesGuys(void);
        
    private :
        FragTrap();
};

#endif