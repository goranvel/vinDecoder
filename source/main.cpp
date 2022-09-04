#include <iostream>

#include "vin.h"

int main (void) {
	std::string vinNo = "3A3";

	Vin vin (vinNo);
	// std::cout << vin.getCountry ();
	std::cout << vin.getMake () << "\n";
	return 0;
}
