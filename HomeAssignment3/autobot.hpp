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
	Autobot(const std::string &name, const std::string &color, const uint &powerOfBlaster = 0);
	Autobot(const std::string &name);
	Autobot();

	void setPowerOfBlaster(const uint &powerOfBlaster);
	void setColor(const std::string &color);

	uint getPowerOfBlaster();
	std::string getColor();
};

#endif