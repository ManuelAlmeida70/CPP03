#include "ClapTrap.hpp"

#include <iostream>


int main()
{
    ClapTrap naruto("Naruto");
    printClapTrap(naruto);

    ClapTrap pain("Pain");
    
    pain.setHitPoint(2);
    printClapTrap(pain);
    pain.beRepaired(0);
    printClapTrap(pain);
    for(int i = 0; i < 11; i++)
    {
        pain.attack(naruto.getName());
        printClapTrap(pain);
    }
   
    printClapTrap(naruto);
}