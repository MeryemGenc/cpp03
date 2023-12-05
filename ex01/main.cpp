#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav("abc");
    ScavTrap scav2("cde");
    ScavTrap scaav = scav;
    scav.attack("cde");
    scav2.takeDamage(500);
    scav2.beRepaired(10);
    scav2.guardGate();
    return 0;
}