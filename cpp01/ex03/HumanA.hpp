/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 18:34:24 by ariane            #+#    #+#             */
/*   Updated: 2021/11/12 13:56:34 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A
#define HUMAN_A
#include "Weapon.hpp"
#include <string>


class HumanA
{
    public:
        HumanA(std::string name, Weapon& weapon);
        ~HumanA();
        void attack(void);
        
    private:  
        std::string     _name;
        Weapon&			_weapon;
};

#endif