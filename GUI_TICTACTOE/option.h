/********************************************************************************
** Form generated from reading UI file 'option.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef OPTION_H
#define OPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include<main.h>

QT_BEGIN_NAMESPACE

class Option: public QMainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *mode;
    QPushButton *playagain;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("Option Game");
        MainWindow->resize(695, 465);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        playagain = new QPushButton(centralwidget);
        playagain->setObjectName("pushButton");
        playagain->setGeometry(QRect(60, 140, 241, 271));
        QFont font;
        font.setPointSize(20);
        playagain->setFont(font);
        mode = new QPushButton(centralwidget);
        mode->setObjectName("pushButton_2");
        mode->setGeometry(QRect(440, 140, 241, 271));
        mode->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("Option Game", "Option Game", nullptr));
        mode->setText(QCoreApplication::translate("Option Game", "GO TO MODE", nullptr));
       playagain->setText(QCoreApplication::translate("Option Game", "PLAY AGAIN", nullptr));
    } // retranslateUi

};


QT_END_NAMESPACE

#endif // OPTION_H
