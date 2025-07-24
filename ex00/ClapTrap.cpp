#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap(){
    std::cout << "Default constructor called by " << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
    std::cout << "Initializator constructor called by " << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    *this = copy;
}

ClapTrap::operator=(const ClapTrap& other)
{
    if (this != other)
    {
        _name = other._name;
        _energyPoint = other._energyPoint;
        _hitPoint = other._hitPoint;
        _attackDamage = other._attackDamage;
    }
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if (_hitPoint == 0 || _energyPoint == 0)
    {
        std::cout << "ClapTrap " << _name << " cannot attack: not hit point or energy point" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage!" << std::endl;
    _hitPoint -=1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_attackDamage < amount)
    {
        std::cout << "ClapTrap " << name << "cannot take attack damage of " << amount << std::endl;
        return ;
    }
    _attackDamage -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    _hitPoint += amount;
    _energyPoint -=1;
    std::cout << "ClapTrap: " << name << " repaired hit point to " << _hitPoint << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called by " << _name << std::endl
}