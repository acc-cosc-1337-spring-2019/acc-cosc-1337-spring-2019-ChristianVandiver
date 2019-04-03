#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include"tic_tac_toe_3.h"
#include"tic_tac_toe_4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test first player X") 
{
	TicTacToe* tic_tac_toe = new TicTacToe3();
	tic_tac_toe->start_game("X");

	REQUIRE(tic_tac_toe->get_player() == "X");

	delete tic_tac_toe;

}

TEST_CASE("Test first player O")
{
	TicTacToe* tic_tac_toe = new TicTacToe3();
	tic_tac_toe->start_game("O");

	REQUIRE(tic_tac_toe->get_player() == "O");

	delete tic_tac_toe;

}

TEST_CASE("Test win by first column", "[X wins first column]")
{ /* Tic Tac Toe Board
		123
		456
		789

	   First column win are user positions 1,4, and 7
vector view: 0, 3, and 6
	   */
	TicTacToe* board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//X 
	//X wins 
	REQUIRE(board->game_over() == true);
	
	delete board;
}

TEST_CASE("Test win by second column", "[X wins second column]")
{ /* Tic Tac Toe Board
		123
		456
		789

	   Second column win are user positions 2,5, and 8
vector view: 1, 4, and 7
	   */
	TicTacToe* board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//X 
	//X wins 
	REQUIRE(board->game_over() == true);
	
	delete board;
}

TEST_CASE("Test win by third column", "[X wins third column]")
{ /* Tic Tac Toe Board
		123
		456
		789

	   Third column win are user positions 3,6, and 9
vector view: 2, 5, and 8
	   */
	TicTacToe* board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//X 
	//X wins 
	REQUIRE(board->game_over() == true);
	
	delete board;
}

TEST_CASE("Test win by first row", "[X wins first row]")
{ /* Tic Tac Toe Board
		123
		456
		789

	   First row win are user positions 1,2, and 3
vector view: 0, 1, and 2
	   */
	TicTacToe* board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//X 
	//X wins 
	REQUIRE(board->game_over() == true);

	delete board;
}

TEST_CASE("Test win by second row", "[X wins second row]")
{ /* Tic Tac Toe Board
		123
		456
		789

	   Second row win are user positions 4,5, and 6
vector view: 3, 4, and 5
	   */
	TicTacToe* board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//X 
	//X wins 
	REQUIRE(board->game_over() == true);

	delete board;
}

TEST_CASE("Test win by third row", "[X wins third row]")
{ /* Tic Tac Toe Board
		123
		456
		789

	   Third row win are user positions 4,5, and 6
vector view: 3, 4, and 5
		*/
	TicTacToe* board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//X
	//X wins
	REQUIRE(board->game_over() == true);

	delete board;
}

TEST_CASE("Test win diagonally by top left", "[X wins top left]")
{ /* Tic Tac Toe Board
		123
		456
		789

	   Top left diagonal win are user positions 1,5, and 9
vector view: 0, 4, and 8
	   */
	TicTacToe* board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//X 
	//X wins 
	REQUIRE(board->game_over() == true);

	delete board;
}

TEST_CASE("Test win diagonally from bottom left", "[X wins bottom left]")
{ /* Tic Tac Toe Board
		123
		456
		789

	   Bottom left diagonal win are user positions 3,5, and 7
vector view: 2, 4, and 6
	   */
	TicTacToe* board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//X 
	//X wins 
	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "X");

	delete board;
}

TEST_CASE("Test tie", "[Nobody wins]")
{ /* Tic Tac Toe Board
		123
		456
		789

	   Board full when all spaces are filled and there is no winner
	   */
	TicTacToe* board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//X 
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//X 
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//X 
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//X 
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//X 
	//X wins 
	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "C");

	delete board;
	
}

TEST_CASE("Test win by first column 4", "[X wins first column]")

{ /* Tic Tac Toe Board

			  1  2  3  4

			  5  6  7  8

			  9 10 11 12
			  13 14 15 16



		  First column win are

		  user positions 1,5, 9 and 13

		  */

	TicTacToe* board = new TicTacToe4();

	board->start_game("X");

	REQUIRE(board->game_over() == false);

	board->mark_board(1);//X        

	REQUIRE(board->game_over() == false);

	board->mark_board(2);//O         

	REQUIRE(board->game_over() == false);

	board->mark_board(5);//X         

	REQUIRE(board->game_over() == false);

	board->mark_board(6);//O         

	REQUIRE(board->game_over() == false);

	board->mark_board(9);//X 
	REQUIRE(board->game_over() == false);

	board->mark_board(10);//O
	REQUIRE(board->game_over() == false);

	board->mark_board(13);//X



	//X wins

	REQUIRE(board->game_over() == true);



	delete board;

}

