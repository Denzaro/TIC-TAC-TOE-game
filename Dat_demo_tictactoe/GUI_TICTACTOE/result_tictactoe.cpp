#include <main.h>
#include<result_tictactoe.h>




//hàm hiển thị kết quả người chiến thắng sau khi
    void GUI_Result::show_result(const QString &win,const QString & lose) {
    // Tạo một đối tượng QMainWindow để chứa giao diện kết quả
    QMainWindow *resultWindow = new QMainWindow;

    // Tạo một đối tượng Result từ mã được tạo từ result_tictactoe.ui
    Result *resultUi = new Result;
    resultUi->setupUi(resultWindow); // Thiết lập giao diện của Result vào QMainWindow
    // Cập nhật nội dung của các thành phần trong giao diện Result
    resultUi->result->setText("RESULT GAME");
    resultUi->win->setText(win);    // Sử dụng win để hiển thị người chiến thắng
    resultUi->loss->setText(lose);
    // Hiển thị cửa sổ giao diện kết quả
    resultWindow->show();

}
