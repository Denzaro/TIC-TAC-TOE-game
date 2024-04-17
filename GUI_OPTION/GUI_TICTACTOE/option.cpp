#include<main.h>



  GameInterface *game3 = new GameInterface(0, nullptr);
//* NUT MODE=PLAY AGAIN =)), VÀ PLAYAGIAN NGƯỢC LẠI NHA MN.
void GUI_option::show_GUI_Option(){
    game3->closeAllMainWindows();
    QMainWindow *option_Window = new QMainWindow;
    Option *optionUI = new Option;
    optionUI->setupUi(option_Window); // Thiết lập giao diện của Result vào QMainWindow
    qDebug() << "Bạn đã nhấn nút!";
    option_Window->show();
    //cấu hình nút new
    GUI_news *new2 = new GUI_news;
    connect(optionUI->mode, &QPushButton::clicked, [=]() {
        new2->show_GUI_news();
        option_Window->close(); // Đóng cửa sổ tùy chọn sau khi nhấn nút mode
    });
    //xử lý nút play agian

    connect(optionUI->playagain, &QPushButton::clicked, [=]() {
        game3->resetGame();
        option_Window->close(); // Đóng cửa sổ tùy chọn sau khi nhấn nút mode
    });
    qDebug() << "Bạn đã nhấn nút!";
}
