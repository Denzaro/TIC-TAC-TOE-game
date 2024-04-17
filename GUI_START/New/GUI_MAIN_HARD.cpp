#include <main.h>
#include <GUI_MAIN_HARD.h>


void GUI_MAIN_HARD::show_GUI_MAIN_HARD(const QString &label_3){
    // Tạo một đối tượng QMainWindow để chứa giao diện kết quả
    QMainWindow *gui_main_hardWindow = new QMainWindow;

    // Tạo một đối tượng
    MAIN_HARD *gui_main_hardUi = new MAIN_HARD;
    gui_main_hardUi->setupUi(gui_main_hardWindow); // Thiết lập giao diện vào QMainWindow
    // Cập nhật nội dung của các thành phần trong giao diện
    gui_main_hardUi->label_3->setText("HARD");
    // Hiển thị cửa sổ giao diện kết quả
    gui_main_hardWindow->show();

}
