// finished 11/19/26
#include <iostream>

int main()
{
    char playerX = 'X';
    int spot;
    char board[9] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
    bool gameOver = false;

    for (int i = 0; i < 9; i++) {
        std::cout << " " << board[0] << " | " << board[1] << " | " << board[2] << std::endl;
        std::cout << "-----------" << std::endl;
        std::cout << " " << board[3] << " | " << board[4] << " | " << board[5] << std::endl;
        std::cout << "-----------" << std::endl;
        std::cout << " " << board[6] << " | " << board[7] << " | " << board[8] << std::endl;

        std::cout << "yo choose a spot " << playerX << std::endl;
        std::cin >> spot;

        board[spot - 1] = playerX;

        if ((board[0] == playerX && board[1] == playerX && board[2] == playerX) ||
            (board[3] == playerX && board[4] == playerX && board[5] == playerX) ||
            (board[6] == playerX && board[7] == playerX && board[8] == playerX) ||
            (board[0] == playerX && board[3] == playerX && board[6] == playerX) ||
            (board[1] == playerX && board[4] == playerX && board[7] == playerX) ||
            (board[2] == playerX && board[5] == playerX && board[8] == playerX) ||
            (board[0] == playerX && board[4] == playerX && board[8] == playerX) ||
            (board[2] == playerX && board[4] == playerX && board[6] == playerX))
        {
            std::cout << " " << board[0] << " | " << board[1] << " | " << board[2] << std::endl;
            std::cout << "-----------" << std::endl;
            std::cout << " " << board[3] << " | " << board[4] << " | " << board[5] << std::endl;
            std::cout << "-----------" << std::endl;
            std::cout << " " << board[6] << " | " << board[7] << " | " << board[8] << std::endl;
            std::cout << playerX << " has won!" << std::endl;
            gameOver = true;
            break;
        }

        if (playerX == 'X') { playerX = 'O'; }
        else { playerX = 'X'; }
    }

    if (!gameOver) { std::cout << "its a tie!" << std::endl; }

    system("pause");
    return 0;
}
