#include "tic_tac_toe.h"

void TicTacToe::start_game(std::string first_player)
{
	next_player = first_player;
}

std::string TicTacToe::get_player() const
{
	return next_player;
}

bool TicTacToe::game_over()
{
	if (check_column_win())
	{
		return true;
	}

	return false;
}

void TicTacToe::mark_board(int position)
{
	pegs[position - 1] = next_player;
	set_next_player();
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
