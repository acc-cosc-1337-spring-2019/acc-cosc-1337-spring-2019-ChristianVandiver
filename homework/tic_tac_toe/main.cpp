#include "tic_tac_toe_manager.h"
#include <string>
#include <iostream>
#include"tic_tac_toe_3.h"
#include"tic_tac_toe_4.h"
using std::cout; using std::cin;


int main() 
{
	std::string first;
	char choice;
	int position;
	TicTacToeManager manager;

	do 
	{
		int matrix_Choice;
		TicTacToe* tic_tac_toe;

		cout << "Would you like to play tictactoe with a 3x3 or 4x4 matrix(type 3 or 4):";
		cin >> matrix_Choice;
		if (matrix_Choice == 3)
		{
			tic_tac_toe = new TicTacToe3();
		}
		else if (matrix_Choice == 4)
		{
			tic_tac_toe = new TicTacToe4();
		}
		cout << "First player: ";
		cin >> first;
		tic_tac_toe->start_game(first);

		while (tic_tac_toe->game_over() == false) 
		{
			cin >> *tic_tac_toe;
			cout << *tic_tac_toe;
			cout << "\n\n";
		}

		cout<<"Winner: " << tic_tac_toe->get_winner();

		manager.save_game(*tic_tac_toe);

		cout << "play again";
		cin >> choice;

	} while (choice == 'y');

	cout<<manager;

	return 0;
}