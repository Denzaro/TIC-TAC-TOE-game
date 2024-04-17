# -*- coding: utf-8 -*-

################################################################################
## Form generated from reading UI file 'tictactoe_op.ui'
##
## Created by: Qt User Interface Compiler version 6.5.3
##
## WARNING! All changes made in this file will be lost when recompiling UI file!
################################################################################

from PySide6.QtCore import (QCoreApplication, QDate, QDateTime, QLocale,
    QMetaObject, QObject, QPoint, QRect,
    QSize, QTime, QUrl, Qt)
from PySide6.QtGui import (QBrush, QColor, QConicalGradient, QCursor,
    QFont, QFontDatabase, QGradient, QIcon,
    QImage, QKeySequence, QLinearGradient, QPainter,
    QPalette, QPixmap, QRadialGradient, QTransform)
from PySide6.QtWidgets import (QApplication, QGridLayout, QLabel, QMainWindow,
    QMenuBar, QPushButton, QSizePolicy, QStatusBar,
    QWidget)

class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        if not MainWindow.objectName():
            MainWindow.setObjectName(u"MainWindow")
        MainWindow.resize(686, 465)
        self.centralwidget = QWidget(MainWindow)
        self.centralwidget.setObjectName(u"centralwidget")
        self.label = QLabel(self.centralwidget)
        self.label.setObjectName(u"label")
        self.label.setGeometry(QRect(250, 0, 181, 51))
        font = QFont()
        font.setFamilies([u"Times New Roman"])
        font.setPointSize(10)
        font.setBold(True)
        self.label.setFont(font)
        self.label.setAlignment(Qt.AlignCenter)
        self.gridLayoutWidget = QWidget(self.centralwidget)
        self.gridLayoutWidget.setObjectName(u"gridLayoutWidget")
        self.gridLayoutWidget.setGeometry(QRect(0, 50, 681, 316))
        self.gridLayoutWidget.setMinimumSize(QSize(100, 100))
        self.gridLayout = QGridLayout(self.gridLayoutWidget)
        self.gridLayout.setObjectName(u"gridLayout")
        self.gridLayout.setHorizontalSpacing(1)
        self.gridLayout.setVerticalSpacing(2)
        self.gridLayout.setContentsMargins(0, 0, 0, 0)
        self.pushButton = QPushButton(self.gridLayoutWidget)
        self.pushButton.setObjectName(u"pushButton")
        sizePolicy = QSizePolicy(QSizePolicy.Minimum, QSizePolicy.Fixed)
        sizePolicy.setHorizontalStretch(100)
        sizePolicy.setVerticalStretch(100)
        sizePolicy.setHeightForWidth(self.pushButton.sizePolicy().hasHeightForWidth())
        self.pushButton.setSizePolicy(sizePolicy)
        self.pushButton.setMinimumSize(QSize(100, 100))
        font1 = QFont()
        font1.setPointSize(36)
        self.pushButton.setFont(font1)

        self.gridLayout.addWidget(self.pushButton, 1, 0, 1, 1)

        self.pushButton_3 = QPushButton(self.gridLayoutWidget)
        self.pushButton_3.setObjectName(u"pushButton_3")
        sizePolicy.setHeightForWidth(self.pushButton_3.sizePolicy().hasHeightForWidth())
        self.pushButton_3.setSizePolicy(sizePolicy)
        self.pushButton_3.setMinimumSize(QSize(100, 100))
        self.pushButton_3.setFont(font1)

        self.gridLayout.addWidget(self.pushButton_3, 2, 0, 1, 1)

        self.pushButton_4 = QPushButton(self.gridLayoutWidget)
        self.pushButton_4.setObjectName(u"pushButton_4")
        sizePolicy.setHeightForWidth(self.pushButton_4.sizePolicy().hasHeightForWidth())
        self.pushButton_4.setSizePolicy(sizePolicy)
        self.pushButton_4.setMinimumSize(QSize(100, 100))
        self.pushButton_4.setFont(font1)

        self.gridLayout.addWidget(self.pushButton_4, 0, 1, 1, 1)

        self.pushButton_6 = QPushButton(self.gridLayoutWidget)
        self.pushButton_6.setObjectName(u"pushButton_6")
        sizePolicy.setHeightForWidth(self.pushButton_6.sizePolicy().hasHeightForWidth())
        self.pushButton_6.setSizePolicy(sizePolicy)
        self.pushButton_6.setMinimumSize(QSize(100, 100))
        self.pushButton_6.setFont(font1)

        self.gridLayout.addWidget(self.pushButton_6, 2, 1, 1, 1)

        self.pushButton_5 = QPushButton(self.gridLayoutWidget)
        self.pushButton_5.setObjectName(u"pushButton_5")
        sizePolicy.setHeightForWidth(self.pushButton_5.sizePolicy().hasHeightForWidth())
        self.pushButton_5.setSizePolicy(sizePolicy)
        self.pushButton_5.setMinimumSize(QSize(100, 100))
        self.pushButton_5.setFont(font1)

        self.gridLayout.addWidget(self.pushButton_5, 1, 1, 1, 1)

        self.pushButton_2 = QPushButton(self.gridLayoutWidget)
        self.pushButton_2.setObjectName(u"pushButton_2")
        sizePolicy.setHeightForWidth(self.pushButton_2.sizePolicy().hasHeightForWidth())
        self.pushButton_2.setSizePolicy(sizePolicy)
        self.pushButton_2.setMinimumSize(QSize(100, 100))
        self.pushButton_2.setFont(font1)

        self.gridLayout.addWidget(self.pushButton_2, 0, 0, 1, 1)

        self.pushButton_7 = QPushButton(self.gridLayoutWidget)
        self.pushButton_7.setObjectName(u"pushButton_7")
        sizePolicy.setHeightForWidth(self.pushButton_7.sizePolicy().hasHeightForWidth())
        self.pushButton_7.setSizePolicy(sizePolicy)
        self.pushButton_7.setMinimumSize(QSize(100, 100))
        self.pushButton_7.setFont(font1)

        self.gridLayout.addWidget(self.pushButton_7, 0, 2, 1, 1)

        self.pushButton_8 = QPushButton(self.gridLayoutWidget)
        self.pushButton_8.setObjectName(u"pushButton_8")
        sizePolicy.setHeightForWidth(self.pushButton_8.sizePolicy().hasHeightForWidth())
        self.pushButton_8.setSizePolicy(sizePolicy)
        self.pushButton_8.setMinimumSize(QSize(100, 100))
        self.pushButton_8.setFont(font1)

        self.gridLayout.addWidget(self.pushButton_8, 1, 2, 1, 1)

        self.pushButton_9 = QPushButton(self.gridLayoutWidget)
        self.pushButton_9.setObjectName(u"pushButton_9")
        sizePolicy.setHeightForWidth(self.pushButton_9.sizePolicy().hasHeightForWidth())
        self.pushButton_9.setSizePolicy(sizePolicy)
        self.pushButton_9.setMinimumSize(QSize(100, 100))
        self.pushButton_9.setFont(font1)

        self.gridLayout.addWidget(self.pushButton_9, 2, 2, 1, 1)

        self.label_2 = QLabel(self.centralwidget)
        self.label_2.setObjectName(u"label_2")
        self.label_2.setGeometry(QRect(10, 380, 651, 31))
        self.label_2.setFont(font)
        self.label_2.setAlignment(Qt.AlignCenter)
        MainWindow.setCentralWidget(self.centralwidget)
        self.menubar = QMenuBar(MainWindow)
        self.menubar.setObjectName(u"menubar")
        self.menubar.setGeometry(QRect(0, 0, 686, 26))
        MainWindow.setMenuBar(self.menubar)
        self.statusbar = QStatusBar(MainWindow)
        self.statusbar.setObjectName(u"statusbar")
        MainWindow.setStatusBar(self.statusbar)

        self.retranslateUi(MainWindow)

        QMetaObject.connectSlotsByName(MainWindow)
    # setupUi

    def retranslateUi(self, MainWindow):
        MainWindow.setWindowTitle(QCoreApplication.translate("MainWindow", u"MainWindow", None))
        self.label.setText(QCoreApplication.translate("MainWindow", u"TIC - TAC -TOE", None))
        self.pushButton.setText(QCoreApplication.translate("MainWindow", u"X", None))
        self.pushButton_3.setText(QCoreApplication.translate("MainWindow", u"X", None))
        self.pushButton_4.setText(QCoreApplication.translate("MainWindow", u"X", None))
        self.pushButton_6.setText(QCoreApplication.translate("MainWindow", u"X", None))
        self.pushButton_5.setText(QCoreApplication.translate("MainWindow", u"X", None))
        self.pushButton_2.setText(QCoreApplication.translate("MainWindow", u"X", None))
        self.pushButton_7.setText(QCoreApplication.translate("MainWindow", u"X", None))
        self.pushButton_8.setText(QCoreApplication.translate("MainWindow", u"X", None))
        self.pushButton_9.setText(QCoreApplication.translate("MainWindow", u"X", None))
        self.label_2.setText(QCoreApplication.translate("MainWindow", u"X turn", None))
    # retranslateUi

