#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
  
class ClapTrap
{
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& copy);
        ~ClapTrap();

        ClapTrap& operator=(const ClapTrap& other);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        std::string getName() const;
        void setName(const std::string& name);
        int getHitPoint() const;
        void setHitPoint(int point);
        int getEnergyPoint() const;
        void setEnergyPoint(int energy);
        int getAttackDamage() const;
        void setAttackDamage(int attack);

    protected:
        std::string _name;
        unsigned _hitPoint;
        unsigned _energyPoint;
        unsigned _attackDamage;
};

void printClapTrap(const ClapTrap& ClapTrap);

#endif