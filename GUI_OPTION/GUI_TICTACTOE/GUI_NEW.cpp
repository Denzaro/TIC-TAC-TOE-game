#include <main.h>



void GUI_news::show_GUI_news(){
    QMainWindow *newsWindow = new QMainWindow;
    New *newui = new New;
    newui->setupUi(newsWindow); // Thiết lập giao diện của Result vào QMainWindow
    newui->label->setText("la la la");
    qDebug() << "Bạn đã nhấn nút!";
    newsWindow->show();

}
