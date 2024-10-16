/* Author: Timur Rafikov
 * e-mail: st128186@student.spbu.ru
 * Assignment3: Transformers classes
 * 16.10.2024
 */

#include "transformer.hpp"

int main() {
	Transformer hero("Optimus", 10, 100, 100, 100);
	hero.fire();
	hero.jump();
	std::cout << hero.getammo() << '\n';
	hero.setfuel(70);
	std::cout << hero.getfuel() << '\n';
	std::cout << hero.getname() << '\n';

	return 0;
}