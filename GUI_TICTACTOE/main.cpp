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
    /*Each time press button, disable that button*/
    button->setEnabled(false);
    if(turn==9 && !CheckWin())
        game_ui.label_turn->setText(QString("Fking Draw!"));
}

void GameInterface::handleButtonClickBot(QPushButton *button,int in_row, int in_column)
{
    row = in_row;
    column = in_column;
    board[row][column] = play;
    if(play=='X')
        button->setText(QString(play));
    else
        button->setText(QString(play));
    /*-------------Check win------------------*/
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
    turn++;
    play = (play=='X')?'O':'X';
    button->setEnabled(false);
    /*-----------------Check Draw here-----------------*/
    if(turn==9 && !CheckWin())
    {
        game_ui.label_turn->setText(QString("Fking Draw!"));
        if(!CheckWin())
        game_ui.label->setText(QString("Checkpoint"));
    }
    /*-----------------Bot operation here--------------*/
    if(turn%2!=0 && !CheckWin() && turn<9)
    {
        /*Generate random unquie index*/
        while(board[random_row][random_column]!=' ')
        {
            random_row = rand()%3;
            random_column = rand()%3;
        }
        random = std::make_pair(random_row,random_column);

            switch(ID[random])
            {
                case 0:
                    game_ui.pushButton_0_0->click();
                    break;
                case 1:
                    game_ui.pushButton_0_1->click();
                    break;
                case 2:
                    game_ui.pushButton_0_2->click();
                    break;
                case 3:
                    game_ui.pushButton_1_0->click();
                    break;
                case 4:
                    game_ui.pushButton_1_1->click();
                    break;
                case 5:
                    game_ui.pushButton_1_2->click();
                    break;
                case 6:
                    game_ui.pushButton_2_0->click();
                    break;
                case 7:
                    game_ui.pushButton_2_1->click();
                    break;
                case 8:
                    game_ui.pushButton_2_2->click();
                    break;
            }
    }
}

void GameInterface::handleButtonClickHardBot(QPushButton *button, int in_row, int in_column)
{
    row = in_row;
    column = in_column;
    board[row][column] = play;
    if(play=='X')
        button->setText(QString(play));
    else
        button->setText(QString(play));
    /*-------------Check win------------------*/
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
    turn++;
    play = (play=='X')?'O':'X';
    button->setEnabled(false);
    /*-----------------Check Draw here-----------------*/
    if(turn==9 && !CheckWin())
    {
        game_ui.label_turn->setText(QString("Fking Draw!"));
        if(!CheckWin())
        game_ui.label->setText(QString("Checkpoint"));
    }
    /*-----------------Bot operation here--------------*/
    if(turn%2!=0 && !CheckWin() && turn<9)
    {
        index = BestMove(board);
        int r = index/3;
        int c = index%3;
        random = std::make_pair(r,c);

            switch(ID[random])
            {
                case 0:
                    game_ui.pushButton_0_0->click();
                    break;
                case 1:
                    game_ui.pushButton_0_1->click();
                    break;
                case 2:
                    game_ui.pushButton_0_2->click();
                    break;
                case 3:
                    game_ui.pushButton_1_0->click();
                    break;
                case 4:
                    game_ui.pushButton_1_1->click();
                    break;
                case 5:
                    game_ui.pushButton_1_2->click();
                    break;
                case 6:
                    game_ui.pushButton_2_0->click();
                    break;
                case 7:
                    game_ui.pushButton_2_1->click();
                    break;
                case 8:
                    game_ui.pushButton_2_2->click();
                    break;
            }
    }
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
