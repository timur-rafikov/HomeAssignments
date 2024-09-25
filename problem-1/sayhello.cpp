/* Timur Rafikov | st128186@student.spbu.ru
 * Hello, world! V. 2.0 Project
 * 16.09.24
 */

#include "sayhello.hpp"
#include <iostream>

void hello(std::string& s) {
	std::cout << "Hello, " << s << '\n';
}

void sayhello() {
	std::cout << "Hello, world!\n";

	std::string s;
	while (std::cin >> s)
		hello(s);	
}
