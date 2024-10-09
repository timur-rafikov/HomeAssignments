/* Author: Timur Rafikov
 * e-mail: st128186@student.spbu.ru
 * Assignment2b: Reverse Polish Notation
 * 09.10.2024
 */


#include <iostream>
#include "revpolnot.hpp"

int main() {
	std::string input;
	input = rmspaces(input);
	int result = calc(input);
	std::cout << result;
}