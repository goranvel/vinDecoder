#include "make.h"

Make::Make () {
}

Make::Make (std::string v) : m_vin (v) {
}

std::string Make::getMake () {
	return m_make;
}
