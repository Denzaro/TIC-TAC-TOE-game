#include <main.h>
#include<GUI_LEVEL.h>
#include <GUI_MAIN_EASY.h>
#include <GUI_MAIN_HARD.h>

void GUI_LEVEL::show_GUI_LEVEL(){
    QMainWindow *gui_levelWindow = new QMainWindow;
    LEVEL *gui_levelUi = new LEVEL;
    gui_levelUi->setupUi(gui_levelWindow); // Thiết lập giao diện vào QMainWindow
    gui_levelWindow->show();
    //cấu hình nút
    GUI_MAIN_EASY *gui_maineasylUi = new GUI_MAIN_EASY;
    connect(gui_levelUi->Easy, &QPushButton::clicked, [=]() {
        gui_maineasylUi->show_GUI_MAIN_EASY("");
        gui_levelWindow->close(); // Đóng cửa sổ tùy chọn sau khi nhấn nút mode
    });
    GUI_MAIN_HARD *gui_mainhardlUi = new GUI_MAIN_HARD;
    connect(gui_levelUi->Hard, &QPushButton::clicked, [=]() {
        gui_mainhardlUi->show_GUI_MAIN_HARD("");
        gui_levelWindow->close(); // Đóng cửa sổ tùy chọn sau khi nhấn nút mode
    });
}
