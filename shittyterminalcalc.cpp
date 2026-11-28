// calculator in terminal only has * + - /
// practice for if statements

#include <iostream>
#include <string>
#include <chrono>



int main() {
	std::string expression;

	std::cout << "Welcome to the calculator!" << std::endl;
	std::cout << "enter the expression you want to calculate: " << std::endl;
	std::cout << "+ for addition" << std::endl;
	std::cout << "- for subtraction" << std::endl;
	std::cout << "* for multiplication" << std::endl;
	std::cout << "/ for division" << std::endl;
	std::cout << "type 'exit' to exit the calculator" << std::endl;



	std::cin >> expression;

	if (expression == "exit") {
		std::cout << "Exiting the calculator..." << std::endl;
		return 0;
	}

	if (expression == "+") {
		std::cout << "Enter the first number: ";
		double num1;
		std::cin >> num1;
		std::cout << "Enter the second number: ";
		double num2;
		std::cin >> num2;
		std::cout << "Result: " << num1 + num2 << std::endl;
	}
	else if (expression == "-") {
		std::cout << "Enter the first number: ";
		double num1;
		std::cin >> num1;
		std::cout << "Enter the second number: ";
		double num2;
		std::cin >> num2;
		std::cout << "Result: " << num1 - num2 << std::endl;
	}
	else if (expression == "*") {
		std::cout << "Enter the first number: ";
		double num1;
		std::cin >> num1;
		std::cout << "Enter the second number: ";
		double num2;
		std::cin >> num2;
		std::cout << "Result: " << num1 * num2 << std::endl;
	}
	else if (expression == "/") {
		std::cout << "Enter the first number: ";
		double num1;
		std::cin >> num1;
		std::cout << "Enter the second number: ";
		double num2;
		std::cin >> num2;

		if (num2 == 0) {
			std::cout << "Error: Division by zero!" << std::endl;
			return 0;
		}

		std::cout << "Result: " << num1 / num2 << std::endl;

		system("pause");

		return 0;
	}
}
