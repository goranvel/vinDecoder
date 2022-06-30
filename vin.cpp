#include "vin.h"
#include "make.h"
#include "countries/us_makes.h"

Vin::Vin (const std::string &v) :
	m_vin (v)
{
}

std::string Vin::getCountry ()
{
	char first	= m_vin[0];
	char second = m_vin[1];

	switch (first) {
		case '1':
		case '4':
		case '5':
			return "US";
		case '2':
			return "Canada";
		case '3':
			if (second > 'A' && second < 'X')
				return "Mexico";
		case 'K':
			if (second > 'L' && second < 'R')
				return "South Korea";
		case 'W':
			return "Germany";
		case 'J':
			return "Japan";
		default:
			throw std::runtime_error ("Unknown country");
	}
}

std::string Vin::getMake ()
{
	char first	= m_vin[0];
	char second = m_vin[1];

	Make make(m_vin);

	switch (first) {
		case '1':
		case '4':
		case '5':
			return us ();
			make = USMake(m_vin);
			break;
//		case '2':
//			return canada ();
//			break;
		case '3':
			if (second >= 'A' && second <= 'X')
				return mexico ();
			break;
//		case 'K':
//			if (second > 'L' && second < 'R')
//				return southKorea ();
//			break;
//		case 'J':
//			return japan ();
//			break;
//		case 'W':
//			return germany ();
//			break;
		default:
			throw std::runtime_error ("Unknown country");
	}

	return "";
}
