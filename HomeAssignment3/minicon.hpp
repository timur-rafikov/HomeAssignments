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
	Minicon(std::string name = "Unknown", uint energy = 0, uint size = 160);

	void setEnergy(uint energy);
	void setSize(uint size);

	uint getEnergy();
	uint getSize();
};

#endif