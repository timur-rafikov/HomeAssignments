/* Author: Timur Rafikov
 * e-mail: st128186@student.spbu.ru
 * Assignment3: Transformers classes
 * 16.10.2024
 */

#include "minicon.hpp"

Minicon::Minicon(std::string name, uint energy, uint size) {
	setname(name);
	_energy = energy;
	_size = size;
	std::cout << "Minicon " << name << " has been created!\n";
}


void Minicon::setEnergy(uint energy) {
	_energy = energy;
}

void Minicon::setSize(uint size) {
	_size = size;
}


uint Minicon::getEnergy() {
	return _energy;
}

uint Minicon::getSize() {
	return _size;
}