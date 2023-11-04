#include <iostream>
#include <cstdlib>
#include "Harl.h"

// typedef void(*fpt)(void);

int main(int argc, char *argv[])
{
	if (argc != 2){std::cerr << "must supply one argument" << std::endl; std::exit(1);}
	Harl h; std::string s(argv[1]); h.complain(s); return 0;
}
