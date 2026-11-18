// 11/17 last updated still working on it
#include <iostream>

int main()
{
	char playerX = 'X';
	
	int spot;
	
	char board[9] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
	// for loop for game
	for (int i = 0; i < 9; i++) {
	

	std::cout << " " << board[0] << " | " << board[1] << " | " << board[2] << std::endl;
	std::cout << "-----------" << std::endl;
	std::cout << " " << board[3] << " | " << board[4] << " | " << board[5] << std::endl;
	std::cout << "-----------" << std::endl;
	std::cout << " " << board[6] << " | " << board[7] << " | " << board[8] << std::endl;
	
	std::cout << "yo choose a spot " << playerX << std::endl;
	
	std::cin >> spot;
		// we take the spot then minus it by 1 because the array starts at 0
		// and then we take whatever spot is / what they typed and replace it with X
		board[spot - 1] = playerX;

		if (playerX == 'X')
		{
			playerX = 'O';
		}
		else
		{
			playerX = 'X';
		}
		
	system("pause");
	}
	
	
	return 0;
}
