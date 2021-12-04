/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariane <ariane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:13:20 by ariane            #+#    #+#             */
/*   Updated: 2021/12/04 09:59:19 by ariane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
//looooool
class ClapTrap 
{
    public :
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const &to_copy);
        ClapTrap & operator=(ClapTrap const &to_copy);
        ~ClapTrap();
        
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        
        void setHitPts(int pts);
        int getHitPts() const;

        void setEnergyPts(int pts);
        int getEnergyPts() const;

        void setDamage(int pts);
        int getDamage() const;
        
        std::string getName() const;
        
    private :
        ClapTrap();
        std::string     _name;
        int             _hitpoints;
        int             _energy_points;
        int             _attack_damage;
        
};

#endif