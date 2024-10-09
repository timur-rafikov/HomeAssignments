#include <fstream>
#include <iostream>

int main() {
	std::ifstream infile("source.txt", std::ios::binary);
	//infile.open("source.txt", std::ios::binary | std::ios::in);

	std::string s;
	while (infile >> s)
		std::cout << s << ' ';
	std::cout << '\n';

	return 0;
}