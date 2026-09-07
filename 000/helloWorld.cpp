#include <iostream>

int main(int argc, char *argv[]) {
	std::string name;
	std::cout << "Hello, what is your name? ";
	std::cin >> name;
	std::cout << "Hello, " << name << " and The World!" << std::endl;
	return 0;
}
