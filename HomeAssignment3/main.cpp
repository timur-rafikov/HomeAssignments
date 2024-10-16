/* Author: Timur Rafikov
 * e-mail: st128186@student.spbu.ru
 * Assignment3: Transformers classes
 * 16.10.2024
 */

#include "transformer.hpp"
#include "autobot.hpp"

int main() {
	Transformer hero;
	hero.fire();
	hero.jump();
	std::cout << hero.getammo() << '\n';
	hero.setfuel(70);
	std::cout << hero.getfuel() << '\n';
	std::cout << hero.getname() << '\n';

	std::cout << '\n';

	Autobot hero2("Optimus");
	hero2.setPowerOfBlaster(100);
	hero2.setColor("purple");
	std::cout << hero2.getPowerOfBlaster() << '\n';
	std::cout << hero2.getColor() << '\n';
	std::cout << hero2.getname() << '\n';
	hero2.fire(); 

	return 0;
}