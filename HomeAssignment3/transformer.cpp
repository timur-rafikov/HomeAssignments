/* Author: Timur Rafikov
 * e-mail: st128186@student.spbu.ru
 * Assignment3: Transformers classes
 * 16.10.2024
 */

#include "transformer.hpp"

Transformer::Transformer(std::string name, uint level, uint strength, uint fuel, uint ammo) {
	_name = name;
	_level = level;
	_strength = strength;
	_fuel = fuel;
	_ammo = ammo;
	std::cout << "Transformer " << name << " has been created!\n";
}

Transformer::~Transformer() {
	std::cout << "Transformer " << _name << " has been eliminated\n";
}



void Transformer::setname(std::string name) {
	_name = name;
}

void Transformer::setlevel(uint level) {
	_level = level;
}

void Transformer::setstrength(uint strength) {
	_strength = strength;
}

void Transformer::setfuel(uint fuel) {
	_fuel = fuel;
}

void Transformer::setammo(uint ammo) {
	_ammo = ammo;
}



std::string Transformer::getname() {
	return _name;
}

uint Transformer::getlevel() {
	return _level;
}

uint Transformer::getstrength() {
	return _strength;
}

uint Transformer::getfuel() {
	return _fuel;
}

uint Transformer::getammo() {
	return _ammo;
}



void Transformer::fire() {
	return;
}

void Transformer::move() {
	return;
}

void Transformer::jump() {
	return;
}