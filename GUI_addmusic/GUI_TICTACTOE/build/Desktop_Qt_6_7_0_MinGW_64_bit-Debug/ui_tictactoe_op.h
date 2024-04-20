/********************************************************************************
** Form generated from reading UI file 'tictactoe_op.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TICTACTOE_OP_H
#define UI_TICTACTOE_OP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TicTacToe
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;
    QPushButton *pushButton_9;
    QPushButton *pushButton;
    QPushButton *pushButton_5;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QPushButton *Connect;
    QLabel *header;
    QLabel *Player1_sym;
    QLabel *Player2_sym;
    QLabel *player1_label;
    QLabel *player2_label;
    QLabel *player2_label_2;
    QLabel *Player2_sym_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TicTacToe)
    {
        if (TicTacToe->objectName().isEmpty())
            TicTacToe->setObjectName("TicTacToe");
        TicTacToe->resize(660, 530);
        TicTacToe->setStyleSheet(QString::fromUtf8("\n"
"\n"
"background: white;\n"
""));
        centralwidget = new QWidget(TicTacToe);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(20, 80, 402, 402));
        gridLayoutWidget->setMinimumSize(QSize(100, 100));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(100);
        sizePolicy.setVerticalStretch(100);
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(100, 100));
        QFont font;
        font.setPointSize(72);
        font.setWeight(QFont::Black);
        font.setKerning(true);
        pushButton_3->setFont(font);
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"		border:6 solid rgb(255, 181, 34);\n"
"		border-radius: 90;\n"
"		border-bottom: none;\n"
"border-left: none;\n"
"		background-color: rgb(13, 200, 178);\n"
"		color: rgb(255, 210, 76)\n"
"}\n"
"\n"
""));
        pushButton_3->setAutoDefault(true);

        gridLayout->addWidget(pushButton_3, 2, 0, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(100, 100));
        pushButton_2->setFont(font);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"		border:6 solid rgb(255, 181, 34);\n"
"		border-top: none;\n"
"		border-left: none;\n"
"		border-radius: 90;\n"
"		background-color: rgb(13, 200, 178);\n"
"		color: rgb(255, 210, 76)\n"
"}\n"
""));
        pushButton_2->setAutoDefault(true);

        gridLayout->addWidget(pushButton_2, 0, 0, 1, 1);

        pushButton_6 = new QPushButton(gridLayoutWidget);
        pushButton_6->setObjectName("pushButton_6");
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setMinimumSize(QSize(100, 100));
        pushButton_6->setFont(font);
        pushButton_6->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"		border:6 solid rgb(255, 181, 34);\n"
"		border-radius: 90;\n"
"border-bottom: none;\n"
"		background-color: rgb(13, 200, 178);\n"
"		color: rgb(255, 210, 76)\n"
"}\n"
"\n"
""));
        pushButton_6->setAutoDefault(true);

        gridLayout->addWidget(pushButton_6, 2, 1, 1, 1);

        pushButton_4 = new QPushButton(gridLayoutWidget);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMinimumSize(QSize(100, 100));
        pushButton_4->setFont(font);
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"		border:6 solid rgb(255, 181, 34);\n"
"		border-top: none;\n"
"		border-radius: 90;\n"
"		background-color: rgb(13, 200, 178);\n"
"		color: rgb(255, 210, 76)\n"
"}\n"
"\n"
""));
        pushButton_4->setAutoDefault(true);

        gridLayout->addWidget(pushButton_4, 0, 1, 1, 1);

        pushButton_9 = new QPushButton(gridLayoutWidget);
        pushButton_9->setObjectName("pushButton_9");
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);
        pushButton_9->setMinimumSize(QSize(100, 100));
        pushButton_9->setFont(font);
        pushButton_9->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"		border:6 solid rgb(255, 181, 34);\n"
"		border-radius: 90;\n"
"border-bottom: none;\n"
"border-right: none;\n"
"		background-color: rgb(13, 200, 178);\n"
"		color: rgb(255, 210, 76)\n"
"}\n"
"\n"
""));
        pushButton_9->setAutoDefault(true);

        gridLayout->addWidget(pushButton_9, 2, 2, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName("pushButton");
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(100, 100));
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setContextMenuPolicy(Qt::NoContextMenu);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"		border:6 solid rgb(255, 181, 34);\n"
"		border-radius: 90;\n"
"border-left: none;\n"
"		background-color: rgb(13, 200, 178);\n"
"		color: rgb(255, 210, 76)\n"
"}\n"
"\n"
""));
        pushButton->setIconSize(QSize(100, 100));
        pushButton->setAutoDefault(true);

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);

        pushButton_5 = new QPushButton(gridLayoutWidget);
        pushButton_5->setObjectName("pushButton_5");
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setMinimumSize(QSize(100, 100));
        pushButton_5->setFont(font);
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"		border:6 solid rgb(255, 181, 34);\n"
"		border-radius: 90;\n"
"		background-color: rgb(13, 200, 178);\n"
"		color: rgb(255, 210, 76)\n"
"}\n"
"\n"
""));
        pushButton_5->setAutoDefault(true);

        gridLayout->addWidget(pushButton_5, 1, 1, 1, 1);

        pushButton_8 = new QPushButton(gridLayoutWidget);
        pushButton_8->setObjectName("pushButton_8");
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        pushButton_8->setMinimumSize(QSize(100, 100));
        pushButton_8->setFont(font);
        pushButton_8->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"		border:6 solid rgb(255, 181, 34);\n"
"		border-radius: 90;\n"
"border-right: none;\n"
"		background-color: rgb(13, 200, 178);\n"
"		color: rgb(255, 210, 76)\n"
"}\n"
"\n"
""));
        pushButton_8->setAutoDefault(true);

        gridLayout->addWidget(pushButton_8, 1, 2, 1, 1);

        pushButton_7 = new QPushButton(gridLayoutWidget);
        pushButton_7->setObjectName("pushButton_7");
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setMinimumSize(QSize(100, 100));
        pushButton_7->setFont(font);
        pushButton_7->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"		border:6 solid rgb(255, 181, 34);\n"
"		border-top: none;\n"
"		border-right: none;\n"
"		border-radius: 90;\n"
"		background-color: rgb(13, 200, 178);\n"
"		color: rgb(255, 210, 76)\n"
"}\n"
""));
        pushButton_7->setAutoDefault(true);

        gridLayout->addWidget(pushButton_7, 0, 2, 1, 1);

        Connect = new QPushButton(centralwidget);
        Connect->setObjectName("Connect");
        Connect->setGeometry(QRect(540, 430, 81, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font1.setPointSize(16);
        font1.setBold(true);
        Connect->setFont(font1);
        Connect->setAutoFillBackground(false);
        Connect->setStyleSheet(QString::fromUtf8("background-color: rgb(13, 200, 178);\n"
"color: rgb(255, 210, 76);\n"
"border: 2px solid rgb(255, 210, 76);\n"
"border-radius: 15px;\n"
""));
        header = new QLabel(centralwidget);
        header->setObjectName("header");
        header->setGeometry(QRect(180, 0, 351, 51));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Showcard Gothic")});
        font2.setPointSize(36);
        header->setFont(font2);
        header->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(255, 210, 76)"));
        header->setAlignment(Qt::AlignCenter);
        Player1_sym = new QLabel(centralwidget);
        Player1_sym->setObjectName("Player1_sym");
        Player1_sym->setGeometry(QRect(590, 110, 41, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font3.setPointSize(36);
        font3.setBold(true);
        Player1_sym->setFont(font3);
        Player1_sym->setStyleSheet(QString::fromUtf8("color: rgb(255, 210, 76)"));
        Player1_sym->setAlignment(Qt::AlignCenter);
        Player2_sym = new QLabel(centralwidget);
        Player2_sym->setObjectName("Player2_sym");
        Player2_sym->setGeometry(QRect(590, 170, 41, 31));
        Player2_sym->setFont(font3);
        Player2_sym->setStyleSheet(QString::fromUtf8("color: rgb(255, 210, 76)"));
        Player2_sym->setAlignment(Qt::AlignCenter);
        player1_label = new QLabel(centralwidget);
        player1_label->setObjectName("player1_label");
        player1_label->setGeometry(QRect(440, 110, 141, 31));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font4.setPointSize(28);
        font4.setBold(true);
        player1_label->setFont(font4);
        player1_label->setStyleSheet(QString::fromUtf8("color: rgb(13, 200, 178);"));
        player2_label = new QLabel(centralwidget);
        player2_label->setObjectName("player2_label");
        player2_label->setGeometry(QRect(440, 170, 141, 31));
        player2_label->setFont(font4);
        player2_label->setStyleSheet(QString::fromUtf8("color: rgb(13, 200, 178);"));
        player2_label_2 = new QLabel(centralwidget);
        player2_label_2->setObjectName("player2_label_2");
        player2_label_2->setGeometry(QRect(440, 270, 141, 31));
        player2_label_2->setFont(font4);
        player2_label_2->setStyleSheet(QString::fromUtf8("color: rgb(13, 200, 178);"));
        Player2_sym_2 = new QLabel(centralwidget);
        Player2_sym_2->setObjectName("Player2_sym_2");
        Player2_sym_2->setGeometry(QRect(540, 260, 51, 51));
        Player2_sym_2->setFont(font3);
        Player2_sym_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 210, 76)"));
        Player2_sym_2->setAlignment(Qt::AlignCenter);
        TicTacToe->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TicTacToe);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 660, 17));
        TicTacToe->setMenuBar(menubar);
        statusbar = new QStatusBar(TicTacToe);
        statusbar->setObjectName("statusbar");
        TicTacToe->setStatusBar(statusbar);

        retranslateUi(TicTacToe);

        pushButton_3->setDefault(true);
        pushButton_2->setDefault(true);
        pushButton_6->setDefault(true);
        pushButton_4->setDefault(true);
        pushButton_9->setDefault(true);
        pushButton->setDefault(true);
        pushButton_5->setDefault(true);
        pushButton_8->setDefault(true);
        pushButton_7->setDefault(true);


        QMetaObject::connectSlotsByName(TicTacToe);
    } // setupUi

    void retranslateUi(QMainWindow *TicTacToe)
    {
        TicTacToe->setWindowTitle(QCoreApplication::translate("TicTacToe", "MainWindow", nullptr));
        pushButton_3->setText(QCoreApplication::translate("TicTacToe", "X", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TicTacToe", "X", nullptr));
        pushButton_6->setText(QCoreApplication::translate("TicTacToe", "X", nullptr));
        pushButton_4->setText(QCoreApplication::translate("TicTacToe", "X", nullptr));
        pushButton_9->setText(QCoreApplication::translate("TicTacToe", "X", nullptr));
        pushButton->setText(QCoreApplication::translate("TicTacToe", "X", nullptr));
        pushButton_5->setText(QCoreApplication::translate("TicTacToe", "X", nullptr));
        pushButton_8->setText(QCoreApplication::translate("TicTacToe", "X", nullptr));
        pushButton_7->setText(QCoreApplication::translate("TicTacToe", "X", nullptr));
        Connect->setText(QCoreApplication::translate("TicTacToe", "Options", nullptr));
        header->setText(QCoreApplication::translate("TicTacToe", "Tic Tac Toe", nullptr));
        Player1_sym->setText(QCoreApplication::translate("TicTacToe", "X", nullptr));
        Player2_sym->setText(QCoreApplication::translate("TicTacToe", "O", nullptr));
        player1_label->setText(QCoreApplication::translate("TicTacToe", "PLAYER 1: ", nullptr));
        player2_label->setText(QCoreApplication::translate("TicTacToe", "PLAYER 2:", nullptr));
        player2_label_2->setText(QCoreApplication::translate("TicTacToe", "TURN:", nullptr));
        Player2_sym_2->setText(QCoreApplication::translate("TicTacToe", "O", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TicTacToe: public Ui_TicTacToe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TICTACTOE_OP_H
