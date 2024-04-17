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

std::unordered_map<std::pair<uint8_t, uint8_t>, int, pair_hash> ID =
{
        {{0, 0}, 0},
        {{0, 1}, 1},
        {{0, 2}, 2},
        {{1, 0}, 3},
        {{1, 1}, 4},
        {{1, 2}, 5},
        {{2, 0}, 6},
        {{2, 1}, 7},
        {{2, 2}, 8},
};

int Rules::MiniMax(char board[3][3],int depth, bool isAI)
{
    int score = 0;
    int bestScore = 0;

    if(CheckWin())
    {
        if(isAI==true)
            return -1;
        if(isAI==false)
            return +1;
    }
    else
    {
        if(depth<9)
        {
            if(isAI==true)
            {
                bestScore = -999;
                for(int i=0; i<3; i++)
                    for(int j=0; j<3; j++)
                    {
                        if(board[i][j]==' ')
                        {
                            board[i][j] = COMPUTERMOVE;
                            score = MiniMax(board,depth+1,false);
                            board[i][j]=' ';
                            if(score>bestScore)
                                bestScore = score;
                        }
                    }
                return bestScore;
            }
            else
            {
                bestScore = 999;
                for(int i=0; i < 3; i++)
                    for(int j=0; j<3; j++)
                    {
                        if(board[i][j]==' ')
                        {
                            board[i][j]= HUMANMOVE;
                            score = MiniMax(board,depth+1,true);
                            board[i][j]=' ';
                            if(score<bestScore)
                                bestScore = score;
                        }
                    }
                return bestScore;
            }
        }
        else
            return 0;
    }
    return 0;
}

int Rules::BestMove(char board[3][3])
{
    int temp_row=-1;
    int temp_column=-1;

    int score=0, bestScore=-999;
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
        {
           if(board[i][j]==' ')
           {
                board[i][j]=COMPUTERMOVE;
                score=MiniMax(board,turn+1,false);
                board[i][j]=' ';
                if(score>bestScore)
                {
                    bestScore=score;
                    temp_row = i;
                    temp_column = j;
                }
           }
        }
    return temp_row*3+temp_column;
}


