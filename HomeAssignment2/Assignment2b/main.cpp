/* Author: Timur Rafikov
 * e-mail: st128186@student.spbu.ru
 * Assignment2b: Reverse Polish Notation
 * 09.10.2024
 */


#include <iostream>
#include "revpolnot.hpp"


int main() {
	std::string input;
	std::getline(std::cin, input);
	input = rmspaces(input);
	double result = calc(input);
	std::cout << "RESULT OF CALCULATION: " << result << '\n';
}