#include <iostream>
#include <string>


#include "ScavTrap.hpp"



ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _hitPoint = 100;
    _energyPoint = 100;
    _attackDamage = 30;
    std::cout << "ScavTrap initializator constructor called by " << name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
    std::cout << "ScavTrap copy constructor called by " << copy._name << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if (this != &other)
    {
       ClapTrap::operator=(other);
    }
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
     if (_hitPoint == 0 || _energyPoint == 0)
    {
        std::cout << "ClapTrap " << _name << " cannot attack: not hit point or energy point" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage!" << std::endl;
    _energyPoint -=1;
}

void ScavTrap::guardGate()
{
    std::cout << "ClapTrap " << _name << " is now in gate keeper mode" << std::endl;
}


ScavTrap::~ScavTrap()
{
    std::cout << "ClapTrap destructor calleb by " << _name << std::endl;
}