#include "HumanA.hpp"

HumanA::HumanA(const std::string& constrName, Weapon& constrWeapon) : name(constrName), weapon(constrWeapon) {}
void HumanA::setWeapon(Weapon& newWeapon){weapon = newWeapon;}
void HumanA::attack(void)
{ std::cout << name << " attacks with " << weapon.getType() << std::endl;}