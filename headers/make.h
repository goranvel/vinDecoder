#ifndef _MAKE_H_
#define _MAKE_H_

#include <iostream>
class Make {
public:
	Make ();
	Make (std::string vin);

	std::string getMake ();

//	virtual void decode ();
private:
	std::string m_vin;
	std::string m_make;
};
#endif
