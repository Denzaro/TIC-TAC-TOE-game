    #ifndef MAIN_H
    #define MAIN_H

    #include "tictactoe_ui.h"
    #include "tictactoe_op.h"
    #include "result_tictactoe.h"
    #include <QObject>
    #include <option.h>
    #include<NEW.h>





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


    extern std::unordered_map<std::pair<uint8_t, uint8_t>, int, pair_hash> ID;

    //CLass giao dien (Option)
    class GUI_news :public QObject
    {
        Q_OBJECT
    public slots:
        void show_GUI_news();

    private:
        New news;


    };

    class GUI_option :public QObject
    {
     Q_OBJECT
    public slots:
    void show_GUI_Option();

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



    class GameInterface:public QObject, public Rules
    {
        Q_OBJECT


    private:
        QApplication app;
        MainWindow game_ui;
        uint8_t turn;
        uint8_t random_row;
        uint8_t random_column;
        std::pair <uint8_t,uint8_t> random;


    public:
        GameInterface(int agrc, char *agrv[], int c=0):app(agrc,agrv),turn(c),random_row(c), random_column(c)
        {
            game_ui.setupUi(&game_ui);
            /*---------Constructor for P vs P-------------------------------*/
            // connect(game_ui.pushButton_0_0, &QPushButton::clicked, this, [this]{handleButtonClick(game_ui.pushButton_0_0,0,0);});
            // connect(game_ui.pushButton_0_1, &QPushButton::clicked, this, [this]{handleButtonClick(game_ui.pushButton_0_1,0,1);});
            // connect(game_ui.pushButton_0_2, &QPushButton::clicked, this, [this]{handleButtonClick(game_ui.pushButton_0_2,0,2);});
            // connect(game_ui.pushButton_1_0, &QPushButton::clicked, this, [this]{handleButtonClick(game_ui.pushButton_1_0,1,0);});
            // connect(game_ui.pushButton_1_1, &QPushButton::clicked, this, [this]{handleButtonClick(game_ui.pushButton_1_1,1,1);});
            // connect(game_ui.pushButton_1_2, &QPushButton::clicked, this, [this]{handleButtonClick(game_ui.pushButton_1_2,1,2);});
            // connect(game_ui.pushButton_2_0, &QPushButton::clicked, this, [this]{handleButtonClick(game_ui.pushButton_2_0,2,0);});
            // connect(game_ui.pushButton_2_1, &QPushButton::clicked, this, [this]{handleButtonClick(game_ui.pushButton_2_1,2,1);});
            // connect(game_ui.pushButton_2_2, &QPushButton::clicked, this, [this]{handleButtonClick(game_ui.pushButton_2_2,2,2);});

            /*---------Constructor for P vs Bot-------------------------------*/
            connect(game_ui.pushButton_0_0, &QPushButton::clicked, this, [this]{handleButtonClickBot(game_ui.pushButton_0_0,0,0);});
            connect(game_ui.pushButton_0_1, &QPushButton::clicked, this, [this]{handleButtonClickBot(game_ui.pushButton_0_1,0,1);});
            connect(game_ui.pushButton_0_2, &QPushButton::clicked, this, [this]{handleButtonClickBot(game_ui.pushButton_0_2,0,2);});
            connect(game_ui.pushButton_1_0, &QPushButton::clicked, this, [this]{handleButtonClickBot(game_ui.pushButton_1_0,1,0);});
            connect(game_ui.pushButton_1_1, &QPushButton::clicked, this, [this]{handleButtonClickBot(game_ui.pushButton_1_1,1,1);});
            connect(game_ui.pushButton_1_2, &QPushButton::clicked, this, [this]{handleButtonClickBot(game_ui.pushButton_1_2,1,2);});
            connect(game_ui.pushButton_2_0, &QPushButton::clicked, this, [this]{handleButtonClickBot(game_ui.pushButton_2_0,2,0);});
            connect(game_ui.pushButton_2_1, &QPushButton::clicked, this, [this]{handleButtonClickBot(game_ui.pushButton_2_1,2,1);});
            connect(game_ui.pushButton_2_2, &QPushButton::clicked, this, [this]{handleButtonClickBot(game_ui.pushButton_2_2,2,2);});
            game_ui.label_turn->setText(QString(" "));
            std::srand(time(0));

        //KẾT NỐI TỚI GIAO DIỆN OPTION
            GUI_option*option1=new GUI_option;


           connect(game_ui.Connect, &QPushButton::clicked, option1,&GUI_option::show_GUI_Option);
        }
        virtual ~GameInterface() {}
        void handleButtonClick(QPushButton *button, int in_row, int in_column);
        void handleButtonClickBot(QPushButton *button, int in_row, int in_column);
        void InitGame();
        void resetGame();
        void closeAllMainWindows();
    };


    #endif // MAIN_H
