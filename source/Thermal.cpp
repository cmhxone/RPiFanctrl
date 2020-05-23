#include "Thermal.hpp"

Thermal::Thermal() {
	try {
		in.open("/sys/devices/virtual/thermal/thermal_zone0/temp");
	} catch (std::exception e) {
		std::cerr << e.what() << std::endl;
		exit(1);
	}

	m_temp = 0.000f;
}

Thermal::~Thermal() {
	in.close();
}

float Thermal::getTemp() {
	std::string in_line;

	try {
		getline(in, in_line);
		m_temp = atoi(in_line.c_str()) * 0.001f;
	} catch (std::exception e) {
		std::cerr << e.what() << std::endl;
		exit(1);
	}

	return m_temp;
}
