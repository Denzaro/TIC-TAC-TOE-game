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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *result;
    QLabel *label;
    QLabel *label_2;
    QLabel *win;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_9;
    QPushButton *sound;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(580, 384);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(13, 200, 178);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        result = new QLabel(centralwidget);
        result->setObjectName("result");
        result->setGeometry(QRect(160, 0, 261, 61));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        result->setFont(font);
        result->setStyleSheet(QString::fromUtf8("border-image: url(:/myimage/image/Result.png);\n"
""));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 50, 271, 271));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/myimage/image/table.png);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(280, 80, 51, 51));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/myimage/image/cup-star.png);\n"
"background-color:rgb(255,250,205);"));
        win = new QLabel(centralwidget);
        win->setObjectName("win");
        win->setGeometry(QRect(220, 170, 201, 91));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Showcard Gothic")});
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        font1.setKerning(true);
        win->setFont(font1);
        win->setStyleSheet(QString::fromUtf8("background-color:rgb(255,250,205);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(240, 90, 41, 41));
        label_3->setStyleSheet(QString::fromUtf8("background-color:rgb(255,250,205);\n"
"border-image: url(:/myimage/image/cup-1.png);"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(330, 90, 41, 41));
        label_4->setStyleSheet(QString::fromUtf8("background-color:rgb(255,250,205);\n"
"border-image: url(:/myimage/image/cup-1.png);"));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(520, 0, 51, 31));
        label_9->setStyleSheet(QString::fromUtf8("border-image: url(:/myimage/image/shadow.png);\n"
"border-image: url(:/myimage/image/shadow.png);\n"
"border-image: url(:/myimage/image/shadow.png);\n"
"border-radius: 10px;"));
        sound = new QPushButton(centralwidget);
        sound->setObjectName("sound");
        sound->setGeometry(QRect(530, 0, 41, 31));
        sound->setStyleSheet(QString::fromUtf8("background-color: rgb(32,178,170);\n"
"border-radius: 10px;\n"
"image: url(:/myimage/image/sound_on.png);"));
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
        result->setText(QString());
        label->setText(QString());
        label_2->setText(QString());
        win->setText(QCoreApplication::translate("MainWindow", "Player 1 (X): WIN", nullptr));
        label_3->setText(QString());
        label_4->setText(QString());
        label_9->setText(QString());
        sound->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULT_TICTACTOE_H
