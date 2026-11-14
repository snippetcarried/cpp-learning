#include <iostream>
using std::cout;

int main() {
	
	
	int number;
	std::cout << "type the number" << std::endl;
	std::cin >> number;

	for (int i = 0; i < number; i++) {
		if (i % 2 == 0)
		{
			std::cout << i << " ";
		}
		}
	return 0;
	}
