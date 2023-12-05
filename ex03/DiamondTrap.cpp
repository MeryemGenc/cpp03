#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap 2nd constructor called" << std::endl;
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap& tmp) // bunu yapmamıza gerek var mı? : ClapTrap(tmp)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    *this = tmp;
}

DiamondTrap& DiamondTrap::operator= (const DiamondTrap& tmp)
{
    std::cout << "DiamondTrap assigment operator called" << std::endl;
    if (this != &tmp)
    {
        _name = tmp._name;
        _hit_points = tmp._hit_points;
        _attack_damage = tmp._attack_damage;
        _energy_points = tmp._energy_points;
    }
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
    if (!this->_energy_points)
    {
        std::cout << this->_name << ", you have no enough energy point to attack." << std::endl;
        return ;
    }
    if (this->_hit_points < this->_attack_damage)
        std::cout << this->_name << ", you have no enough attack point to attack." << std::endl;
    else
    {
        std::cout << "DiamondTrap " << _name << " attacks " << target << "; causing " << _attack_damage << " points of damage." << std::endl;
        this->_energy_points--;
    }
}