#include <iostream>


#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    _hitPoint = 100;
    _energyPoint = 100;
    _attackDamage = 30;
    std::cout << "FragTrap  constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
    _hitPoint = 100;
    _energyPoint = 100;
    _attackDamage = 30;
    std::cout << "FragTrap initializator constructor called by " << name << std::endl;
}


FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
    std::cout << "FragTrap copy constructor called by " << copy.getName() << std::endl;
}


FragTrap& FragTrap::operator=(const FragTrap& other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    return *this;
}


void FragTrap::attack(const std::string& target)
{
     if (_hitPoint == 0 || _energyPoint == 0)
    {
        std::cout << "FragTrap " << _name << " cannot attack: not hit point or energy point" << std::endl;
        return ;
    }
    std::cout << "FragTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage!" << std::endl;
    _energyPoint -=1;
}


void FragTrap::highFivesGuys(void)
{
     std::cout << "FragTrap " << getName() << " requests a positive high-five!" << std::endl;
}


FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}