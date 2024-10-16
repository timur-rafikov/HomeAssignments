/* Author: Timur Rafikov
 * e-mail: st128186@student.spbu.ru
 * Assignment3: Transformers classes
 * 16.10.2024
 */

#include "decepticon.hpp"

Decepticon::Decepticon(std::string name, uint powerOfBlade, uint lengthOfBlade) {
	_powerOfBlade = powerOfBlade;
	_lengthOfBlade = lengthOfBlade;
	std::cout << "Decepticon " << name << " has been created!\n";
}


void Decepticon::setPowerOfBlade(uint powerOfBlade) {
	_powerOfBlade = powerOfBlade;
}

void Decepticon::setLengthOfBlade(uint lengthOfBlade) {
	_lengthOfBlade = lengthOfBlade;
}


uint Decepticon::getPowerOfBlade() {
	return _powerOfBlade;
}

uint Decepticon::getLengthOfBlade() {
	return _lengthOfBlade;
}