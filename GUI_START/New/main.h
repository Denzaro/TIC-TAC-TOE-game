#ifndef MAIN_H
#define MAIN_H

#include "GUI_LEVEL.h"
#include "GUI_MAIN.h"
#include "GUI_MAIN_EASY.h"
#include "GUI_MAIN_HARD.h"
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

// Giao diện GUI_MAINL
class GUI_MAIN : public QObject
{
    Q_OBJECT
public slots:
    void show_GUI_MAIN(const QString &label_1);
private:
    MAIN main;

};

// Giao diện GUI_MAIN_EASY
class GUI_MAIN_EASY : public QObject
{
    Q_OBJECT
public slots:
    void show_GUI_MAIN_EASY(const QString &label_2);

};

// Giao diện GUI_MAIN_HARD
class GUI_MAIN_HARD : public QObject
{
    Q_OBJECT
public slots:
    void show_GUI_MAIN_HARD(const QString &label_3);

};


#endif // MAIN_H
