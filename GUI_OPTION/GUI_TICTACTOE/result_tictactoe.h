/********************************************************************************
** Form generated from reading UI file 'result_tictactoe.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef RESULT_TICTACTOE_H
#define RESULT_TICTACTOE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Result:public QMainWindow
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
            MainWindow->setObjectName("Result game");
        MainWindow->resize(350, 200);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        result = new QLabel(centralwidget);
        result->setObjectName("result");
        result->setGeometry(QRect(90, -10, 361, 111));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        result->setFont(font);
        win = new QLabel(centralwidget);
        win->setObjectName("win");
        win->setGeometry(QRect(100, 80, 431, 91));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        font1.setKerning(true);
        win->setFont(font1);
        loss = new QLabel(centralwidget);
        loss->setObjectName("loss");
        loss->setGeometry(QRect(110, 220, 521, 101));
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(false);
        loss->setFont(font2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 403, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("Result game", "Result game", nullptr));
        result->setText(QCoreApplication::translate("Result game", "RESULT GAME", nullptr));
        win->setText(QCoreApplication::translate("Result game", "Player 1 (X): WIN", nullptr));
        loss->setText(QCoreApplication::translate("Result game", "Player2 (O): LOSES", nullptr));
    } // retranslateUi

};

 // namespace Ui

QT_END_NAMESPACE

#endif // RESULT_TICTACTOE_H
