#include "tic_tac_toe.h"
#include<iostream>

void TicTacToe::start_game(std::string first_player)
{
	next_player = first_player;
	clear_board();
}

std::string TicTacToe::get_player() const
{
	return next_player;
}

bool TicTacToe::game_over()
{
	if (check_column_win()|| check_row_win() ||check_diagonal_win() ||
	    check_board_full()) 
	{
		set_winner(next_player);
		return true;
	}

	return false;
}

void TicTacToe::mark_board(int position)
{
	pegs[position - 1] = next_player;
	
	if (!game_over())
	{
		set_next_player();
	}
}

void TicTacToe::set_next_player()
{
	if (next_player == "X")
	{
		next_player = "O";
	}
	else
	{
		next_player = "X";
	}
}


/*
Win by column if and return true if
0,3, and 6 are equal
1,4, and 7 are equal
2,5, and 8 are equal
else
false
*/
bool TicTacToe::check_column_win()
{
	for (std::size_t i = 0; i < 3; ++i)
	{
		if (pegs[i] == pegs[i + 3] && pegs[i + 3] == pegs[i + 6] && pegs[i + 6] != " ")
		{
			return true;
		}
	}
	return false;
}

bool TicTacToe::check_row_win()
{
	if (pegs[0] == pegs[1] && pegs[1] == pegs[2] && pegs[2] != " ")
	{
		return true;
	}
	else
		if (pegs[3] == pegs[4] && pegs[4] == pegs[5] && pegs[5] != " ")
		{
			return true;
		}
		else
			if (pegs[6] == pegs[7] && pegs[7] == pegs[8] && pegs[8] != " ")
			{
				return true;
			}
	return false;
}

/*
Win by diagonal if and return true if
0,4, and 8 are equal
2,4, and 6 are equal
else
false
*/

bool TicTacToe::check_diagonal_win()
{
	if (pegs[0] == pegs[4] && pegs[4] == pegs[8] && pegs[8] != " ")
	{
		return true;
	}
	else
		if (pegs[2] == pegs[4] && pegs[4] == pegs[6] && pegs[6] != " ")
		{
			return true;
		}
	return false;		
}

bool TicTacToe::check_board_full()
{
	for (auto p : pegs) 
	{
		if (p == " ") 
		{
			return false;
		}
	}

	return true;
}

void TicTacToe::display_board() const
{
	for (std::size_t i = 0; i <= pegs.size() - 1; ++i)
	{
		std::cout << " " << pegs[i] << "|";
		if (i == 2 || i == 5)
		{
			std::cout << "\n";
		}
	}
	std::cout << "\n";
	
}

std::string TicTacToe::get_winner() const
{
	return winner;
}

void TicTacToe::clear_board()
{
	for (std::size_t i = 0; i <= pegs.size() - 1; ++i)
	{
		pegs[i] = " ";
	}
}

void TicTacToe::set_winner(std::string player)
{
	if (check_board_full())
	{
		winner = "C";
	}
	else
	{
		winner = next_player;
	}
}