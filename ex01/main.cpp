#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

#include <iostream>


int main()
{
    ClapTrap naruto("Naruto");
    printClapTrap(naruto);

    ScavTrap pain("Pain");
    
    pain.setHitPoint(2);
    printClapTrap(pain);
    pain.beRepaired(0);
    printClapTrap(pain);
    for(int i = 0; i < 2; i++)
    {
        pain.attack(naruto.getName());
        printClapTrap(pain);
    }
    pain.guardGate();
    printClapTrap(naruto);
}