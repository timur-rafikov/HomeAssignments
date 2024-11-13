/* Author: Timur Rafikov
 * e-mail: st128186@student.spbu.ru
 * Assignment3: Transformers classes
 * 23.10.2024
 */

#include "blade.hpp"

Blade::Blade(const uint &sharpness, const uint &length) :
	_sharpness(sharpness),
	_length(length)
{}

Blade::Blade() :
	Blade(0, 0)
{}



void Blade::setSharpness(const uint &sharpness) {
	_sharpness = sharpness;
}

void Blade::setLength(const uint &length) {
	_length = length;
}


uint Blade::getSharpness() {
	return _sharpness;
}

uint Blade::getLength() {
	return _length;
}