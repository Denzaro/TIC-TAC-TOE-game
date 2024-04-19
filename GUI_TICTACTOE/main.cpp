#include "main.h"

modeOfGame oldMode;


void GameInterface::handleButtonClickOption(QPushButton *button)
{
    option1->show_GUI_Option(&game_ui);
}


void GUI_option::show_GUI_Option(QMainWindow *window){
    QMainWindow *option_Window = new QMainWindow;
    Option *optionUI = new Option;
    optionUI->setupUi(option_Window); // Thiết lập giao diện của Result vào QMainWindow
    option_Window->show();
    //cấu hình nút new
    guiStart *modePage = new guiStart;
    connect(optionUI->mode, &QPushButton::clicked, [=]() {
        window->close();
        modePage->showUIMode();
        option_Window->close(); // Đóng cửa sổ tùy chọn sau khi nhấn nút mode
    });
    //xử lý nút play agian
    GameInterface *gameAgain = new GameInterface(0,nullptr,0,oldMode);
    connect(optionUI->playagain, &QPushButton::clicked, [=]() {
        window->close();
        gameAgain->resetGame();
        option_Window->close(); // Đóng cửa sổ tùy chọn sau khi nhấn nút mode
    });
}

//hàm hiển thị kết quả người chiến thắng sau khi                        q4567
void GUI_Result::show_result(const QString &win,const QString & loss) {
    // Tạo một đối tượng QMainWindow để chứa giao diện kết quả
    QMainWindow *resultWindow = new QMainWindow;

    // Tạo một đối tượng Result từ mã được tạo từ result_tictactoe.ui
    Result *resultUi = new Result;
    resultUi->setupUi(resultWindow); // Thiết lập giao diện của Result vào QMainWindow

    // Cập nhật nội dung của các thành phần trong giao diện Result
    resultUi->win->setText(win);    // Sử dụng win để hiển thị người chiến thắng
    //resultUi->loss->setText(lose);
    // Hiển thị cửa sổ giao diện kết quả
    resultWindow->show();

}


void guiStart::showUIMode(){
    QMainWindow *guiMode_window = new QMainWindow;
    ModeGame *mode = new ModeGame;
    mode->setupUi(guiMode_window);
    guiMode_window->show();


    //button configurations
    GameInterface *gameUI = new GameInterface(0,nullptr,0,HUMANMODE);
    connect(mode->Person, &QPushButton::clicked, [=]() {
        oldMode = HUMANMODE;
        gameUI->InitGame();
        guiMode_window->close(); // Đóng cửa sổ tùy chọn sau khi nhấn nút mode
    });

    guiLevel *uiLevel = new guiLevel;
    connect(mode->Bot, &QPushButton::clicked, [=]() {
        uiLevel->showUILevel();
        guiMode_window->close(); // Đóng cửa sổ tùy chọn sau khi nhấn nút mode
    });
}

void guiLevel::showUILevel(){
    QMainWindow *guiLevel_window = new QMainWindow;
    botLevel *level = new botLevel;
    level->setupUi(guiLevel_window);
    guiLevel_window->show();

    //button configurations
    //game initial with ez mode
    GameInterface *gameUI_Easy = new GameInterface(0,nullptr,0,EASYMODE);
    connect(level->Easy, &QPushButton::clicked, [=]() {
        oldMode = EASYMODE;
        gameUI_Easy->InitGame();
        guiLevel_window->close(); // Đóng cửa sổ tùy chọn sau khi nhấn nút mode
    });


    //game initial with medium mode
    GameInterface *gameUI_Medium = new GameInterface(0,nullptr,0,MEDIUMMODE);
    connect(level->Medium, &QPushButton::clicked, [=]() {
        oldMode = EASYMODE;
        gameUI_Medium->InitGame();
        guiLevel_window->close(); // Đóng cửa sổ tùy chọn sau khi nhấn nút mode
    });


    //game initial with hard mode
    GameInterface *gameUI_Hard = new GameInterface(0,nullptr,0,HARDMODE);
    connect(level->Hard, &QPushButton::clicked, [=]() {
        oldMode = HARDMODE;
        gameUI_Hard->InitGame();
        guiLevel_window->close(); // Đóng cửa sổ tùy chọn sau khi nhấn nút mode
    });
}


