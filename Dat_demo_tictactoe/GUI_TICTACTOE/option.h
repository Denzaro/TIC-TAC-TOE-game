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
#include <NEW.h>
#include<main.h>

QT_BEGIN_NAMESPACE

class Option: public QMainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *playagain;
    QPushButton *mode;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
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
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        mode->setText(QCoreApplication::translate("MainWindow", "PLAY AGAIN", nullptr));
       playagain->setText(QCoreApplication::translate("MainWindow", "GO TO MODE", nullptr));
    } // retranslateUi

};


QT_END_NAMESPACE

#endif // OPTION_H
