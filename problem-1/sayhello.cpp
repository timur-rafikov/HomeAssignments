/* Timur Rafikov | st128186@student.spbu.ru
 * Hello, world! V. 2.0 Project
 * 16.09.24
 */

#include "sayhello.hpp"
#include <iostream>

void sayhello() {
	std::cout << "Hello, world!\n";

	std::string s;
	while (std::cin >> s)
		std::cout << "Hello, " << s << '\n';
}
