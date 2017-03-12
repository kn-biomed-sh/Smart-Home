#include <wiringPi.h>
#include <softPwm.h>
#include "Raspberry.h"

void init()
{
	wiringPiSetup();
	pinMode(0, OUTPUT);
	pinMode(1, OUTPUT);
	
	softPwmCreate(0, 0, 10);
	softPwmCreate(1, 0, 10);

	digitalWrite(0, LOW);
	digitalWrite(1, LOW);

}

void Led(signed char PWM_value)
{
	softPwmWrite(0, 0);
	softPwmWrite(1, PWM_value);
	delay(1000);
}

int main()
{
	init();
	Led(10);
	return 0;
}
