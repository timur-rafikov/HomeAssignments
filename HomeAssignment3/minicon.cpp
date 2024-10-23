/* Author: Timur Rafikov
 * e-mail: st128186@student.spbu.ru
 * Assignment3: Transformers classes
 * 16.10.2024
 */

#include "minicon.hpp"

Minicon::Minicon(const std::string &name, const uint &energy, const uint &size) :
	Transformer(name),
	_energy(energy),
	_size(size)	
{
	std::cout << "Minicon " << name << " has been created!\n";
}

Minicon::Minicon(const std::string &name) :
	Minicon(name, 0, 0)
{}

Minicon::Minicon() :
	Minicon("Untitled", 0, 0)
{}



void Minicon::setEnergy(const uint &energy) {
	_energy = energy;
}

void Minicon::setSize(const uint &size) {
	_size = size;
}


uint Minicon::getEnergy() {
	return _energy;
}

uint Minicon::getSize() {
	return _size;
}