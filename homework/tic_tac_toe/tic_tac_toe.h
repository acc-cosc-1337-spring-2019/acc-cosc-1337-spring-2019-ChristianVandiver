#ifndef TICTACTOE_H
#define TICTACTOE_H
#include<string>
#include<vector>

class TicTacToe 
{
public:
	void start_game(std::string first_player);
	std::string get_player() const;
	bool game_over();
	void mark_board(int position);
	void display_board() const;
	std::string get_winner()const;
private:
	std::string next_player;
	std::vector<std::string> pegs{ 9, " " };
	void set_next_player();
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	bool check_board_full();
	void clear_board();
	std::string winner;
	void set_winner(std::string player);
};

#endif //TICTACTOE_H