#include "../vin.h"
#include "us_makes.h"

std::string Vin::us() {
	return "US";
}

USMake::USMake (std::string vin) : Make (vin) {
}

