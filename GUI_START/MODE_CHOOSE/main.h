#ifndef MAIN_H
#define MAIN_H

#include "GUI_LEVEL.h"
#include "GUI_MAIN.h"
#include <GUI_MOD.h>
#include <QObject>

// Giao diện GUI_MOD
class GUI_MOD :public QObject
{
    Q_OBJECT
public slots:
    void show_GUI_MOD();

};

// Giao diện GUI_LEVEL
class GUI_LEVEL :public QObject
{
    Q_OBJECT
public slots:
    void show_GUI_LEVEL();
};

// Giao diện GUI_MAIN
class GUI_MAIN : public QObject
{
    Q_OBJECT
public slots:
    void show_GUI_MAIN();
public:
    GUI_MAIN(int key);
private:
    MAIN main;
    int key;
};

#endif // MAIN_H
