/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 18:34:22 by ariane            #+#    #+#             */
/*   Updated: 2021/11/12 13:56:33 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B
#define HUMAN_B
#include "Weapon.hpp"
#include <string>


class HumanB
{
    public:
        HumanB(std::string name);
        ~HumanB();
        void attack(void);
		void setWeapon(Weapon& weapon);
        
    private:  
        std::string     _name;
        Weapon*			_weapon;

};

#endif