#include "tictactoe.h"


void Players::PlayerInput()
{
    std::cout<<"Player "<<play<<" enter the coordinate: row(0-2) and column (0-2): ";
    std::cin>>row>>column;
}



void Board::PushIndex()
{
    row = GetRow();
    column = GetColumn();
}

void Board::DrawBoard()
{
    std::cout<<"-------------\n";
    for(int i=0; i < 3; i++)
    {
        std::cout<<"| ";
        for(int j=0; j < 3; j++)
        {
            std::cout<<board[i][j]<<" | ";
        }
        std::cout<<std::endl;
        std::cout<<"-------------\n";
    }
}

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

void Rules::GameStart()
{
    /*start the game*/
    for(turn = 0; turn < 9 ;turn++)
    {
        DrawBoard();
        while(true)
        {
            PlayerInput(); //Get the row and column from input
            PushIndex(); //Push it to the board
            /*Check if the index is free, and have the valid value from 0 to 2*/
            if((board[row][column]!=' ')||row<0||row>2||column<0||column>2)
            {
                std::cout<<"Invalid move. Please try again. \n";
            }
            else
            {
                board[row][column]= play; //Give the value at that index
                break;
            }
        }
        /*Check the result of the match*/
        if(CheckWin())
        {
            DrawBoard();
            std::cout<<"Player "<<play<<" win!\n";
            break;
        }
        play = (play=='X')?'O':'X'; 
    }

    if(turn == 9 && !CheckWin())
    {
        std::cout<<"Draw @@\n";
    }
}

// int main()
// {
//     Rules main_game;
//     main_game.GameStart();
//     return 0;
// }
