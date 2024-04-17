QT       += core gui \
    quick

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    GUI_LEVEL.cpp \
    GUI_MAIN.cpp \
    GUI_MOD.cpp \
    main.cpp


HEADERS += \
    GUI_LEVEL.h \
    GUI_MAIN.h \
    GUI_MOD.h \
    main.h


FORMS += \
    GUI_LEVEL.ui \
    GUI_MAIN.ui \
    GUI_MOD.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
