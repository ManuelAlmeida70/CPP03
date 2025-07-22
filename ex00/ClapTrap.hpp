#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
private:
    std::string _name;
    unsigned _hitPoint;
    unsigned _energyPoint;
    unsigned _attackDamage;
public:
    ClapTrap();
    ClapTrap(std::string name);
    ~ClapTrap();

    ClapTrap operator=(const ClapTrap& copy);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    std::string getName() const;
    void setName(std::string name);
    int getPoint() const;
    void setPoint(int point);
    int getEnergy() const;
    void setEnergy(int energy);
    int getAttack() const;
    void setAttack(int attack);
};

#endif
