#include <iostream>
#include <cstdlib>
#include <fstream>

int main(int argc, char const *argv[])
{
	if (argc != 4){std::cout << "Erro: input must be 3 arguments"; std::exit(1);}
	(void) argv;
	
	std::ofstream output;
	std::ifstream input;
	
	output.open("example.txt");
	if(output.is_open() != true){std::cout << "Error: can't open file"; std::exit(1);}
	
	

	output << "Writing this to a file.\n";
	
	output.close();
	return 0;
}
