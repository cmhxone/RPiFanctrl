#ifndef _GPIO_HPP
#define _GPIO_HPP

#include <wiringPi.h>
#include <iostream>

class GPIO {
	public:
		GPIO();
		virtual ~GPIO();
		bool turnOn(int pin);
		bool turnOff(int pin);

	protected:
	private:
};

#endif
