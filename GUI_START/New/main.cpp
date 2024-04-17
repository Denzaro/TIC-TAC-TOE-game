#include <main.h>
#include <QApplication>
#include "GUI_MOD.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    // Tạo một đối tượng GUI_MAIN
    GUI_MOD gui_modMain;

    // Hiển thị GUI_MAIN
    gui_modMain.show_GUI_MOD();

    return app.exec();
}
