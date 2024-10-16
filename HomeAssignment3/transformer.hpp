/* Author: Timur Rafikov
 * e-mail: st128186@student.spbu.ru
 * Assignment3: Transformers classes
 * 16.10.2024
 */

#ifndef TRANSFORMER
#define TRANSFORMER

#include <iostream>
#include <string>

class Transformer {
private:
	std::string _name;
	uint _level;
	uint _strength;
	uint _fuel;
	uint _ammo;
public:
	Transformer(std::string name = "Untitled", uint level = 0, uint strength = 0, uint fuel = 0, uint ammo = 0);
	~Transformer();

	void setname(std::string name);
	void setlevel(uint level);
	void setstrength(uint strength);
	void setfuel(uint fuel);
	void setammo(uint ammo);

	std::string getname();
	uint getlevel();
	uint getstrength();
	uint getfuel();
	uint getammo();

	void fire();
	void move();
	void jump();
};

#endif