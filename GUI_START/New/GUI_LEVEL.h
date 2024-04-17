/********************************************************************************
** Form generated from reading UI file 'GUI_LEVEL.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef GUI_LEVEL_H
#define GUI_LEVEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class LEVEL :public QMainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *Easy;
    QPushButton *Hard;
    QPushButton *sound_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(580, 384);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Easy = new QPushButton(centralwidget);
        Easy->setObjectName("Easy");
        Easy->setGeometry(QRect(270, 220, 81, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Stencil")});
        font.setPointSize(11);
        Easy->setFont(font);
        Easy->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        Hard = new QPushButton(centralwidget);
        Hard->setObjectName("Hard");
        Hard->setGeometry(QRect(270, 290, 81, 41));
        Hard->setFont(font);
        Hard->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        sound_2 = new QPushButton(centralwidget);
        sound_2->setObjectName("sound_2");
        sound_2->setGeometry(QRect(530, 10, 41, 41));
        sound_2->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"border-image: url(:/myimage/image/sound_on.png);"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 580, 18));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("GUI_LEVEL", "GUI_LEVEL", nullptr));
        Easy->setText(QCoreApplication::translate("MainWindow", "EASY", nullptr));
        Hard->setText(QCoreApplication::translate("MainWindow", "HARD", nullptr));
        sound_2->setText(QString());
    } // retranslateUi

};

QT_END_NAMESPACE

#endif // GUI_LEVEL_H
