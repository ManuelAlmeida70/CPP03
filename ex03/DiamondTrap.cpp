#include "DiamondTrap.hpp"

#include <iostream>

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name"), FragTrap(), ScavTrap(), _name("Default")
{
    this->_hitPoint = 100;
    this->_energyPoint = 50;
    this->_attackDamage = 30;

    std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap(name), _name(name)
{
    this->_hitPoint = 100;
    this->_energyPoint = 50;
    this->_attackDamage = 30;

    std::cout << "DiamondTrap " << name << " initializator constructor called by " << name << std::endl;
}


DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " <<  this->_name <<  "destructor called" << std::endl;
}


DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(copy), FragTrap(copy), ScavTrap(copy), _name(copy._name)
{

}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
        FragTrap::operator=(other);
        ScavTrap::operator=(other);
        this->_name = other._name;
    }

    return *this;
}

void DiamondTrap::whoAmI()
{
    std::cout << "I am " << this->_name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}