TEST_CASE("Test win by second column 4", "[X wins second column]")

{ /* Tic Tac Toe Board

			  1  2  3  4

			  5  6  7  8

			  9 10 11 12
			  13 14 15 16



		  Second column win are

		  user positions 2,6, 20 and 14

		  */

	TicTacToe* board = new TicTacToe4();

	board->start_game("X");

	REQUIRE(board->game_over() == false);

	board->mark_board(2);//X        

	REQUIRE(board->game_over() == false);

	board->mark_board(3);//O         

	REQUIRE(board->game_over() == false);

	board->mark_board(6);//X         

	REQUIRE(board->game_over() == false);

	board->mark_board(7);//O         

	REQUIRE(board->game_over() == false);

	board->mark_board(10);//X 
	REQUIRE(board->game_over() == false);

	board->mark_board(9);//O
	REQUIRE(board->game_over() == false);

	board->mark_board(14);//X



	//X wins

	REQUIRE(board->game_over() == true);



	delete board;

}

TEST_CASE("Test win by third column 4", "[X wins third column]")

{ /* Tic Tac Toe Board

			  1  2  3  4

			  5  6  7  8

			  9 10 11 12
			  13 14 15 16



		  Third column win are

		  user positions 3,7, 11 and 15

		  */

	TicTacToe* board = new TicTacToe4();

	board->start_game("X");

	REQUIRE(board->game_over() == false);

	board->mark_board(3);//X        

	REQUIRE(board->game_over() == false);

	board->mark_board(2);//O         

	REQUIRE(board->game_over() == false);

	board->mark_board(7);//X         

	REQUIRE(board->game_over() == false);

	board->mark_board(6);//O         

	REQUIRE(board->game_over() == false);

	board->mark_board(11);//X 
	REQUIRE(board->game_over() == false);

	board->mark_board(10);//O
	REQUIRE(board->game_over() == false);

	board->mark_board(15);//X



	//X wins

	REQUIRE(board->game_over() == true);



	delete board;

}

TEST_CASE("Test win by fourth column 4", "[X wins fourth column]")

{ /* Tic Tac Toe Board

			  1  2  3  4

			  5  6  7  8

			  9 10 11 12
			  13 14 15 16



		  Fourth column win are

		  user positions 4,8, 12 and 16

		  */

	TicTacToe* board = new TicTacToe4();

	board->start_game("X");

	REQUIRE(board->game_over() == false);

	board->mark_board(4);//X        

	REQUIRE(board->game_over() == false);

	board->mark_board(2);//O         

	REQUIRE(board->game_over() == false);

	board->mark_board(8);//X         

	REQUIRE(board->game_over() == false);

	board->mark_board(6);//O         

	REQUIRE(board->game_over() == false);

	board->mark_board(12);//X 
	REQUIRE(board->game_over() == false);

	board->mark_board(10);//O
	REQUIRE(board->game_over() == false);

	board->mark_board(16);//X



	//X wins

	REQUIRE(board->game_over() == true);



	delete board;

}

TEST_CASE("Test win by first row 4", "[X wins first row]")

{ /* Tic Tac Toe Board

			  1  2  3  4

			  5  6  7  8

			  9 10 11 12
			  13 14 15 16



		  First row win are

		  user positions 1,2, 3 and 4

		  */

	TicTacToe* board = new TicTacToe4();

	board->start_game("X");

	REQUIRE(board->game_over() == false);

	board->mark_board(1);//X        

	REQUIRE(board->game_over() == false);

	board->mark_board(6);//O         

	REQUIRE(board->game_over() == false);

	board->mark_board(2);//X         

	REQUIRE(board->game_over() == false);

	board->mark_board(7);//O         

	REQUIRE(board->game_over() == false);

	board->mark_board(3);//X 
	REQUIRE(board->game_over() == false);

	board->mark_board(10);//O
	REQUIRE(board->game_over() == false);

	board->mark_board(4);//X



	//X wins

	REQUIRE(board->game_over() == true);



	delete board;

}

TEST_CASE("Test win by second row 4", "[X wins second row]")

