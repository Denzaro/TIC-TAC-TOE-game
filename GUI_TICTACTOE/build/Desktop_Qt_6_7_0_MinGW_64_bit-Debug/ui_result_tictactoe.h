/********************************************************************************
** Form generated from reading UI file 'result_tictactoe.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULT_TICTACTOE_H
#define UI_RESULT_TICTACTOE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *result;
    QLabel *win;
    QLabel *loss;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(695, 538);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        result = new QLabel(centralwidget);
        result->setObjectName("result");
        result->setGeometry(QRect(200, 10, 361, 111));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        result->setFont(font);
        win = new QLabel(centralwidget);
        win->setObjectName("win");
        win->setGeometry(QRect(170, 160, 431, 91));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        font1.setKerning(true);
        win->setFont(font1);
        loss = new QLabel(centralwidget);
        loss->setObjectName("loss");
        loss->setGeometry(QRect(170, 300, 521, 101));
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(false);
        loss->setFont(font2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 695, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        result->setText(QCoreApplication::translate("MainWindow", "RESULT GAME", nullptr));
        win->setText(QCoreApplication::translate("MainWindow", "Player 1 (X): WIN", nullptr));
        loss->setText(QCoreApplication::translate("MainWindow", "Player2 (O): LOSES", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULT_TICTACTOE_H
