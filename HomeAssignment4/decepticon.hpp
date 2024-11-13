/* Author: Timur Rafikov
 * e-mail: st128186@student.spbu.ru
 * Assignment3: Transformers classes
 * 16.10.2024
 */

#ifndef DECEPTICON
#define DECEPTICON

#include "transformer.hpp"
#include "blade.hpp"

class Decepticon: public Transformer {
private:
	Blade _sword;
public:
	Decepticon(const std::string &name, const uint &sharpnessOfBlade, const uint &lengthOfBlade);
	Decepticon(const std::string &name);
	Decepticon();

	void setSharpnessOfBlade(const uint &sharpnessOfBlade);
	void setLengthOfBlade(const uint &lengthOfBlade);

	uint getSharpnessOfBlade() const;
	uint getLengthOfBlade() const;
};

std::ostream& operator<<(std::ostream& os, const Decepticon& dec);

#endif