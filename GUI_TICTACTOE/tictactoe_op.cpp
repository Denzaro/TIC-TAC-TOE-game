#include "tictactoe_op.h"

bool Rules::CheckWin()
{
	for (int i = 0; i < 3; i++) {
        /*rows*/ 
		if (board[i][0] == play && board[i][1] == play 
			&& board[i][2] == play) 
			return true;
        /*column*/ 
		if (board[0][i] == play && board[1][i] == play 
			&& board[2][i] == play) 
			return true; 
	} 
    /*right diagonals*/
	if (board[0][0] == play && board[1][1] == play 
		&& board[2][2] == play) 
		return true;
    /*left diagonals*/ 
	if (board[0][2] == play && board[1][1] == play 
		&& board[2][0] == play) 
		return true; 
	return false; 
}


// int main()
// {
//     Rules main_game;
//     main_game.GameStart();
//     return 0;
// }
