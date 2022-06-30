#ifndef _VIN_H_
#define _VIN_H_

// #include "getCountry.h"
// #include "getMake.h"

#include <iostream>

class Vin {
public:
	Vin	(const std::string& vin);

	std::string getCountry	();
	std::string getMake		();

	/// \todo decode manufacturer's VIN

	std::string us		();
	std::string canada	();
	std::string germany	();
	std::string japan	();
	std::string mexico	();
	std::string southKorea	();
private:
	std::string m_vin;
};

#endif
