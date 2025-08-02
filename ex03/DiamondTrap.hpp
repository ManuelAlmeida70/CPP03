#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <string>

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap& copy);
        
        ~DiamondTrap();

        DiamondTrap& operator=(const DiamondTrap& other);

        void whoAmI();

        using ScavTrap::attack;

    private:
        std::string _name;
};

#endif