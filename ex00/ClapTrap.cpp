#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap(){
    std::cout << "Default constructor called by " << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
    std::cout << "Initializator constructor called by " << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    std::cout << _name << " attacks " << target << " causing " << _attackDamage << " points of damage!" << std::endl;
}