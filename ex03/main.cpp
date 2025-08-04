#include "DiamondTrap.hpp"
#include <iostream>

int main()
{
    std::cout << "=== Testing DiamondTrap ===" << std::endl;
    
    // Test construction
    std::cout << "\n\n\n--- Creating DiamondTrap ---" << std::endl;
    DiamondTrap diamond("Sparkle");
    
    // Test special abilities
    std::cout << "\n\n\n--- Testing special abilities ---" << std::endl;
    diamond.whoAmI();
    diamond.guardGate();        
    diamond.highFivesGuys();
    printClapTrap(diamond);
    
    // Test basic functionality
    std::cout << "\n\n\n--- Testing basic functionality ---" << std::endl;
    diamond.attack("target");
    printClapTrap(diamond);
    diamond.takeDamage(30);
    diamond.beRepaired(20);
    
    // Test copy constructor
    std::cout << "\n\n\n--- Testing copy constructor ---" << std::endl;
    DiamondTrap diamond2(diamond);
    diamond2.whoAmI();
    
    // Test assignment operator
    std::cout << "\n\n\n--- Testing assignment operator ---" << std::endl;
    DiamondTrap diamond3("Another");
    diamond3 = diamond;
    diamond3.whoAmI();
    
    std::cout << "\n\n\n--- End of tests ---" << std::endl;
    
    return 0;
}