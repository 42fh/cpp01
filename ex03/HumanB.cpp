#include "HumanB.hpp"

HumanB::HumanB(const std::string& constrName) : name(constrName){}
void HumanB::setWeapon(Weapon& newWeapon){weapon = &newWeapon;}
void HumanB::attack(void){ std::cout << name << " attacks with " << weapon->getType() << std::endl;}

