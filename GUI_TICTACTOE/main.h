#ifndef MAIN_H
#define MAIN_H

#include "tictactoe_ui.h"
#include "tictactoe_op.h"
#include <QObject>

class GameInterface:public QObject, public Rules
{
    Q_OBJECT
private:
    QApplication app;
    MainWindow game_ui;
    uint8_t turn;
public:
    GameInterface(int agrc, char *agrv[], int c=0):app(agrc,agrv),turn(c)
    {
        game_ui.setupUi(&game_ui);
        connect(game_ui.pushButton_0_0, &QPushButton::clicked, this, [this]{handleButtonClick(game_ui.pushButton_0_0,0,0);});
        connect(game_ui.pushButton_0_1, &QPushButton::clicked, this, [this]{handleButtonClick(game_ui.pushButton_0_1,0,1);});
        connect(game_ui.pushButton_0_2, &QPushButton::clicked, this, [this]{handleButtonClick(game_ui.pushButton_0_2,0,2);});
        connect(game_ui.pushButton_1_0, &QPushButton::clicked, this, [this]{handleButtonClick(game_ui.pushButton_1_0,1,0);});
        connect(game_ui.pushButton_1_1, &QPushButton::clicked, this, [this]{handleButtonClick(game_ui.pushButton_1_1,1,1);});
        connect(game_ui.pushButton_1_2, &QPushButton::clicked, this, [this]{handleButtonClick(game_ui.pushButton_1_2,1,2);});
        connect(game_ui.pushButton_2_0, &QPushButton::clicked, this, [this]{handleButtonClick(game_ui.pushButton_2_0,2,0);});
        connect(game_ui.pushButton_2_1, &QPushButton::clicked, this, [this]{handleButtonClick(game_ui.pushButton_2_1,2,1);});
        connect(game_ui.pushButton_2_2, &QPushButton::clicked, this, [this]{handleButtonClick(game_ui.pushButton_2_2,2,2);});

        // connect(game_ui.pushButton_2_2, SIGNAL(clicked()), this, SLOT(handleButtonClick_2_2()));
    }
    virtual ~GameInterface() {}
    void handleButtonClick(QPushButton *button, int in_row, int in_column);
    void InitGame();
    // public slots:
    //     void handleButtonClick_0_0();
};

#endif // MAIN_H