{ /* Tic Tac Toe Board

			  1  2  3  4

			  5  6  7  8

			  9 10 11 12
			  13 14 15 16



		  Second row win are

		  user positions 5,6, 7 and 8

		  */

	TicTacToe* board = new TicTacToe4();

	board->start_game("X");

	REQUIRE(board->game_over() == false);

	board->mark_board(5);//X        

	REQUIRE(board->game_over() == false);

	board->mark_board(2);//O         

	REQUIRE(board->game_over() == false);

	board->mark_board(6);//X         

	REQUIRE(board->game_over() == false);

	board->mark_board(1);//O         

	REQUIRE(board->game_over() == false);

	board->mark_board(7);//X 
	REQUIRE(board->game_over() == false);

	board->mark_board(10);//O
	REQUIRE(board->game_over() == false);

	board->mark_board(8);//X



	//X wins

	REQUIRE(board->game_over() == true);



	delete board;

}

TEST_CASE("Test win by third row 4", "[X wins third row]")

{ /* Tic Tac Toe Board

			  1  2  3  4

			  5  6  7  8

			  9 10 11 12
			  13 14 15 16



		  Third row win are

		  user positions 9,10, 11 and 12

		  */

	TicTacToe* board = new TicTacToe4();

	board->start_game("X");

	REQUIRE(board->game_over() == false);

	board->mark_board(9);//X        

	REQUIRE(board->game_over() == false);

	board->mark_board(2);//O         

	REQUIRE(board->game_over() == false);

	board->mark_board(10);//X         

	REQUIRE(board->game_over() == false);

	board->mark_board(6);//O         

	REQUIRE(board->game_over() == false);

	board->mark_board(11);//X 
	REQUIRE(board->game_over() == false);

	board->mark_board(1);//O
	REQUIRE(board->game_over() == false);

	board->mark_board(12);//X



	//X wins

	REQUIRE(board->game_over() == true);



	delete board;

}

TEST_CASE("Test win by fourth row 4", "[X wins fourth row]")

{ /* Tic Tac Toe Board

			  1  2  3  4

			  5  6  7  8

			  9 10 11 12
			  13 14 15 16



		  Fourth row win are

		  user positions 13,14, 15 and 16

		  */

	TicTacToe* board = new TicTacToe4();

	board->start_game("X");

	REQUIRE(board->game_over() == false);

	board->mark_board(13);//X        

	REQUIRE(board->game_over() == false);

	board->mark_board(2);//O         

	REQUIRE(board->game_over() == false);

	board->mark_board(14);//X         

	REQUIRE(board->game_over() == false);

	board->mark_board(6);//O         

	REQUIRE(board->game_over() == false);

	board->mark_board(15);//X 
	REQUIRE(board->game_over() == false);

	board->mark_board(10);//O
	REQUIRE(board->game_over() == false);

	board->mark_board(16);//X



	//X wins

	REQUIRE(board->game_over() == true);



	delete board;

}

TEST_CASE("Test win by top left diagonal", "[X wins top left diagonal]")

{ /* Tic Tac Toe Board

			  1  2  3  4

			  5  6  7  8

			  9 10 11 12
			  13 14 15 16



		  Top left diagonal win are

		  user positions 1,6, 11 and 16

		  */

	TicTacToe* board = new TicTacToe4();

	board->start_game("X");

	REQUIRE(board->game_over() == false);

	board->mark_board(1);//X        

	REQUIRE(board->game_over() == false);

	board->mark_board(2);//O         

	REQUIRE(board->game_over() == false);

	board->mark_board(6);//X         

	REQUIRE(board->game_over() == false);

	board->mark_board(7);//O         

	REQUIRE(board->game_over() == false);

	board->mark_board(11);//X 
	REQUIRE(board->game_over() == false);

	board->mark_board(10);//O
	REQUIRE(board->game_over() == false);

	board->mark_board(16);//X



	//X wins

	REQUIRE(board->game_over() == true);



	delete board;

}

TEST_CASE("Test win by bottom left diagonal 4", "[X wins bottom left diagonal]")

{ /* Tic Tac Toe Board

			  1  2  3  4

			  5  6  7  8

			  9 10 11 12
			  13 14 15 16



		  Bottom left diagonal win are

		  user positions 13,10, 7 and 4

		  */

	TicTacToe* board = new TicTacToe4();

	board->start_game("X");

	REQUIRE(board->game_over() == false);

	board->mark_board(13);//X        

	REQUIRE(board->game_over() == false);

	board->mark_board(2);//O         

	REQUIRE(board->game_over() == false);

	board->mark_board(10);//X         

	REQUIRE(board->game_over() == false);

	board->mark_board(6);//O         

	REQUIRE(board->game_over() == false);

	board->mark_board(7);//X 
	REQUIRE(board->game_over() == false);

	board->mark_board(1);//O
	REQUIRE(board->game_over() == false);

	board->mark_board(4);//X



	//X wins

	REQUIRE(board->game_over() == true);



	delete board;

}