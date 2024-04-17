#include <main.h>
#include <GUI_MAIN_EASY.h>

void GUI_MAIN_EASY::show_GUI_MAIN_EASY(const QString &label_2){
    // Tạo một đối tượng QMainWindow để chứa giao diện kết quả
    QMainWindow *gui_main_easyWindow = new QMainWindow;

    // Tạo một đối tượng
    MAIN_EASY *gui_main_easyUi = new MAIN_EASY;
    gui_main_easyUi->setupUi(gui_main_easyWindow); // Thiết lập giao diện vào QMainWindow
    // Cập nhật nội dung của các thành phần trong giao diện
    gui_main_easyUi->label_2->setText("EASY");
    // Hiển thị cửa sổ giao diện kết quả
    gui_main_easyWindow->show();

}
