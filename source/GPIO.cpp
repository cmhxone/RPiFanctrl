#include "GPIO.hpp"

GPIO::GPIO() {
	try {
		wiringPiSetup();
	} catch (std::exception e) {
		std::cerr << e.what() << std::endl;
		exit(1);
	}
}

GPIO::~GPIO() {

}

bool GPIO::turnOn(int pin) {
	bool result = false;

	try {
		pinMode(pin, OUTPUT);
		digitalWrite(pin, 1);
		result = true;
	} catch(std::exception e) {
		std::cerr << e.what() << std::endl;
		exit(1);
	}

	return result;
}

bool GPIO::turnOff(int pin) {
	bool result = false;

	try {
		pinMode(pin, OUTPUT);
		digitalWrite(pin, 0);
		result = false;
	} catch(std::exception e) {
		std::cerr << e.what() << std::endl;
		exit(1);
	}

	return result;
}
