/********************************************************************************
** Form generated from reading UI file 'tictactoe_ui.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef TICTACTOE_UI_H
#define TICTACTOE_UI_H

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

class MainWindow:public QMainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_2_0;
    QPushButton *pushButton_0_0;
    QPushButton *pushButton_2_1;
    QPushButton *pushButton_0_1;
    QPushButton *pushButton_2_2;
    QPushButton *pushButton_1_0;
    QPushButton *pushButton_1_1;
    QPushButton *pushButton_1_2;
    QPushButton *pushButton_0_2;
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
"background: rgb(229, 255, 253);\n"
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
        pushButton_2_0 = new QPushButton(gridLayoutWidget);
        pushButton_2_0->setObjectName("pushButton_2_0");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(100);
        sizePolicy.setVerticalStretch(100);
        sizePolicy.setHeightForWidth(pushButton_2_0->sizePolicy().hasHeightForWidth());
        pushButton_2_0->setSizePolicy(sizePolicy);
        pushButton_2_0->setMinimumSize(QSize(100, 100));
        QFont font;
        font.setPointSize(72);
        font.setWeight(QFont::Black);
        font.setKerning(true);
        pushButton_2_0->setFont(font);
        pushButton_2_0->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"		border:6 solid rgb(255, 181, 34);\n"
"		border-radius: 90;\n"
"		border-bottom: none;\n"
"border-left: none;\n"
"		background-color: rgb(13, 200, 178);\n"
"		color: rgb(255, 210, 76)\n"
"}\n"
"\n"
""));
        pushButton_2_0->setAutoDefault(true);

        gridLayout->addWidget(pushButton_2_0, 2, 0, 1, 1);

        pushButton_0_0 = new QPushButton(gridLayoutWidget);
        pushButton_0_0->setObjectName("pushButton_0_0");
        sizePolicy.setHeightForWidth(pushButton_0_0->sizePolicy().hasHeightForWidth());
        pushButton_0_0->setSizePolicy(sizePolicy);
        pushButton_0_0->setMinimumSize(QSize(100, 100));
        pushButton_0_0->setFont(font);
        pushButton_0_0->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_0_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"		border:6 solid rgb(255, 181, 34);\n"
"		border-top: none;\n"
"		border-left: none;\n"
"		border-radius: 90;\n"
"		background-color: rgb(13, 200, 178);\n"
"		color: rgb(255, 210, 76)\n"
"}\n"
""));
        pushButton_0_0->setAutoDefault(true);

        gridLayout->addWidget(pushButton_0_0, 0, 0, 1, 1);

        pushButton_2_1 = new QPushButton(gridLayoutWidget);
        pushButton_2_1->setObjectName("pushButton_2_1");
        sizePolicy.setHeightForWidth(pushButton_2_1->sizePolicy().hasHeightForWidth());
        pushButton_2_1->setSizePolicy(sizePolicy);
        pushButton_2_1->setMinimumSize(QSize(100, 100));
        pushButton_2_1->setFont(font);
        pushButton_2_1->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"		border:6 solid rgb(255, 181, 34);\n"
"		border-radius: 90;\n"
"border-bottom: none;\n"
"		background-color: rgb(13, 200, 178);\n"
"		color: rgb(255, 210, 76)\n"
"}\n"
"\n"
""));
        pushButton_2_1->setAutoDefault(true);

        gridLayout->addWidget(pushButton_2_1, 2, 1, 1, 1);

        pushButton_0_1 = new QPushButton(gridLayoutWidget);
        pushButton_0_1->setObjectName("pushButton_0_1");
        sizePolicy.setHeightForWidth(pushButton_0_1->sizePolicy().hasHeightForWidth());
        pushButton_0_1->setSizePolicy(sizePolicy);
        pushButton_0_1->setMinimumSize(QSize(100, 100));
        pushButton_0_1->setFont(font);
        pushButton_0_1->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_0_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"		border:6 solid rgb(255, 181, 34);\n"
"		border-top: none;\n"
"		border-radius: 90;\n"
"		background-color: rgb(13, 200, 178);\n"
"		color: rgb(255, 210, 76)\n"
"}\n"
"\n"
""));
        pushButton_0_1->setAutoDefault(true);

        gridLayout->addWidget(pushButton_0_1, 0, 1, 1, 1);

        pushButton_2_2 = new QPushButton(gridLayoutWidget);
        pushButton_2_2->setObjectName("pushButton_2_2");
        sizePolicy.setHeightForWidth(pushButton_2_2->sizePolicy().hasHeightForWidth());
        pushButton_2_2->setSizePolicy(sizePolicy);
        pushButton_2_2->setMinimumSize(QSize(100, 100));
        pushButton_2_2->setFont(font);
        pushButton_2_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"		border:6 solid rgb(255, 181, 34);\n"
"		border-radius: 90;\n"
"border-bottom: none;\n"
"border-right: none;\n"
"		background-color: rgb(13, 200, 178);\n"
"		color: rgb(255, 210, 76)\n"
"}\n"
"\n"
""));
        pushButton_2_2->setAutoDefault(true);

        gridLayout->addWidget(pushButton_2_2, 2, 2, 1, 1);

        pushButton_1_0 = new QPushButton(gridLayoutWidget);
        pushButton_1_0->setObjectName("pushButton_1_0");
        sizePolicy.setHeightForWidth(pushButton_1_0->sizePolicy().hasHeightForWidth());
        pushButton_1_0->setSizePolicy(sizePolicy);
        pushButton_1_0->setMinimumSize(QSize(100, 100));
        pushButton_1_0->setFont(font);
        pushButton_1_0->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_1_0->setContextMenuPolicy(Qt::NoContextMenu);
        pushButton_1_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"		border:6 solid rgb(255, 181, 34);\n"
"		border-radius: 90;\n"
"border-left: none;\n"
"		background-color: rgb(13, 200, 178);\n"
"		color: rgb(255, 210, 76)\n"
"}\n"
"\n"
""));
        pushButton_1_0->setIconSize(QSize(100, 100));
        pushButton_1_0->setAutoDefault(true);

        gridLayout->addWidget(pushButton_1_0, 1, 0, 1, 1);

        pushButton_1_1 = new QPushButton(gridLayoutWidget);
        pushButton_1_1->setObjectName("pushButton_1_1");
        sizePolicy.setHeightForWidth(pushButton_1_1->sizePolicy().hasHeightForWidth());
        pushButton_1_1->setSizePolicy(sizePolicy);
        pushButton_1_1->setMinimumSize(QSize(100, 100));
        pushButton_1_1->setFont(font);
        pushButton_1_1->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_1_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"		border:6 solid rgb(255, 181, 34);\n"
"		border-radius: 90;\n"
"		background-color: rgb(13, 200, 178);\n"
"		color: rgb(255, 210, 76)\n"
"}\n"
"\n"
""));
        pushButton_1_1->setAutoDefault(true);

        gridLayout->addWidget(pushButton_1_1, 1, 1, 1, 1);

        pushButton_1_2 = new QPushButton(gridLayoutWidget);
        pushButton_1_2->setObjectName("pushButton_1_2");
        sizePolicy.setHeightForWidth(pushButton_1_2->sizePolicy().hasHeightForWidth());
        pushButton_1_2->setSizePolicy(sizePolicy);
        pushButton_1_2->setMinimumSize(QSize(100, 100));
        pushButton_1_2->setFont(font);
        pushButton_1_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_1_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"		border:6 solid rgb(255, 181, 34);\n"
"		border-radius: 90;\n"
"border-right: none;\n"
"		background-color: rgb(13, 200, 178);\n"
"		color: rgb(255, 210, 76)\n"
"}\n"
"\n"
""));
        pushButton_1_2->setAutoDefault(true);

        gridLayout->addWidget(pushButton_1_2, 1, 2, 1, 1);

        pushButton_0_2 = new QPushButton(gridLayoutWidget);
        pushButton_0_2->setObjectName("pushButton_0_2");
        sizePolicy.setHeightForWidth(pushButton_0_2->sizePolicy().hasHeightForWidth());
        pushButton_0_2->setSizePolicy(sizePolicy);
        pushButton_0_2->setMinimumSize(QSize(100, 100));
        pushButton_0_2->setFont(font);
        pushButton_0_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_0_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"		border:6 solid rgb(255, 181, 34);\n"
"		border-top: none;\n"
"		border-right: none;\n"
"		border-radius: 90;\n"
"		background-color: rgb(13, 200, 178);\n"
"		color: rgb(255, 210, 76)\n"
"}\n"
""));
        pushButton_0_2->setAutoDefault(true);

        gridLayout->addWidget(pushButton_0_2, 0, 2, 1, 1);

        Connect = new QPushButton(centralwidget);
        Connect->setObjectName("Connect");
        Connect->setGeometry(QRect(510, 420, 121, 61));
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
        Player1_sym->setGeometry(QRect(590, 100, 41, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font3.setPointSize(36);
        font3.setBold(true);
        Player1_sym->setFont(font3);
        Player1_sym->setStyleSheet(QString::fromUtf8("color: rgb(255, 210, 76)"));
        Player1_sym->setAlignment(Qt::AlignCenter);
        Player2_sym = new QLabel(centralwidget);
        Player2_sym->setObjectName("Player2_sym");
        Player2_sym->setGeometry(QRect(590, 160, 41, 51));
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
        player2_label_2->setGeometry(QRect(440, 270, 151, 51));
        player2_label_2->setFont(font4);
        player2_label_2->setStyleSheet(QString::fromUtf8("color: rgb(13, 200, 178);"));
        Player2_sym_2 = new QLabel(centralwidget);
        Player2_sym_2->setObjectName("Player2_sym_2");
        Player2_sym_2->setGeometry(QRect(580, 270, 51, 51));
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

        pushButton_2_0->setDefault(true);
        pushButton_0_0->setDefault(true);
        pushButton_2_1->setDefault(true);
        pushButton_0_1->setDefault(true);
        pushButton_2_2->setDefault(true);
        pushButton_1_0->setDefault(true);
        pushButton_1_1->setDefault(true);
        pushButton_1_2->setDefault(true);
        pushButton_0_2->setDefault(true);


        QMetaObject::connectSlotsByName(TicTacToe);
    } // setupUi

    void retranslateUi(QMainWindow *TicTacToe)
    {
        TicTacToe->setWindowTitle(QCoreApplication::translate("TicTacToe", "TicTacToe", nullptr));
        TicTacToe->setWindowIcon(QIcon(":/myimage/image/background.png"));
        TicTacToe->setWindowFlags( (windowFlags() | Qt::CustomizeWindowHint) & ~Qt::WindowMaximizeButtonHint);
        pushButton_2_0->setText(QString());
        pushButton_0_0->setText(QString());
        pushButton_2_1->setText(QString());
        pushButton_0_1->setText(QString());
        pushButton_2_2->setText(QString());
        pushButton_1_0->setText(QString());
        pushButton_1_1->setText(QString());
        pushButton_1_2->setText(QString());
        pushButton_0_2->setText(QString());
        Connect->setText(QCoreApplication::translate("TicTacToe", "Options", nullptr));
        header->setText(QCoreApplication::translate("TicTacToe", "Tic Tac Toe", nullptr));
        Player1_sym->setText(QCoreApplication::translate("TicTacToe", "X", nullptr));
        Player2_sym->setText(QCoreApplication::translate("TicTacToe", "O", nullptr));
        player1_label->setText(QCoreApplication::translate("TicTacToe", "PLAYER 1: ", nullptr));
        player2_label->setText(QCoreApplication::translate("TicTacToe", "PLAYER 2:", nullptr));
        player2_label_2->setText(QCoreApplication::translate("TicTacToe", "TURN:", nullptr));
        Player2_sym_2->setText(QCoreApplication::translate("TicTacToe", "X", nullptr));
    } // retranslateUi
};


QT_END_NAMESPACE

#endif // TICTACTOE_UI_H
