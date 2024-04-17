#include <main.h>
#include <GUI_MAIN.h>

void GUI_MAIN::show_GUI_MAIN(){
    // Tạo một đối tượng QMainWindow để chứa giao diện kết quả
    QMainWindow *gui_mainWindow = new QMainWindow;

    // Tạo một đối tượng
    MAIN *gui_mainUi = new MAIN;
    gui_mainUi->setupUi(gui_mainWindow); // Thiết lập giao diện vào QMainWindow
    // Cập nhật nội dung của các thành phần trong giao diện
    if(this->key == 1)
        gui_mainUi->label_1->setText("1 PLAYER");
    else if(this->key == 2)
        gui_mainUi->label_1->setText("Easy");
    else
        gui_mainUi->label_1->setText("Hard");
    // Hiển thị cửa sổ giao diện kết quả
    gui_mainWindow->show();

}


GUI_MAIN::GUI_MAIN(int key){
    this->key = key;
}
