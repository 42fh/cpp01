#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB {
private:
    std::string name;
    Weapon* weapon;
public:
    // Constructor
    HumanB(const std::string& humanName);
    
    // Setter for weapon
    void setWeapon(Weapon& newWeapon);

		void attack();
};

#endif