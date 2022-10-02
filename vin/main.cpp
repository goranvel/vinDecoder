#include <iostream>

#include "vin.h"

int main (int argc, char** argv) {
	std::string vinNo = "3A3";
	if (argc == 2)
		vinNo = argv[1];
	else if (argc >= 2)
		return -1;

	Vin vin (vinNo);
	std::cout << vin.getCountry ();
	// std::cout << vin.getMake () << "\n";
	std::cout << "\n";
	return 0;
}
