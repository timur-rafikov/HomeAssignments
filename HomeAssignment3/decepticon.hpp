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
	Decepticon(const std::string &name, const uint &powerOfBlade, const uint &lengthOfBlade);
	Decepticon(const std::string &name);
	Decepticon();

	void setPowerOfBlade(const uint &powerOfBlade);
	void setLengthOfBlade(const uint &lengthOfBlade);

	uint getPowerOfBlade();
	uint getLengthOfBlade();
};

#endif