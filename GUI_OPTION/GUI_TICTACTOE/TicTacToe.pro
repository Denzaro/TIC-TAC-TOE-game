QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets core gui

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    GUI_NEW.cpp \
    main.cpp \
    option.cpp \
    result_tictactoe.cpp \
    tictactoe_op.cpp

HEADERS += \
    NEW.h \
    main.h \
    option.h \
    result_tictactoe.h \
    result_tictactoe.h \
    result_tictactoe.h \
    tictactoe_op.h \
    tictactoe_ui.h \
    tictactoe_ui.h \

FORMS += \
    NEW.ui \
    option.ui \
    result_tictactoe.ui \
    tictactoe_op.ui\
     tictactoe_op.ui\

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
