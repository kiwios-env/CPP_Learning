#include <iostream>

/**
 * @brief The main function of the program that prompts the user for their name.
 * 
 * @param argc The number of command line arguments.
 * @param argv The command line arguments.
 */
int main(int argc, char **argv) {
	std::string name;
	std::cout << "Hello, what is your name? ";
	std::cin >> name;
	std::cout << "Hello, " << name << " and The World!" << std::endl;
	return 0;
}
