#include <main.h>
#include <GUI_MOD.h>
#include <GUI_MAIN.h>
#include <GUI_LEVEL.h>

void GUI_MOD::show_GUI_MOD(){
    QMainWindow *gui_modWindow = new QMainWindow;
    MOD *gui_modUi = new MOD;
    gui_modUi->setupUi(gui_modWindow); // Thiết lập giao diện vào QMainWindow
    gui_modWindow->show();
    //cấu hình nút
    GUI_MAIN *gui_mainUi = new GUI_MAIN;
    connect(gui_modUi->Bot, &QPushButton::clicked, [=]() {
        gui_mainUi->show_GUI_MAIN("");
        gui_modWindow->close(); // Đóng cửa sổ tùy chọn sau khi nhấn nút mode
    });
    GUI_LEVEL *gui_levelUi = new GUI_LEVEL;
    connect(gui_modUi->Person, &QPushButton::clicked, [=]() {
        gui_levelUi->show_GUI_LEVEL();
        gui_modWindow->close(); // Đóng cửa sổ tùy chọn sau khi nhấn nút mode
    });

}

