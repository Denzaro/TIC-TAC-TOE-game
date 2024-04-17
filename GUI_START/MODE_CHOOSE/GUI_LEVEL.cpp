#include <main.h>
#include<GUI_LEVEL.h>

void GUI_LEVEL::show_GUI_LEVEL(){
    QMainWindow *gui_levelWindow = new QMainWindow;
    LEVEL *gui_levelUi = new LEVEL;
    gui_levelUi->setupUi(gui_levelWindow); // Thiết lập giao diện vào QMainWindow
    gui_levelWindow->show();
    //cấu hình nút
    GUI_MAIN *gui_mainUi = new GUI_MAIN(2);
    connect(gui_levelUi->Easy, &QPushButton::clicked, [=]() {
        gui_mainUi->show_GUI_MAIN();
        gui_levelWindow->close(); // Đóng cửa sổ tùy chọn sau khi nhấn nút mode
    });
    GUI_MAIN *gui_mainlUi = new GUI_MAIN(3);
    connect(gui_levelUi->Hard, &QPushButton::clicked, [=]() {
        gui_mainlUi->show_GUI_MAIN();
        gui_levelWindow->close(); // Đóng cửa sổ tùy chọn sau khi nhấn nút mode
    });
}
