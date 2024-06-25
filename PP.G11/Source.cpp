#include <iostream>
#include <string>
#include <vector>
#include "Atom.h"


int main()
{
	std::vector<Atom> water;

	Atom atom{};

	Atom hydrogen{ 1, "Hydrogen", "H", 1.007f };
	Atom oxygen{ 8, "Oxygen", "O", 16.00f };
	
	water.push_back(hydrogen);
	water.push_back(hydrogen);
	water.push_back(oxygen);
	

	std::cout << "Atoms in Water molecule: " << water.size() << std::endl;

	return 0;
}


