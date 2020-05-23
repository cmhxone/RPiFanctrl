#include <iostream>
#include "Thermal.hpp"
#include "GPIO.hpp"

#define SWITCH 0 // NPN 트랜지스터의 Base

int main(int argc, char* argv[])
{
	Thermal *thermal = new Thermal();
	GPIO *gpio = new GPIO();

	float temp;
	temp = thermal->getTemp();

	if (temp >= 55.0f) {
		gpio->turnOn(SWITCH);
	} else if (temp <= 40.0f) {
		gpio->turnOff(SWITCH);
	}

	return 0;
}
