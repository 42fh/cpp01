#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string nam): name(nam){}
Zombie::~Zombie(){std::cout << "DEBUG MESSAGE: destructor called for: " << this->name << std::endl;}
void Zombie::announce(void){std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;}

Zombie* newZombie(std::string name){Zombie* n = new Zombie(name); return n;}
void randomChump(std::string name){Zombie r(name); r.announce();}