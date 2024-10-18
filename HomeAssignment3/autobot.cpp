/* Author: Timur Rafikov
 * e-mail: st128186@student.spbu.ru
 * Assignment3: Transformers classes
 * 16.10.2024
 */

#include "autobot.hpp"

Autobot::Autobot(const std::string &name, const std::string &color, uint powerOfBlaster):
	Transformer(name),
	_color(color),
	_powerOfBlaster(powerOfBlaster)
{
	std::cout << "Autobot " << name << " has been created!\n";
}


void Autobot::setPowerOfBlaster(uint powerOfBlaster) {
	_powerOfBlaster = powerOfBlaster;
}

void Autobot::setColor(std::string color) {
	_color = color;
}


uint Autobot::getPowerOfBlaster() {
	return _powerOfBlaster;
}

std::string Autobot::getColor() {
	return _color;
}
