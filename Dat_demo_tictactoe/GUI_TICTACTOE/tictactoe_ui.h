/********************************************************************************
** Form generated from reading UI file 'tictactoe.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef TICTACTOE_H
#define TICTACTOE_H

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
    QLabel *label;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_1_0;
    QPushButton *pushButton_2_0;
    QPushButton *pushButton_0_1;
    QPushButton *pushButton_2_1;
    QPushButton *pushButton_1_1;
    QPushButton *pushButton_0_0;
    QPushButton *pushButton_0_2;
    QPushButton *pushButton_1_2;
    QPushButton *pushButton_2_2;
    QPushButton *Connect;
    QLabel *label_turn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(686, 465);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(250, 0, 181, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(10);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 50, 681, 316));
        gridLayoutWidget->setMinimumSize(QSize(100, 100));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setHorizontalSpacing(1);
        gridLayout->setVerticalSpacing(2);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_1_0 = new QPushButton(gridLayoutWidget);
        pushButton_1_0->setObjectName("pushButton_1_0");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(100);
        sizePolicy.setVerticalStretch(100);
        sizePolicy.setHeightForWidth(pushButton_1_0->sizePolicy().hasHeightForWidth());
        pushButton_1_0->setSizePolicy(sizePolicy);
        pushButton_1_0->setMinimumSize(QSize(100, 100));
        QFont font1;
        font1.setPointSize(36);
        pushButton_1_0->setFont(font1);

        gridLayout->addWidget(pushButton_1_0, 1, 0, 1, 1);

        pushButton_2_0 = new QPushButton(gridLayoutWidget);
        pushButton_2_0->setObjectName("pushButton_2_0");
        sizePolicy.setHeightForWidth(pushButton_2_0->sizePolicy().hasHeightForWidth());
        pushButton_2_0->setSizePolicy(sizePolicy);
        pushButton_2_0->setMinimumSize(QSize(100, 100));
        pushButton_2_0->setFont(font1);

        gridLayout->addWidget(pushButton_2_0, 2, 0, 1, 1);

        pushButton_0_1 = new QPushButton(gridLayoutWidget);
        pushButton_0_1->setObjectName("pushButton_0_1");
        sizePolicy.setHeightForWidth(pushButton_0_1->sizePolicy().hasHeightForWidth());
        pushButton_0_1->setSizePolicy(sizePolicy);
        pushButton_0_1->setMinimumSize(QSize(100, 100));
        pushButton_0_1->setFont(font1);

        gridLayout->addWidget(pushButton_0_1, 0, 1, 1, 1);

        pushButton_2_1 = new QPushButton(gridLayoutWidget);
        pushButton_2_1->setObjectName("pushButton_2_1");
        sizePolicy.setHeightForWidth(pushButton_2_1->sizePolicy().hasHeightForWidth());
        pushButton_2_1->setSizePolicy(sizePolicy);
        pushButton_2_1->setMinimumSize(QSize(100, 100));
        pushButton_2_1->setFont(font1);

        gridLayout->addWidget(pushButton_2_1, 2, 1, 1, 1);

        pushButton_1_1 = new QPushButton(gridLayoutWidget);
        pushButton_1_1->setObjectName("pushButton_1_1");
        sizePolicy.setHeightForWidth(pushButton_1_1->sizePolicy().hasHeightForWidth());
        pushButton_1_1->setSizePolicy(sizePolicy);
        pushButton_1_1->setMinimumSize(QSize(100, 100));
        pushButton_1_1->setFont(font1);

        gridLayout->addWidget(pushButton_1_1, 1, 1, 1, 1);

        pushButton_0_0 = new QPushButton(gridLayoutWidget);
        pushButton_0_0->setObjectName("pushButton_0_0");
        sizePolicy.setHeightForWidth(pushButton_0_0->sizePolicy().hasHeightForWidth());
        pushButton_0_0->setSizePolicy(sizePolicy);
        pushButton_0_0->setMinimumSize(QSize(100, 100));
        pushButton_0_0->setFont(font1);
        pushButton_0_0->setCheckable(false);

        gridLayout->addWidget(pushButton_0_0, 0, 0, 1, 1);

        pushButton_0_2 = new QPushButton(gridLayoutWidget);
        pushButton_0_2->setObjectName("pushButton_0_2");
        sizePolicy.setHeightForWidth(pushButton_0_2->sizePolicy().hasHeightForWidth());
        pushButton_0_2->setSizePolicy(sizePolicy);
        pushButton_0_2->setMinimumSize(QSize(100, 100));
        pushButton_0_2->setFont(font1);

        gridLayout->addWidget(pushButton_0_2, 0, 2, 1, 1);

        pushButton_1_2 = new QPushButton(gridLayoutWidget);
        pushButton_1_2->setObjectName("pushButton_1_2");
        sizePolicy.setHeightForWidth(pushButton_1_2->sizePolicy().hasHeightForWidth());
        pushButton_1_2->setSizePolicy(sizePolicy);
        pushButton_1_2->setMinimumSize(QSize(100, 100));
        pushButton_1_2->setFont(font1);

        gridLayout->addWidget(pushButton_1_2, 1, 2, 1, 1);

        pushButton_2_2 = new QPushButton(gridLayoutWidget);
        pushButton_2_2->setObjectName("pushButton_2_2");
        sizePolicy.setHeightForWidth(pushButton_2_2->sizePolicy().hasHeightForWidth());
        pushButton_2_2->setSizePolicy(sizePolicy);
        pushButton_2_2->setMinimumSize(QSize(100, 100));
        pushButton_2_2->setFont(font1);

        gridLayout->addWidget(pushButton_2_2, 2, 2, 1, 1);

        label_turn = new QLabel(centralwidget);
        label_turn->setObjectName("label_turn");
        label_turn->setGeometry(QRect(10, 380, 651, 31));
        label_turn->setFont(font);
        label_turn->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        Connect = new QPushButton(centralwidget);
        Connect->setObjectName("Connect");
        Connect->setGeometry(QRect(50, 410, 93, 28));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 686, 26));
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
        label->setText(QCoreApplication::translate("MainWindow", "TIC - TAC -TOE", nullptr));
        pushButton_1_0->setText(QCoreApplication::translate("MainWindow", " ", nullptr));
        pushButton_2_0->setText(QCoreApplication::translate("MainWindow", " ", nullptr));
        pushButton_0_1->setText(QCoreApplication::translate("MainWindow", " ", nullptr));
        pushButton_2_1->setText(QCoreApplication::translate("MainWindow", " ", nullptr));
        pushButton_1_1->setText(QCoreApplication::translate("MainWindow", " ", nullptr));
        pushButton_0_0->setText(QCoreApplication::translate("MainWindow", " ", nullptr));
        pushButton_0_2->setText(QCoreApplication::translate("MainWindow", " ", nullptr));
        pushButton_1_2->setText(QCoreApplication::translate("MainWindow", " ", nullptr));
        pushButton_2_2->setText(QCoreApplication::translate("MainWindow", " ", nullptr));
        label_turn->setText(QCoreApplication::translate("MainWindow", "X turn", nullptr));
        Connect->setText(QCoreApplication::translate("MainWindow", "PLAY AGAIN", nullptr));
    } // retranslateUi



};

// namespace Ui {
//     class MainWindow: public Ui_MainWindow {};
// } // namespace Ui

QT_END_NAMESPACE

#endif // TICTACTOE_H
