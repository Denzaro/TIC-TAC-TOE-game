# -*- coding: utf-8 -*-

################################################################################
## Form generated from reading UI file 'play.ui'
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
from PySide6.QtWidgets import (QApplication, QLabel, QPushButton, QSizePolicy,
    QWidget)

class Ui_Play(object):
    def setupUi(self, Play):
        if not Play.objectName():
            Play.setObjectName(u"Play")
        Play.resize(686, 465)
        self.sound_2 = QPushButton(Play)
        self.sound_2.setObjectName(u"sound_2")
        self.sound_2.setGeometry(QRect(630, 10, 41, 41))
        self.sound_2.setStyleSheet(u"background-color: rgb(76, 199, 255);\n"
"image:url(:/myimage/image/sound_on.png);")
        self.labelA = QLabel(Play)
        self.labelA.setObjectName(u"labelA")
        self.labelA.setGeometry(QRect(210, 80, 261, 51))
        font = QFont()
        font.setFamilies([u"Stencil"])
        font.setPointSize(20)
        self.labelA.setFont(font)
        self.labelB = QLabel(Play)
        self.labelB.setObjectName(u"labelB")
        self.labelB.setGeometry(QRect(210, 150, 261, 51))
        self.labelB.setFont(font)

        self.retranslateUi(Play)

        QMetaObject.connectSlotsByName(Play)
    # setupUi

    def retranslateUi(self, Play):
        Play.setWindowTitle(QCoreApplication.translate("Play", u"Form", None))
        self.sound_2.setText("")
        self.labelA.setText(QCoreApplication.translate("Play", u"A", None))
        self.labelB.setText(QCoreApplication.translate("Play", u"B", None))
    # retranslateUi

