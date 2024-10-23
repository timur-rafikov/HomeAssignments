/* Author: Timur Rafikov
 * e-mail: st128186@student.spbu.ru
 * Assignment3: Transformers classes
 * 23.10.2024
 */

#ifndef BLASTER
#define BLASTER

#include <iostream>

class Blaster {
private:
	uint _power;
	uint _capacity;
public:
	Blaster(const uint &power, const uint &capacity);
	Blaster();

	void setPower(const uint &power);
	void setCapacity(const uint &capacity);

	uint getPower();
	uint getCapacity();
};



#endif