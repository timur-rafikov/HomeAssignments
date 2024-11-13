/* Author: Timur Rafikov
 * e-mail: st128186@student.spbu.ru
 * Assignment3: Transformers classes
 * 16.10.2024
 */

#ifndef AUTOBOT
#define AUTOBOT

#include "transformer.hpp"
#include "blaster.hpp"

class Autobot: public Transformer {
private:
	std::string _color;
	Blaster _weapon;
public:
	Autobot(const std::string &name, const std::string &color, const uint &powerOfBlaster, const uint &capacityOfBlaster);
	Autobot(const std::string &name);
	Autobot();

	bool operator<(const Autobot& other) const;
	bool operator>(const Autobot& other) const;

	void setPowerOfBlaster(const uint &powerOfBlaster);
	void setCapacityOfBlaster(const uint &capacityOfBlaster);
	void setColor(const std::string &color);

	uint getPowerOfBlaster() const;
	uint getCapacityOfBlaster() const;
	std::string getColor() const;
};

std::ostream& operator<<(std::ostream& os, const Autobot& atbot);

#endif