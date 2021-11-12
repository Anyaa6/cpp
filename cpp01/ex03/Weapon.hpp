/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 18:31:01 by ariane            #+#    #+#             */
/*   Updated: 2021/11/12 14:01:46 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <string>

// Make a Weapon class, that has a type string, and a getType method that returns a
// const reference to this string. It also has a setType, of course!

class   Weapon
{
    public:
        std::string&    getType();
        void            setType(std::string type);
        Weapon(std::string weapon_type);
        ~Weapon();
    
    private:
        std::string     _type;
};

#endif