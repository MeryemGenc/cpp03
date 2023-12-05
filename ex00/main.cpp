#include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrap1;
    ClapTrap claptrap2("abc");
    ClapTrap claptrap3(claptrap2);
    ClapTrap claptrap4("klm");

    claptrap1.attack("abc");
    claptrap2.takeDamage(100000000);
    claptrap2.beRepaired(10);

    claptrap2.attack("klm");
    claptrap4.takeDamage(5);
    claptrap4.beRepaired(1000);
    claptrap4.takeDamage(1000);
    claptrap4.beRepaired(1000);
    return 0;
}

