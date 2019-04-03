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
	if(check_column_win() || check_row_win() || check_diagonal_win() || check_board_full())
	{
		set_winner();
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
1, 4, and 7
2, 5, and 8
else
false
*/
bool TicTacToe::check_column_win()
{
	return false;
}
/*
Win by row if 
0, 1, 2 are equal
3,4,5 are equal
6,7,8 are equal
*/
bool TicTacToe::check_row_win()
{
	return false;
}

/*
Win diagonally
0 1 2
3 4 5
6 7 8

*/
bool TicTacToe::check_diagonal_win() 
{
		return false;	
}

void TicTacToe::clear_board()
{
	for (auto& p : pegs)
	{
		p = " ";
	}
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

std::string TicTacToe::get_winner() const
{
	return winner;
}

void TicTacToe::set_winner() 
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

std::ostream & operator<<(std::ostream & out, const TicTacToe & t)
{
	for (std::size_t i = 0; i < 9; i += 3)
	{
		std::cout << t.pegs[i] << "|" << t.pegs[i + 1] << "|" << t.pegs[i + 2] << "\n";
	}

	return out;
}

std::istream & operator>>(std::istream & in, TicTacToe & t)
{
	int position;
	std::cout << "Enter position[1-9]: ";
	in >> position;
	t.mark_board(position);

	return in;
}
