#include <iostream>
#include <cstdlib>
#include <fstream>
#include <sstream>

int main(int argc, char const *argv[])
{
	if (argc != 4){std::cout << "Erro: input must be 3 arguments"; std::exit(1);}

	std::string filename(argv[1]);
	std::string findstr(argv[2]);	
	std::string replstr(argv[3]);	

	std::ifstream input;
	std::ofstream output;
	
	if (filename.empty() == true || findstr.empty() == true){std::cout << "file name and find string must be non empty" << std::endl; std::exit(1);}

	input.open(filename.c_str());
	output.open((filename + ".replace").c_str());

	// check if opening failed
	if(input.is_open() != true){std::cout << "Error: can't open file"; std::exit(1);}
	if(output.is_open() != true){std::cout << "Error: can't open file"; input.close(); std::exit(1);}
	
	// convert file to stringstream to buffer
	std::stringstream ss;
	ss << input.rdbuf();
	std::string instr(ss.str());
	size_t pos(0);

	// loop through string
	while ((pos = instr.find(findstr, pos)) != std::string::npos)
	{
		instr.erase(pos, findstr.length());
		instr.insert(pos, replstr);
		pos += replstr.length();
	}
	output << instr;
	input.close();
	output.close();
	return 0;
}
