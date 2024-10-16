/* Author: Timur Rafikov
 * e-mail: st128186@student.spbu.ru
 * Assignment3: Transformers classes
 * 16.10.2024
 */

#ifndef DECEPTICON
#define DECEPTICON

#include "transformer.hpp"

class Decepticon: public Transformer {
private:
	uint _powerOfBlade;
	uint _lengthOfBlade;
public:
	Decepticon(std::string name = "Unknown", uint powerOfBlade = 0, uint lengthOfBlade = 20);

	void setPowerOfBlade(uint powerOfBlade);
	void setLengthOfBlade(uint lengthOfBlade);

	uint getPowerOfBlade();
	uint getLengthOfBlade();
};

#endif