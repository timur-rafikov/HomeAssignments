/* Author: Timur Rafikov
 * e-mail: st128186@student.spbu.ru
 * Assignment3: Transformers classes
 * 16.10.2024
 */

#include "decepticon.hpp"

Decepticon::Decepticon(const std::string &name, const uint &powerOfBlade, const uint &lengthOfBlade) :
	Transformer(name),	
	_powerOfBlade(powerOfBlade),
	_lengthOfBlade(lengthOfBlade)
{
	std::cout << "Decepticon " << name << " has been created!\n";
}

Decepticon::Decepticon(const std::string &name) :
	Decepticon(name, 0, 0)
{}

Decepticon::Decepticon() :
	Decepticon("Untitled", 0, 0)
{}


void Decepticon::setPowerOfBlade(const uint &powerOfBlade) {
	_powerOfBlade = powerOfBlade;
}

void Decepticon::setLengthOfBlade(const uint &lengthOfBlade) {
	_lengthOfBlade = lengthOfBlade;
}


uint Decepticon::getPowerOfBlade() {
	return _powerOfBlade;
}

uint Decepticon::getLengthOfBlade() {
	return _lengthOfBlade;
}