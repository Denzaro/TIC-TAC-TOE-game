#ifndef TICTACTOE_H
#define TICTACTOE_H

#include <iostream>

class Players{
private:
    int row;
    int column;
protected:
    char play = 'X';
    int GetRow(){ return row;}
    int GetColumn(){ return column;}
public:
    void PlayerInput();
};

class Board:public Players
{
protected:
    int row;
    int column;
    char board[3][3] ={{' ',' ',' '},
                       {' ',' ',' '},
                       {' ',' ',' '}};
public:
    void DrawBoard();
    void PushIndex(); 
};

class Rules:public Board
{
private:
    int turn;
public:
    void GameStart();
    bool CheckWin();
};

#endif
