# -*- coding: utf-8 -*-

################################################################################
## Form generated from reading UI file 'mainwindow.ui'
##
## Created by: Qt User Interface Compiler version 6.6.1
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
from PySide6.QtWidgets import (QApplication, QLabel, QMainWindow, QMenuBar,
    QPushButton, QSizePolicy, QStatusBar, QWidget)

class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        if not MainWindow.objectName():
            MainWindow.setObjectName(u"MainWindow")
        MainWindow.resize(686, 465)
        MainWindow.setStyleSheet(u"background-color: rgb(255, 255, 255);")
        self.centralwidget = QWidget(MainWindow)
        self.centralwidget.setObjectName(u"centralwidget")
        self.sound = QPushButton(self.centralwidget)
        self.sound.setObjectName(u"sound")
        self.sound.setGeometry(QRect(629, 10, 41, 41))
        self.sound.setStyleSheet(u"background-color: rgb(76, 199, 255);\n"
"image:url(:/myimage/image/sound_on.png);")
        self.button1 = QPushButton(self.centralwidget)
        self.button1.setObjectName(u"button1")
        self.button1.setGeometry(QRect(300, 290, 80, 51))
        font = QFont()
        font.setFamilies([u"Stencil"])
        font.setPointSize(11)
        self.button1.setFont(font)
        self.button1.setStyleSheet(u"background-color: rgb(76, 199, 255);")
        self.button2 = QPushButton(self.centralwidget)
        self.button2.setObjectName(u"button2")
        self.button2.setGeometry(QRect(300, 360, 80, 51))
        self.button2.setFont(font)
        self.button2.setStyleSheet(u"background-color: rgb(76, 199, 255);")
        self.label = QLabel(self.centralwidget)
        self.label.setObjectName(u"label")
        self.label.setGeometry(QRect(90, 10, 491, 261))
        self.label.setPixmap(QPixmap(u"../image/background3.jpg"))
        MainWindow.setCentralWidget(self.centralwidget)
        self.menubar = QMenuBar(MainWindow)
        self.menubar.setObjectName(u"menubar")
        self.menubar.setGeometry(QRect(0, 0, 686, 17))
        MainWindow.setMenuBar(self.menubar)
        self.statusbar = QStatusBar(MainWindow)
        self.statusbar.setObjectName(u"statusbar")
        MainWindow.setStatusBar(self.statusbar)

        self.retranslateUi(MainWindow)

        QMetaObject.connectSlotsByName(MainWindow)
    # setupUi

    def retranslateUi(self, MainWindow):
        MainWindow.setWindowTitle(QCoreApplication.translate("MainWindow", u"MainWindow", None))
        self.sound.setText("")
        self.button1.setText(QCoreApplication.translate("MainWindow", u"1 PLAYER", None))
        self.button2.setText(QCoreApplication.translate("MainWindow", u"2 PLAYERS", None))
        self.label.setText("")
    # retranslateUi

