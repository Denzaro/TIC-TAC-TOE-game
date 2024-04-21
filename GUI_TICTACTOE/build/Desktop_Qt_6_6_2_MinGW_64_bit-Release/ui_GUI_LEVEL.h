/********************************************************************************
** Form generated from reading UI file 'GUI_LEVEL.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_LEVEL_H
#define UI_GUI_LEVEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
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
    QLabel *background;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *Easy;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *Medium;
    QPushButton *Hard;
    QLabel *label_10;
    QPushButton *sound_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(580, 384);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(13, 200, 178);\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        background = new QLabel(centralwidget);
        background->setObjectName("background");
        background->setGeometry(QRect(200, 0, 181, 171));
        background->setStyleSheet(QString::fromUtf8("border-image: url(:/myimage/image/background.png);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 200, 71, 61));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/myimage/image/X.png);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(450, 290, 61, 51));
        label_3->setStyleSheet(QString::fromUtf8("border-image: url(:/myimage/image/O.png);"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(450, 60, 71, 61));
        label_4->setStyleSheet(QString::fromUtf8("border-image: url(:/myimage/image/X.png);"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(70, 40, 61, 51));
        label_5->setStyleSheet(QString::fromUtf8("border-image: url(:/myimage/image/O.png);"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(250, 180, 91, 41));
        label_6->setStyleSheet(QString::fromUtf8("border-image: url(:/myimage/image/shadow.png);\n"
"border-image: url(:/myimage/image/shadow.png);\n"
"border-radius: 10px;"));
        Easy = new QPushButton(centralwidget);
        Easy->setObjectName("Easy");
        Easy->setGeometry(QRect(250, 180, 91, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Showcard Gothic")});
        font.setPointSize(12);
        Easy->setFont(font);
        Easy->setStyleSheet(QString::fromUtf8("background-color: rgb(32,178,170);\n"
"color: rgb(255,250,205);\n"
"border-radius: 10px;\n"
"\n"
""));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(250, 240, 91, 41));
        label_7->setStyleSheet(QString::fromUtf8("border-image: url(:/myimage/image/shadow.png);\n"
"border-image: url(:/myimage/image/shadow.png);\n"
"border-radius: 10px;"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(250, 300, 91, 41));
        label_8->setStyleSheet(QString::fromUtf8("border-image: url(:/myimage/image/shadow.png);\n"
"border-image: url(:/myimage/image/shadow.png);\n"
"border-radius: 10px;"));
        Medium = new QPushButton(centralwidget);
        Medium->setObjectName("Medium");
        Medium->setGeometry(QRect(250, 240, 91, 31));
        Medium->setFont(font);
        Medium->setStyleSheet(QString::fromUtf8("background-color: rgb(32,178,170);\n"
"color: rgb(255,250,205);\n"
"border-radius: 10px;\n"
""));
        Hard = new QPushButton(centralwidget);
        Hard->setObjectName("Hard");
        Hard->setGeometry(QRect(250, 300, 91, 31));
        Hard->setFont(font);
        Hard->setStyleSheet(QString::fromUtf8("background-color: rgb(32,178,170);\n"
"color: rgb(255,250,205);\n"
"border-radius: 10px;"));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(10, 10, 51, 31));
        label_10->setStyleSheet(QString::fromUtf8("border-image: url(:/myimage/image/shadow.png);\n"
"border-image: url(:/myimage/image/shadow.png);\n"
"border-radius: 10px;"));
        sound_5 = new QPushButton(centralwidget);
        sound_5->setObjectName("sound_5");
        sound_5->setGeometry(QRect(10, 10, 41, 31));
        sound_5->setStyleSheet(QString::fromUtf8("background-color: rgb(32,178,170);\n"
"image: url(:/myimage/image/back.png);\n"
"border-radius: 10px;\n"
""));
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
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        background->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        Easy->setText(QCoreApplication::translate("MainWindow", "EASY", nullptr));
        label_7->setText(QString());
        label_8->setText(QString());
        Medium->setText(QCoreApplication::translate("MainWindow", "MEDIUM", nullptr));
        Hard->setText(QCoreApplication::translate("MainWindow", "HARD", nullptr));
        label_10->setText(QString());
        sound_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_LEVEL_H
