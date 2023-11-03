#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA {
private:
    std::string name;
    Weapon& weapon;
public:
    // Constructor
    HumanA(const std::string& humanName, Weapon& humanWeapon);

		void setWeapon(Weapon& newWeapon);
		void attack();
};

#endif