#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap(){
    std::cout << "ClapTrap constructor called by " << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
    std::cout << "ClapTrap initializator constructor called by " << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    *this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if (this != &other)
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
    _energyPoint -=1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoint == 0)
    {
        std::cout << "ClapTrap " << _name << " is already destroyed and cannot take more damage!!!" << std::endl;
        return ;
    }
    if (amount > 2147483647)
    {
        std::cout << "ClapTrap: " << _name << " cannot attack with negative amount!" << std::endl;
        return;
    }
    if (amount >= _hitPoint) _hitPoint = 0;
    else  _hitPoint -= amount;

    std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!!!" << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoint == 0 || _hitPoint == 0)
    {
        std::cout << "ClapTrap: " << _name << " has not life" << std::endl;
        return ;
    }

    if (amount > 2147483647)
    {
        std::cout << "ClapTrap: " << _name << " cannot repair with negative amount!" << std::endl;
        return;
    }

    if (amount == 0)
    {
        std::cout << "ClapTrap: " << _name << " cannot repair with " << amount << " points!" << std::endl;
        return;
    }

    _hitPoint += amount;
    _energyPoint -=1;
    std::cout << "ClapTrap: " << _name << " repaired hit point to " << _hitPoint << std::endl;
}



std::string ClapTrap::getName() const
{
    return this->_name;
}

void ClapTrap::setName(const std::string& name)
{
    this->_name = name;
}

int ClapTrap::getAttackDamage() const
{
    return this->_attackDamage;
}

void ClapTrap::setAttackDamage(int attack)
{
    this->_attackDamage = (attack < 0) ? 0 : attack;
}

int ClapTrap::getEnergyPoint() const
{
    return this->_energyPoint;
}

void ClapTrap::setEnergyPoint(int energy)
{
    this->_energyPoint = (energy < 0) ? 0 : energy;
}

int ClapTrap::getHitPoint() const
{
    return this->_hitPoint;
}

void ClapTrap::setHitPoint(int point)
{
    this->_hitPoint = (point < 0) ? 0 : point;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called by " << _name << std::endl;
}


void printClapTrap(const ClapTrap& clapTrap)
{
    std::cout << "==================ClapTrap Information==================" << std::endl;
    std::cout << "Name: " << clapTrap.getName() << std::endl;
    std::cout << "Hit Points: " << clapTrap.getHitPoint() << std::endl;
    std::cout << "Energy Points: " << clapTrap.getEnergyPoint() << std::endl;
    std::cout << "Attack Damage: " << clapTrap.getAttackDamage() << std::endl;
    std::cout << "========================================================" << std::endl;
}