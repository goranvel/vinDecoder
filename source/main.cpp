#include <iostream>

#include "vin.h"

int main (int argc, char** argv) {
	std::string vinNo = argv[1];

	Vin vin (vinNo);
	std::cout << vin.getCountry ();
	// std::cout << vin.getMake () << "\n";
	return 0;
}
