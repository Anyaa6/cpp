#ifndef LastTrap_HPP
#define LastTrap_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>

class LastTrap : public FragTrap
{
    public :
        LastTrap(std::string name);
        LastTrap(LastTrap const &to_copy);
        LastTrap & operator=(LastTrap const &to_copy);
        ~LastTrap();
		
        void attack(std::string const & target);
        
    private :
        LastTrap();
};

#endif