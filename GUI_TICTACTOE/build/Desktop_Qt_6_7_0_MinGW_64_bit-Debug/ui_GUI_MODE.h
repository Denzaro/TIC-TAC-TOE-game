/********************************************************************************
** Form generated from reading UI file 'GUI_MODE.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_MODE_H
#define UI_GUI_MODE_H

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
    QLabel *title;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *Bot;
    QLabel *label_7;
    QPushButton *Person;
    QLabel *label_8;
    QPushButton *sound_3;
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
        title = new QLabel(centralwidget);
        title->setObjectName("title");
        title->setGeometry(QRect(190, 10, 201, 181));
        title->setStyleSheet(QString::fromUtf8("border-image: url(:/myimage/image/Title.png);"));
        title->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(180, 150, 61, 51));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/myimage/image/X.png);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(350, 170, 61, 51));
        label_3->setStyleSheet(QString::fromUtf8("border-image: url(:/myimage/image/O.png);"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(200, 220, 35, 31));
        label_4->setStyleSheet(QString::fromUtf8("border-image: url(:/myimage/image/person.png);"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(200, 290, 35, 31));
        label_5->setStyleSheet(QString::fromUtf8("border-image: url(:/myimage/image/people.png);"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(250, 220, 91, 51));
        label_6->setStyleSheet(QString::fromUtf8("border-image: url(:/myimage/image/shadow.png);\n"
"border-image: url(:/myimage/image/shadow.png);\n"
"border-radius: 10px;"));
        Bot = new QPushButton(centralwidget);
        Bot->setObjectName("Bot");
        Bot->setGeometry(QRect(250, 220, 91, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Showcard Gothic")});
        font.setPointSize(12);
        Bot->setFont(font);
        Bot->setStyleSheet(QString::fromUtf8("background-color: rgb(32,178,170);\n"
"color: rgb(255,250,205);\n"
"border-radius: 10px;\n"
""));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(250, 290, 91, 51));
        label_7->setStyleSheet(QString::fromUtf8("border-image: url(:/myimage/image/shadow.png);\n"
"border-image: url(:/myimage/image/shadow.png);\n"
"border-radius: 10px;"));
        Person = new QPushButton(centralwidget);
        Person->setObjectName("Person");
        Person->setGeometry(QRect(250, 290, 91, 41));
        Person->setFont(font);
        Person->setStyleSheet(QString::fromUtf8("background-color: rgb(32,178,170);\n"
"color: rgb(255,250,205);\n"
"border-radius: 10px;"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(520, 0, 51, 31));
        label_8->setStyleSheet(QString::fromUtf8("border-image: url(:/myimage/image/shadow.png);\n"
"border-image: url(:/myimage/image/shadow.png);\n"
"border-radius: 10px;"));
        sound_3 = new QPushButton(centralwidget);
        sound_3->setObjectName("sound_3");
        sound_3->setGeometry(QRect(530, 0, 41, 31));
        sound_3->setStyleSheet(QString::fromUtf8("background-color: rgb(32,178,170);\n"
"border-radius: 10px;\n"
"border-image: url(:/myimage/image/sound_on.png);\n"
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
        title->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        Bot->setText(QCoreApplication::translate("MainWindow", "1 PLAYER", nullptr));
        label_7->setText(QString());
        Person->setText(QCoreApplication::translate("MainWindow", "2 PLAYERS", nullptr));
        label_8->setText(QString());
        sound_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_MODE_H
