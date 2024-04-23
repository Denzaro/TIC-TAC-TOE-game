/********************************************************************************
** Form generated from reading UI file 'option.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef OPTION_H
#define OPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Option: public QMainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_3;
    QPushButton *playagain;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *mode;
    QLabel *label;
    QPushButton *sound_3;
    QLabel *label_10;
    QPushButton *back_btn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(580, 196);
        MainWindow->setMaximumHeight(196);
        MainWindow->setMinimumHeight(196);
        MainWindow->setMaximumWidth(580);
        MainWindow->setMinimumWidth(580);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(13, 200, 178);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 60, 211, 91));
        label_3->setStyleSheet(QString::fromUtf8("border-image: url(:/myimage/image/shadow.png);\n"
"border-radius: 10px;"));
        playagain = new QPushButton(centralwidget);
        playagain->setObjectName("playagain");
        playagain->setGeometry(QRect(30, 60, 211, 81));
        QFont font;
        font.setFamilies({QString::fromUtf8("Showcard Gothic")});
        font.setPointSize(16);
        playagain->setFont(font);
        playagain->setStyleSheet(QString::fromUtf8("background-color:rgb(255,250,205);\n"
"border-radius: 10px;"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 80, 41, 41));
        label_4->setStyleSheet(QString::fromUtf8("image: url(:/myimage/image/retry.png);\n"
"background-color:rgb(255,250,205);"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(310, 60, 211, 91));
        label_5->setStyleSheet(QString::fromUtf8("border-image: url(:/myimage/image/shadow.png);\n"
"border-radius: 10px;"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(330, 80, 41, 41));
        label_6->setStyleSheet(QString::fromUtf8("border-image: url(:/myimage/image/Menu.png);\n"
"background-color:rgb(255,250,205);"));
        mode = new QPushButton(centralwidget);
        mode->setObjectName("mode");
        mode->setGeometry(QRect(310, 60, 211, 81));
        mode->setFont(font);
        mode->setStyleSheet(QString::fromUtf8("background-color:rgb(255,250,205);\n"
"border-radius: 10px;"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(330, 80, 41, 41));
        label->setStyleSheet(QString::fromUtf8("background-color:rgb(255,250,205);\n"
"border-image: url(:/myimage/image/Menu.png);\n"
""));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(10, 0, 51, 31));
        label_10->setStyleSheet(QString::fromUtf8("border-image: url(:/myimage/image/shadow.png);\n"
"border-image: url(:/myimage/image/shadow.png);\n"
"border-radius: 10px;"));
        back_btn = new QPushButton(centralwidget);
        back_btn->setObjectName("back_btn");
        back_btn->setGeometry(QRect(10, 0, 41, 31));
        back_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(32,178,170);\n"
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
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Options", nullptr));
        MainWindow->setWindowIcon(QIcon(":/myimage/image/background.png"));
        MainWindow->setWindowFlags( (windowFlags() | Qt::CustomizeWindowHint) & ~Qt::WindowMaximizeButtonHint);
        label_3->setText(QString());
        playagain->setText(QCoreApplication::translate("MainWindow", "             PLAY AGAIN", nullptr));
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        mode->setText(QCoreApplication::translate("MainWindow", "                GO TO MODE", nullptr));
        label->setText(QString());
        label_10->setText(QString());
        back_btn->setText(QString());
    } // retranslateUi

};


QT_END_NAMESPACE

#endif // OPTION_H
