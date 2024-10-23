/* Author: Timur Rafikov
 * e-mail: st128186@student.spbu.ru
 * Assignment3: Transformers classes
 * 16.10.2024
 */

#ifndef MINICON
#define MINICON

#include "transformer.hpp"

class Minicon: public Transformer {
private:
	uint _energy;
	uint _size;
public:
	Minicon(const std::string &name, const uint &energy, const uint &size);
	Minicon(const std::string &name);
	Minicon();

	void setEnergy(const uint &energy);
	void setSize(const uint &size);

	uint getEnergy();
	uint getSize();
};

#endif