void GameInterface::handleButtonClick(QPushButton *button,int in_row, int in_column)
{
    row = in_row;
    column = in_column;
    board[row][column] = play;

    if(play=='X')
        button->setText(QString(play));
    else
        button->setText(QString(play));
    if(CheckWin())
    {
        QString win = QString("Player %1 WINS").arg(QString(play));
        // Tạo một đối tượng GUI_Result để hiển thị kết quả
        GUI_Result *guiResult = new GUI_Result;
        guiResult->show_result(win,NULL); // Truyền kết quả vào hàm show_result
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
    game_ui.Player2_sym_2->setText(QString(play));
    turn++;
    /*Each time press button, disable that button*/
    button->setEnabled(false);
    if(turn==9 && !CheckWin()){
        QString draw = QString("DRAWWWW!");
        GUI_Result *guiResult = new GUI_Result;
        guiResult->show_result(draw,NULL);
    }

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
        // Tạo một đối tượng GUI_Result để hiển thị kết quả
        GUI_Result *guiResult = new GUI_Result;
        guiResult->show_result(win,NULL); // Truyền kết quả vào hàm show_result
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
    game_ui.Player2_sym_2->setText(QString(play));
    button->setEnabled(false);
    /*-----------------Check Draw here-----------------*/
    if(turn==9 && !CheckWin())
    {
        QString draw = QString("DRAWWWW!");
        GUI_Result *guiResult = new GUI_Result;
        guiResult->show_result(draw,NULL);
    }
    /*-----------------Bot operation here--------------*/
    if(turn%2!=0 && !CheckWin() && turn<9)
    {
        /*Generate random unquie index*/
        QTimer *botTimer = new QTimer(this);
        disablePlayButton();
        connect(botTimer, &QTimer::timeout, this, [=](){
        enablePlayButton();
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
            botTimer->deleteLater();
        });
        botTimer->start(500);
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
        QString win = QString("Player %1 WINS").arg(QString(play));
        // Tạo một đối tượng GUI_Result để hiển thị kết quả
        GUI_Result *guiResult = new GUI_Result;
        guiResult->show_result(win,NULL); // Truyền kết quả vào hàm show_result
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
    game_ui.Player2_sym_2->setText(QString(play));
    button->setEnabled(false);
    /*-----------------Check Draw here-----------------*/
    if(turn==9 && !CheckWin())
    {
        QString draw = QString("DRAWWWW!");
        GUI_Result *guiResult = new GUI_Result;
        guiResult->show_result(draw,NULL);
    }
    /*-----------------Bot operation here--------------*/
    if(turn%2!=0 && !CheckWin() && turn<9)
    {
        QTimer *botTimer = new QTimer(this);
        disablePlayButton();
        connect(botTimer, &QTimer::timeout, this, [=](){
        enablePlayButton();
        index = BestMove(board,0);
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
            botTimer->deleteLater();
        });
        botTimer->start(500);
    }
}

void GameInterface::handleButtonClickMediumBot(QPushButton *button, int in_row, int in_column)
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
        // Tạo một đối tượng GUI_Result để hiển thị kết quả
        GUI_Result *guiResult = new GUI_Result;
        guiResult->show_result(win,NULL); // Truyền kết quả vào hàm show_result
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
    game_ui.Player2_sym_2->setText(QString(play));
    button->setEnabled(false);
    /*-----------------Check Draw here-----------------*/
    if(turn==9 && !CheckWin())
    {
        QString draw = QString("DRAWWWW!");
        GUI_Result *guiResult = new GUI_Result;
        guiResult->show_result(draw,NULL);
    }
    /*-----------------Bot operation here--------------*/
    if(turn%2!=0 && !CheckWin() && turn<9)
    {
        QTimer *botTimer = new QTimer(this);
        disablePlayButton();
        connect(botTimer, &QTimer::timeout, this, [=](){
        enablePlayButton();
        index = BestMove(board,3);
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
                botTimer->deleteLater();
        });
        botTimer->start(500);
    }
}


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
    //game_ui.label_turn->setText(QString(" "));
    game_ui.Connect->setText("PLAY AGAIN");
    game_ui.show();
}


void GameInterface::enablePlayButton()
{
    for(int i=0; i<9; i++)
    {
        int row = i/3;
        int column = i%3;
        std::pair<uint8_t,uint8_t> index;
        if(board[row][column]==' ')
        {
            index = std::make_pair(row,column);
            switch(ID[index])
            {
            case 0:
                game_ui.pushButton_0_0->setEnabled(true);
                break;
            case 1:
                game_ui.pushButton_0_1->setEnabled(true);
                break;
            case 2:
                game_ui.pushButton_0_2->setEnabled(true);
                break;
            case 3:
                game_ui.pushButton_1_0->setEnabled(true);
                break;
            case 4:
                game_ui.pushButton_1_1->setEnabled(true);
                break;
            case 5:
                game_ui.pushButton_1_2->setEnabled(true);
                break;
            case 6:
                game_ui.pushButton_2_0->setEnabled(true);
                break;
            case 7:
                game_ui.pushButton_2_1->setEnabled(true);
                break;
            case 8:
                game_ui.pushButton_2_2->setEnabled(true);
                break;
            }
        }
    }
}

void GameInterface::disablePlayButton()
{
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

void GameInterface::InitGame()
{
    game_ui.show();
    app.exec();
}

int main(int agrc, char *agrv[])
{
    QApplication app(agrc, agrv);
    guiStart guiBegin;
    guiBegin.showUIMode();
    return app.exec();
}
