#include <iostream>
#include <ctime>
#include <cstdlib>


int main() {
    std::srand(std::time(0));                    
    int secret = std::rand() % 100 + 1;    
    int guess;
    int attempts = 0;

    std::cout << "Guess a number between 1 and 100!" << std::endl;

	while (true) {
		std::cin >> guess;
		attempts++;
		if (guess < secret) {
			std::cout << "Too low! Try again." << std::endl;
		}
		else if (guess > secret) {
			std::cout << "Too high! Try again." << std::endl;
		}
		else {
			std::cout << "Congratulations! You've guessed the number in " << attempts << " attempts." << std::endl;
			break;
		}
	}

    return 0;
}
