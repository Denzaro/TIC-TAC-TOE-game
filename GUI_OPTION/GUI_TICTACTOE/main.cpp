    #include "main.h"
    #include <tictactoe_ui.h>
    #include <result_tictactoe.h>
    #include <QDialog>





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

void GameInterface::closeAllMainWindows() {
        QList<QMainWindow *> mainWindows;
        foreach (QWidget *widget, QApplication::topLevelWidgets()) {
            QMainWindow *mainWindow = qobject_cast<QMainWindow *>(widget);
            if (mainWindow)
                mainWindows.append(mainWindow);
        }
       foreach (QMainWindow *window, mainWindows) {
            window->close();
        }
    }

void GameInterface::resetGame() {

        // Clear the game board
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                board[i][j] = ' ';
            }
        }
        // Enable all buttons
        QWidget *central = game_ui.centralWidget();
        QList<QPushButton *> buttons = central->findChildren<QPushButton *>();
        for (QPushButton *button : buttons) {
            button->setEnabled(true);
            button->setText(""); // Clear button text
        }

        // Reset game turn
        turn = 0;
        game_ui.label_turn->setText(QString(" "));
        game_ui.Connect->setText("PLAY AGAIN");
        game_ui.show();
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

        QString win = QString("Player %1 WINS").arg(QString(play));
        QString lose =QString("Player %1 LOSES").arg(play=='X'?'O':'X');
            // Tạo một đối tượng GUI_Result để hiển thị kết quả
            GUI_Result *guiResult = new GUI_Result;
            guiResult->show_result(win,lose); // Truyền kết quả vào hàm show_result

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

        /*-----------------Check Draw here-----------------*/
        if (turn == 9) {  // Nếu đã đến lượt chơi thứ 9 và không có người chiến thắng
            if (!CheckWin()) {  // Kiểm tra xem có người chiến thắng không
                // Nếu không có người chiến thắng, đây là trường hợp hòa
                GUI_Result draw;
                QString drawText = "It's a draw!";
                draw.show_result(drawText,0);
                game_ui.label_turn->setText(QString("It's a Draw!"));  // Cập nhật label thông báo hòa
                game_ui.label->setText(QString("Checkpoint"));  // Cập nhật label khác (nếu cần)
            }
        }
        else
        /*-----------------Bot operation here--------------*/
        if(turn%2!=0)
        {
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
    //reset game


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
