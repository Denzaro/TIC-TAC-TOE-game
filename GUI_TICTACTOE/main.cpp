#include "main.h"


void GameInterface::handleButtonClick(QPushButton *button,int in_row, int in_column)
{
    row = in_row;
    column = in_column;
    board[row][column] = play;
    game_ui.label_turn->setText(QString("%1 turn").arg(QString(play)));
    if(play=='X')
        button->setText(QString(play));
    else
        button->setText(QString(play));
    if(CheckWin())
    {
        game_ui.label_turn->setText(QString("The winner is: %1").arg(QString(play)));
        game_ui.pushButton_0_0->setEnabled(false);
        game_ui.pushButton_0_1->setEnabled(false);
        game_ui.pushButton_0_2->setEnabled(false);
        game_ui.pushButton_1_0->setEnabled(false);
        game_ui.pushButton_1_1->setEnabled(false);
        game_ui.pushButton_1_2->setEnabled(false);
        game_ui.pushButton_2_0->setEnabled(false);
        game_ui.pushButton_2_1->setEnabled(false);
        game_ui.pushButton_2_2->setEnabled(false);
    }
    play = (play=='X')?'O':'X';
    turn++;
    button->setEnabled(false);
    if(turn==9 && !CheckWin())
        game_ui.label_turn->setText(QString("Fking Draw!"));
}

// void GameInterface::handleButtonClick_0_0()
// {
//     row = 0 ;
//     column = 0;
//     board[row][column] = play;
//     if(play=='X')
//         game_ui.pushButton_0_0->setText(QString(play));
//     else
//         game_ui.pushButton_0_0->setText(QString(play));
//      play = (play=='X')?'O':'X';
//     game_ui.pushButton_0_0->setEnabled(false);
// }


void GameInterface::InitGame()
{
    game_ui.show();
    app.exec();
}

int main(int agrc, char *agrv[])
{
    GameInterface game(agrc,agrv);
    game.InitGame();
    return 0;
}
