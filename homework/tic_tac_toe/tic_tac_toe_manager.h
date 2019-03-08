#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
#include<string>
#include<vector>
#include"tic_tac_toe.h"
//Write class interface here
class TicTacToeManager
{
public:
	void save_game(const TicTacToe game);
	void display_history()const;
private:
	void update_winner_count(std::string winner);
	std::vector<TicTacToe> games;

	int x_win{ 0 }, o_win{ 0 }, ties{ 0 };
	
};

#endif // !TIC_TAC_TOE_MANAGER_H
