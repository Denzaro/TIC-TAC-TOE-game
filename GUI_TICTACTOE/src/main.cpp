#include "inc/function.h"

int main(int agrc, char *agrv[])
{
    QApplication app(agrc, agrv);
    guiStart guiBegin;
    guiBegin.showUIMode();
    return app.exec();
}
