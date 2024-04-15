#ifndef TICTACTOE_OP_H
#define TICTACTOE_OP_H

#include <iostream>

class Players
{
protected:
    int row;
    int column;
    char board[3][3] ={{' ',' ',' '},
                       {' ',' ',' '},
                       {' ',' ',' '}};
    char play = 'X';
};

class Rules:public Players
{
private:
    int turn;
public:
    bool CheckWin();
};

#endif
