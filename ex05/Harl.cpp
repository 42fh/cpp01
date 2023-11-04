#include "Harl.h"

Harl::Harl(){}
Harl::~Harl(){}
void Harl::debug( void ){std::cout << "I love .. (debug)" << std::endl;}
void Harl::info( void ){std::cout << "I cannot.. (info)" << std::endl;}
void Harl::warning( void ){std::cout << "I think I.. (warning)" << std::endl;}
void Harl::error( void ){std::cout << "This is un.. (error)" << std::endl;}

void Harl::complain( std::string level )
{
	typedef void (Harl::*fptr)();
	fptr parray[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string sarray[4] = {"debug", "info", "warning", "error"};
	
	for (size_t i = 0; i < 4; i++){if (level == sarray[i]) (this->*parray[i])();}
}
