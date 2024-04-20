#ifndef TICTACTOE_OP_H
#define TICTACTOE_OP_H

#include <bits/stdc++.h>
#define COMPUTERMOVE 'O'
#define HUMANMOVE 'X'

/*--------Set hash key for unorder_map------------*/
struct pair_hash {
    template <class T1, class T2>
    std::size_t operator () (const std::pair<T1,T2> &p) const {
        auto h1 = std::hash<T1>{}(p.first);
        auto h2 = std::hash<T2>{}(p.second);

        // Mainly for demonstration purposes, i.e. works but is overly simple
        // In the real world, use sth. like boost.hash_combine
        return h1 ^ h2;
    }
};
/*---Unordered map------------------------------*/
extern std::unordered_map<std::pair<uint8_t, uint8_t>, int, pair_hash> ID;
/*-------------Enum for mode-------------------*/
typedef enum MODE{
    HUMANMODE,
    EASYMODE,
    MEDIUMMODE,
    HARDMODE,
}modeOfGame;
/*---------Player class-----------------------*/
class Players
{
protected:
    int row;
    int column;
    char board[3][3] ={{' ',' ',' '},
                       {' ',' ',' '},
                       {' ',' ',' '}};
    char play = 'X';
    std::pair <uint8_t,uint8_t> random;
    uint8_t turn;
    uint8_t random_row;
    uint8_t random_column;
    int index;
public:
    Players(int var):turn(var),random_row(var),random_column(var){}
};

/*---------------Rules class------------------*/
class Rules:public Players
{
public:
    Rules(int var):Players(var){}
    bool CheckWin();
    int MiniMax(char board[][3],int depth, bool isAI,int mode);
    int BestMove(char board[][3], int mode);
};

#endif
