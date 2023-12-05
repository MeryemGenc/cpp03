#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    protected:
        ScavTrap();
    public:
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap&);
        ScavTrap& operator= (const ScavTrap&);
        ~ScavTrap();

        void attack(const std::string& target);
        void guardGate();
};


#endif