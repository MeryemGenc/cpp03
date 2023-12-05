#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        DiamondTrap();
    public:
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap&);
        DiamondTrap& operator= (const DiamondTrap&);
        ~DiamondTrap();

        using ScavTrap::attack;
};


#endif