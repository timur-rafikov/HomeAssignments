/* Author: Timur Rafikov
 * e-mail: st128186@student.spbu.ru
 * Assignment3: Transformers classes
 * 16.10.2024
 */

#ifndef AUTOBOT
#define AUTOBOT

#include "transformer.hpp"

class Autobot: public Transformer {
private:
	std::string _color;
	uint _powerOfBlaster;
public:
	Autobot(const std::string &name = "Unknown", const std::string &color = "Unknown", uint powerOfBlaster = 0);

	void setPowerOfBlaster(uint powerOfBlaster);
	void setColor(std::string color);

	uint getPowerOfBlaster();
	std::string getColor();
};

#endif
