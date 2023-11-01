#include "Zombie.hpp"

int main()
{
	Zombie a("first Zombie");
	a.announce();
	
	Zombie* b = newZombie("second Zombie");
	b->announce();
	delete b;

	randomChump("third Zombie");
}