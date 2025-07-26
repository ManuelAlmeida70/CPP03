#include <iostream>


#include "ScavTrap.hpp"



ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string& name) : ClapTrap(name)
{
    _hitPoint = 100;
    _energyPoint = 100;
    _attackDamage = 30;
    std::cout << "ScavTrap initializator constructor called by " << name << std::endl;
}