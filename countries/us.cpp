#include "../vin.h"
#include "us_make.h"

std::string Vin::us() {
	return "US";
}

USMake::USMake (std::string vin) : Make (vin) {
}

