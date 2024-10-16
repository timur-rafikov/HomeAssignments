/* Author: Timur Rafikov
 * e-mail: st128186@student.spbu.ru
 * Assignment3: Transformers classes
 * 16.10.2024
 */

#include "transformer.hpp"
#include "autobot.hpp"
#include "decepticon.hpp"
#include "minicon.hpp"

int main() {
	Transformer hero;
	hero.fire();
	hero.jump();
	hero.setfuel(70);	
	std::cout << hero.getammo() << '\n';
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

	std::cout << '\n';

	Decepticon enemy;
	enemy.setname("Enemy");
	enemy.fire();
	enemy.jump();
	enemy.setLengthOfBlade(20);
	enemy.setPowerOfBlade(300);
	std::cout << enemy.getname() << '\n';
	std::cout << enemy.getPowerOfBlade() << '\n';
	std::cout << enemy.getLengthOfBlade() << '\n';

	std::cout << '\n';

	Minicon builder("Barak");
	builder.setSize(100);
	builder.setEnergy(1000);
	std::cout << builder.getname() << '\n';
	std::cout << builder.getEnergy() << '\n';


	std::cout << '\n';

	return 0;
}