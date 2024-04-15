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

class Result : public QMainWindow
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
        MainWindow->resize(695, 465);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        result = new QLabel(centralwidget);
        result->setObjectName("result");
        result->setGeometry(QRect(230, 0, 300, 300));
        QFont font;
        font.setPointSize(20);
        result->setFont(font);
        win = new QLabel(centralwidget);
        win->setObjectName("win");
        win->setGeometry(QRect(170, 160, 271, 91));
        win->setFont(font);
        loss = new QLabel(centralwidget);
        loss->setObjectName("loss");
        loss->setGeometry(QRect(160, 300, 291, 101));
        loss->setFont(font);
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
        result->setText(QCoreApplication::translate("MainWindow", "RESULT", nullptr));
        win->setText(QCoreApplication::translate("MainWindow", "Player 1 (X): WIN", nullptr));
        loss->setText(QCoreApplication::translate("MainWindow", "Player2 (O): LOSES", nullptr));
    } // retranslateUi

};


QT_END_NAMESPACE

#endif // RESULT_TICTACTOE_H
