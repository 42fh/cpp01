#include "Weapon.hpp"


Weapon::Weapon(std::string newType): type(newType){}

// Getter
const std::string& Weapon::getType() const{return type;}

// Setter
void Weapon::setType(const std::string& newType){type = newType;}
