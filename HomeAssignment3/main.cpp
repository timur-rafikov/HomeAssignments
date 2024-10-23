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
	hero.setFuel(70);	
	std::cout << hero.getAmmo() << '\n';
	std::cout << hero.getFuel() << '\n';
	std::cout << hero.getName() << '\n';

	std::cout << '\n';

	Autobot hero2("Optimus");
	hero2.setPowerOfBlaster(100);
	hero2.setColor("purple");
	std::cout << hero2.getPowerOfBlaster() << '\n';
	std::cout << hero2.getColor() << '\n';
	std::cout << hero2.getName() << '\n';
	hero2.fire(); 

	std::cout << '\n';

	Decepticon enemy;
	enemy.setName("Enemy");
	enemy.fire();
	enemy.jump();
	enemy.setLengthOfBlade(20);
	enemy.setSharpnessOfBlade(300);
	std::cout << enemy.getName() << '\n';
	std::cout << enemy.getSharpnessOfBlade() << '\n';
	std::cout << enemy.getLengthOfBlade() << '\n';

	std::cout << '\n';

	Minicon builder("Barak");
	builder.setSize(100);
	builder.setEnergy(1000);
	std::cout << builder.getName() << '\n';
	std::cout << builder.getEnergy() << '\n';


	std::cout << '\n';

	return 0;
}