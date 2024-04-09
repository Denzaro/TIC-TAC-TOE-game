#include "tictactoe_op.h"

bool Rules::CheckWin()
{
    // Delay the check for a win until after the board state has been updated
    for (int i = 0; i < 3; i++) {
        /*rows*/
        if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][0] == board[i][2])
            return true;
        /*column*/
        if (board[0][i] != ' ' && board[0][i] == board[1][i] && board[0][i] == board[2][i])
            return true;
    }
    /*right diagonals*/
    if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[0][0] == board[2][2])
        return true;
    /*left diagonals*/
    if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[0][2] == board[2][0])
        return true;
    return false;
}



// int main()
// {
//     Rules main_game;
//     main_game.GameStart();
//     return 0;
// }
