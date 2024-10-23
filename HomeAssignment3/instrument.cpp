/* Author: Timur Rafikov
 * e-mail: st128186@student.spbu.ru
 * Assignment3: Transformers classes
 * 23.10.2024
 */

#include "instrument.hpp"


Instrument::Instrument(const uint &endurance, const uint &effect) :
	_endurance(endurance),
	_effect(effect)
{}

Instrument::Instrument() :
	Instrument(0, 0)
{}


void Instrument::use() {
	std::cout << "Instrument has been used\n";
}


void Instrument::setEndurance(const uint &endurance) {
	_endurance = endurance;
}

void Instrument::setEffect(const uint &effect) {
	_effect = effect;
}

uint Instrument::getEndurance() {
	return _endurance;
}

uint Instrument::getEffect() {
	return _effect;
}