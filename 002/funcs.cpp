#include <iostream>

/**
 * @brief This file contains basic functions for programming practice.
 * 
 * @file funcs.cpp
 * 
 * @author Kiwi
 * 
 * @date 2026-09-10 
 * 
 */

/**
 * @brief Adds two integers
 * 
 * @param x The first number
 * @param y The second number
 * @return The sum of x and y
 */
int addition(int x, int y);

/**
 * @brief Subtracts two integers
 * 
 * @param x The first number
 * @param y The second number
 * @return The difference of x and y
 */
int subtraction(int x, int y);

/**
 * @brief Multiplies two integers 
 * 
 * @param x The first number
 * @param y The second number
 * @return The product of x and y
 */
int multiplication(int x, int y);

/**
 * @brief Divides two integers
 * 
 * @param x The first number
 * @param y The second number
 * @return The quotient of x and y
 */
int division(int x, int y);

int main() {
	int choice;
	std::cout << "Choose from 1-4, otherwise, randomly enter a number to exit the program: ";
	std::cin >> choice;
	while (choice >= 1 && choice <= 4) {
		std::cout << "Enter two numbers: " << std::endl;
		int x{0}, y{0};
		std::cout << "x: ";
		std::cin >> x;
		std::cout << "y: ";
		std::cin >> y;
		if (choice == 1) {

			std::cout << addition(x, y) << std::endl;
		} else if (choice == 2) {
			std::cout << subtraction(x, y) << std::endl;
		} else if (choice == 3) {
			std::cout << multiplication(x, y) << std::endl;
		} else if (choice == 4) {
			std::cout << division(x, y) << std::endl;
		}
		std::cout << "Choose from 1-4, otherwise, randomly enter a number to exit the program: ";
		std::cin >> choice;
	}
	return 0;
}

int addition(int x, int y) {
	return x + y;
}

int subtraction(int x, int y) {
	return x - y;
}

int multiplication(int x, int y) {
	return x * y;
}

int division(int x, int y) {
	return x / y;
}
