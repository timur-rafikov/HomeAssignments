/* Author: Timur Rafikov
 * e-mail: st128186@student.spbu.ru
 * Assignment3: Transformers classes
 * 23.10.2024
 */

#ifndef INSTR
#define INSTR

#include <iostream>

class Instrument {
private:
	uint _endurance;
	uint _effect;
public:
	Instrument(const uint &endurance, const uint &effect);
	Instrument();

	void use();

	void setEndurance(const uint &setEndurance);
	void setEffect(const uint &effect);

	uint getEndurance();
	uint getEffect();
};


#endif