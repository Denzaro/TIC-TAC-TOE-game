#include <main.h>
#include <GUI_MAIN.h>

void GUI_MAIN::show_GUI_MAIN(const QString &label_1){
    // Tạo một đối tượng QMainWindow để chứa giao diện kết quả
    QMainWindow *gui_mainWindow = new QMainWindow;

    // Tạo một đối tượng
    MAIN *gui_mainUi = new MAIN;
    gui_mainUi->setupUi(gui_mainWindow); // Thiết lập giao diện vào QMainWindow
    // Cập nhật nội dung của các thành phần trong giao diện
    gui_mainUi->label_1->setText("1 PLAYER");
    // Hiển thị cửa sổ giao diện kết quả
    gui_mainWindow->show();

}
