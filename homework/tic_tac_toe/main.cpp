#include"tic_tac_toe.h"
#include<iostream>
#include<vector>
#include<string>

int main() 
{
	TicTacToe tictactoe;
	std::string decider = "y";
	do
	{
		std::string set_first_player;
		std::cout << "Choose if X or O goes first:";
		std::cin >> set_first_player;
		tictactoe.start_game(set_first_player);

		if (set_first_player == "x" || set_first_player == "X" || set_first_player == "o" || set_first_player == "O")
		{
			do
			{
				int position;
				tictactoe.display_board();
				std::cout << "Enter a position 1-9:";
				std::cin >> position;
				std::cout << "\n";
				tictactoe.mark_board(position);
				tictactoe.game_over();
			} while (tictactoe.game_over() == false);
		}
		tictactoe.display_board();
		std::cout << "Winner" << "\n";
		std::cout << "Do you want to play again? y or n:";
		std::cin >> decider;
	} while (decider == "y" || decider == "Y");

	return 0;
}