#ifndef FUNCTION_H
#define FUNCTION_H

#include "tictactoe_ui.h"
#include "tictactoe_op.h"
#include "GUI_LEVEL.h"
#include "GUI_MODE.h"
#include "option.h"
#include "result_tictactoe.h"
#include <QObject>
#include <QTimer>


class GUI_option :public QObject
{
    Q_OBJECT
public slots:
    void show_GUI_Option(QMainWindow *window);
};


// Class giao diện kết quả
class GUI_Result : public QObject
{
    Q_OBJECT

public slots:
    void show_result(const QString &win,const QString & lose);

private:
    Result result;

};


class guiStart: public QObject
{
    Q_OBJECT
public slots:
    void showUIMode();
};


class guiLevel: public QMainWindow
{
    Q_OBJECT
public slots:
    void showUILevel();
};



class GameInterface:public QObject, public Rules
{
    Q_OBJECT
private:
    MainWindow game_ui;
public:
    GUI_option *option1;
    GameInterface(int c,MODE mode):Rules(c)
    {
        game_ui.setupUi(&game_ui);
        option1= new GUI_option;
        //connect(game_ui.Connect, &QPushButton::clicked, option1,&GUI_option::show_GUI_Option);
        connect(game_ui.Connect, &QPushButton::clicked, this, [this]{handleButtonClickOption(game_ui.Connect);});
        switch(mode)
        {
        case HUMANMODE:
            /*---------Constructor for P vs P-------------------------------*/
            connect(game_ui.pushButton_0_0, &QPushButton::clicked, this, [this]{handleButtonClick(game_ui.pushButton_0_0,0,0);});
            connect(game_ui.pushButton_0_1, &QPushButton::clicked, this, [this]{handleButtonClick(game_ui.pushButton_0_1,0,1);});
            connect(game_ui.pushButton_0_2, &QPushButton::clicked, this, [this]{handleButtonClick(game_ui.pushButton_0_2,0,2);});
            connect(game_ui.pushButton_1_0, &QPushButton::clicked, this, [this]{handleButtonClick(game_ui.pushButton_1_0,1,0);});
            connect(game_ui.pushButton_1_1, &QPushButton::clicked, this, [this]{handleButtonClick(game_ui.pushButton_1_1,1,1);});
            connect(game_ui.pushButton_1_2, &QPushButton::clicked, this, [this]{handleButtonClick(game_ui.pushButton_1_2,1,2);});
            connect(game_ui.pushButton_2_0, &QPushButton::clicked, this, [this]{handleButtonClick(game_ui.pushButton_2_0,2,0);});
            connect(game_ui.pushButton_2_1, &QPushButton::clicked, this, [this]{handleButtonClick(game_ui.pushButton_2_1,2,1);});
            connect(game_ui.pushButton_2_2, &QPushButton::clicked, this, [this]{handleButtonClick(game_ui.pushButton_2_2,2,2);});
            break;

        /*---------Constructor for P vs Easy Bot-------------------------------*/
        case EASYMODE:
            connect(game_ui.pushButton_0_0, &QPushButton::clicked, this, [this]{handleButtonClickBot(game_ui.pushButton_0_0,0,0);});
            connect(game_ui.pushButton_0_1, &QPushButton::clicked, this, [this]{handleButtonClickBot(game_ui.pushButton_0_1,0,1);});
            connect(game_ui.pushButton_0_2, &QPushButton::clicked, this, [this]{handleButtonClickBot(game_ui.pushButton_0_2,0,2);});
            connect(game_ui.pushButton_1_0, &QPushButton::clicked, this, [this]{handleButtonClickBot(game_ui.pushButton_1_0,1,0);});
            connect(game_ui.pushButton_1_1, &QPushButton::clicked, this, [this]{handleButtonClickBot(game_ui.pushButton_1_1,1,1);});
            connect(game_ui.pushButton_1_2, &QPushButton::clicked, this, [this]{handleButtonClickBot(game_ui.pushButton_1_2,1,2);});
            connect(game_ui.pushButton_2_0, &QPushButton::clicked, this, [this]{handleButtonClickBot(game_ui.pushButton_2_0,2,0);});
            connect(game_ui.pushButton_2_1, &QPushButton::clicked, this, [this]{handleButtonClickBot(game_ui.pushButton_2_1,2,1);});
            connect(game_ui.pushButton_2_2, &QPushButton::clicked, this, [this]{handleButtonClickBot(game_ui.pushButton_2_2,2,2);});
            //game_ui.label_turn->setText(QString(" "));
            std::srand(time(0));
            break;

        /*-------------Constructor for P vs Hard Bot----------------------------*/
        case HARDMODE:
            connect(game_ui.pushButton_0_0, &QPushButton::clicked, this, [this]{handleButtonClickHardBot(game_ui.pushButton_0_0,0,0);});
            connect(game_ui.pushButton_0_1, &QPushButton::clicked, this, [this]{handleButtonClickHardBot(game_ui.pushButton_0_1,0,1);});
            connect(game_ui.pushButton_0_2, &QPushButton::clicked, this, [this]{handleButtonClickHardBot(game_ui.pushButton_0_2,0,2);});
            connect(game_ui.pushButton_1_0, &QPushButton::clicked, this, [this]{handleButtonClickHardBot(game_ui.pushButton_1_0,1,0);});
            connect(game_ui.pushButton_1_1, &QPushButton::clicked, this, [this]{handleButtonClickHardBot(game_ui.pushButton_1_1,1,1);});
            connect(game_ui.pushButton_1_2, &QPushButton::clicked, this, [this]{handleButtonClickHardBot(game_ui.pushButton_1_2,1,2);});
            connect(game_ui.pushButton_2_0, &QPushButton::clicked, this, [this]{handleButtonClickHardBot(game_ui.pushButton_2_0,2,0);});
            connect(game_ui.pushButton_2_1, &QPushButton::clicked, this, [this]{handleButtonClickHardBot(game_ui.pushButton_2_1,2,1);});
            connect(game_ui.pushButton_2_2, &QPushButton::clicked, this, [this]{handleButtonClickHardBot(game_ui.pushButton_2_2,2,2);});
            break;

        /*--------------Constructor for P vs Medium Bot----------------------*/
        case MEDIUMMODE:
            connect(game_ui.pushButton_0_0, &QPushButton::clicked, this, [this]{handleButtonClickMediumBot(game_ui.pushButton_0_0,0,0);});
            connect(game_ui.pushButton_0_1, &QPushButton::clicked, this, [this]{handleButtonClickMediumBot(game_ui.pushButton_0_1,0,1);});
            connect(game_ui.pushButton_0_2, &QPushButton::clicked, this, [this]{handleButtonClickMediumBot(game_ui.pushButton_0_2,0,2);});
            connect(game_ui.pushButton_1_0, &QPushButton::clicked, this, [this]{handleButtonClickMediumBot(game_ui.pushButton_1_0,1,0);});
            connect(game_ui.pushButton_1_1, &QPushButton::clicked, this, [this]{handleButtonClickMediumBot(game_ui.pushButton_1_1,1,1);});
            connect(game_ui.pushButton_1_2, &QPushButton::clicked, this, [this]{handleButtonClickMediumBot(game_ui.pushButton_1_2,1,2);});
            connect(game_ui.pushButton_2_0, &QPushButton::clicked, this, [this]{handleButtonClickMediumBot(game_ui.pushButton_2_0,2,0);});
            connect(game_ui.pushButton_2_1, &QPushButton::clicked, this, [this]{handleButtonClickMediumBot(game_ui.pushButton_2_1,2,1);});
            connect(game_ui.pushButton_2_2, &QPushButton::clicked, this, [this]{handleButtonClickMediumBot(game_ui.pushButton_2_2,2,2);});
            break;
        }


        // connect(game_ui.pushButton_2_2, SIGNAL(clicked()), this, SLOT(handleButtonClick_2_2()));
    }
    virtual ~GameInterface() {}
    void handleButtonClick(QPushButton *button, int in_row, int in_column);
    void handleButtonClickBot(QPushButton *button, int in_row, int in_column);
    void handleButtonClickHardBot(QPushButton *button, int in_row, int in_column);
    void handleButtonClickMediumBot(QPushButton *button, int in_row, int in_column);
    void handleButtonClickOption(QPushButton *button);
    void disablePlayButton();
    void enablePlayButton();
    void InitGame();
    void resetGame();
    void closeAllMainWindows();
};


#endif // MAIN_H
