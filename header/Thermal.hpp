#ifndef _THERMAL_HPP
#define _THERMAL_HPP

#include <iostream>
#include <fstream>
#include <string>

class Thermal {
	public:
		Thermal();
		virtual ~Thermal();
		float getTemp();

	protected:

	private:
		float m_temp;
		std::ifstream in;
};

#endif
