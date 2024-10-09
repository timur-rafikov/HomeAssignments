#include <fstream>
#include <filesystem>
#include <iostream>

int main() {
	// Reading the binary file
	std::ifstream infile("source", std::ios::binary);
	
	// Output (optional)
	/*
	char c;
	while (infile >> c) {
		std::cout << (int)c << '\n';
	}
	std::cout << '\n';
	*/

	// Saving the file size
	std::size_t fsize = std::filesystem::file_size("source");
	std::cout << "Size of binary file: " << fsize << "\n\n";

	// Declaring an array and writing
	int *arr = new int[fsize];
	char c;
	for (char i = 0, c = 0; infile >> c; i++) {
		arr[i] = (int)c;
	}

	// Check array in output
	for (int i = 0; i < fsize; ++i) {
		std::cout << arr[i] << '\n';
	}

	return 0;
}