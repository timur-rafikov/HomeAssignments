/* Author: Timur Rafikov
 * e-mail: st128186@student.spbu.ru
 * Assignment3: Transformers classes
 * 23.10.2024
 */

#include "blaster.hpp"

Blaster::Blaster(const uint &power, const uint &capacity) :
	_power(power),
	_capacity(capacity)
{}

Blaster::Blaster() :
	Blaster(0, 0)
{}



void Blaster::setPower(const uint &power) {
	_power = power;
}

void Blaster::setCapacity(const uint &capacity) {
	_capacity = capacity;
}


uint Blaster::getPower() const {
	return _power;
}

uint Blaster::getCapacity() const {
	return _capacity;
}