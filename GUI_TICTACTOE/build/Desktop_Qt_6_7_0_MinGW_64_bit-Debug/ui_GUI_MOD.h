/********************************************************************************
** Form generated from reading UI file 'GUI_MOD.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_MOD_H
#define UI_GUI_MOD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *Bot;
    QPushButton *Person;
    QPushButton *sound;
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
        Bot = new QPushButton(centralwidget);
        Bot->setObjectName("Bot");
        Bot->setGeometry(QRect(270, 220, 81, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Stencil")});
        font.setPointSize(11);
        Bot->setFont(font);
        Bot->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        Person = new QPushButton(centralwidget);
        Person->setObjectName("Person");
        Person->setGeometry(QRect(270, 290, 81, 41));
        Person->setFont(font);
        Person->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        sound = new QPushButton(centralwidget);
        sound->setObjectName("sound");
        sound->setGeometry(QRect(530, 10, 41, 41));
        sound->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"image:url(:/myimage/image/sound_on.png)"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 580, 17));
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
        Bot->setText(QCoreApplication::translate("MainWindow", "1 PLAYER", nullptr));
        Person->setText(QCoreApplication::translate("MainWindow", "2 PLAYERS", nullptr));
        sound->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_MOD_H